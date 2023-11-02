
@interface CPLSimpleRecordTargetMapping : CPLRecordTargetMapping

- (void)enumerateTargetsWithBlock:(id /* block */)arg1;
- (void)enumerateUnknownTargetsWithBlock:(id /* block */)arg1;
- (void)enumerateUpdatedTargetsWithBlock:(id /* block */)arg1;
- (bool)hasUnknownTargets;
- (bool)hasUpdatedTargets;
- (void)setTarget:(id)arg1 forRecordWithScopedIdentifier:(id)arg2;
- (void)startTrackingUpdates;
- (id)targetForRecordWithScopedIdentifier:(id)arg1;
- (id)updatedTargetScopedIdentifiers;
- (id)updatedTargets;

@end
