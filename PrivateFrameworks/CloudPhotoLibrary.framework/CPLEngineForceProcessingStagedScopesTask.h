
@interface CPLEngineForceProcessingStagedScopesTask : CPLEngineForceSyncTask

- (bool)bypassForceSyncLimitations;
- (id)description;
- (bool)forcingProcessedStagedScopes;
- (id)initWithEngineLibrary:(id)arg1 delegate:(id)arg2;

@end
