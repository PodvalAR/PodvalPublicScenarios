modded class RHS_SightStabilizationInfo {
	override void OnSightADSPostFrame(IEntity owner, float timeSlice) {
		if (!m_TurretStabilizationComponent)
			return;
		super.OnSightADSPostFrame(owner, timeSlice);
	};
};
