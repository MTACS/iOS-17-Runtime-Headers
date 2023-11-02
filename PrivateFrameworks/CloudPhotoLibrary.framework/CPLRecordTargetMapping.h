
@interface CPLRecordTargetMapping : NSObject {
    NSMutableSet * _scopedIdentifiersWithUnknownTargets;
    NSMutableDictionary * _targets;
    NSMutableDictionary * _targetsFromOtherScopedIdentifier;
    NSMutableSet * _updatedScopedIdentifiers;
}

@property (nonatomic, readonly) NSArray *allTargetScopedIdentifiers;
@property (nonatomic, readonly) bool hasUnknownTargets;
@property (nonatomic, readonly) bool hasUpdatedTargets;
@property (nonatomic, readonly) NSString *targetDescriptions;
@property (nonatomic, readonly) NSArray *unknownTargetScopedIdentifiers;
@property (nonatomic, readonly) NSSet *updatedTargetScopedIdentifiers;
@property (nonatomic, readonly) NSString *updatedTargetsDescription;

- (void).cxx_destruct;
- (void)_setTarget:(id)arg1 forRecordWithScopedIdentifier:(id)arg2 isUpdate:(bool)arg3;
- (void)addKnownTarget:(id)arg1 forRecordWithScopedIdentifier:(id)arg2;
- (id)allTargetScopedIdentifiers;
- (void)enumerateTargetsWithBlock:(id /* block */)arg1;
- (void)enumerateUnknownTargetsWithBlock:(id /* block */)arg1;
- (void)enumerateUpdatedTargetsWithBlock:(id /* block */)arg1;
- (bool)hasUnknownTargets;
- (bool)hasUpdatedTargets;
- (id)init;
- (void)setTarget:(id)arg1 forRecordWithScopedIdentifier:(id)arg2;
- (void)startTrackingUpdates;
- (id)targetDescriptions;
- (id)targetForRecordWithOtherScopedIdentifier:(id)arg1;
- (id)targetForRecordWithScopedIdentifier:(id)arg1;
- (id)unknownTargetScopedIdentifiers;
- (id)updatedTargetScopedIdentifiers;
- (id)updatedTargetsDescription;

@end
