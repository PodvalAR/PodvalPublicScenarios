class MyTestComponentClass : ScriptComponentClass {};

class MyTestComponent : ScriptComponent {
	override void OnPostInit(IEntity owner) {
		if (!GetGame().InPlayMode())
			return;
		super.OnPostInit(owner);
	};
};
