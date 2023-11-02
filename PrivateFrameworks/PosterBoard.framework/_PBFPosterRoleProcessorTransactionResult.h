
@interface _PBFPosterRoleProcessorTransactionResult : NSObject <PBFPosterRoleProcessorResult> {
    NSSet * _affectedRoles;
    NSDictionary * _collectionDiffsPerRole;
    NSArray * _emittedEvents;
    NSDictionary * _postCommitActivePosterConfigurationForRole;
    NSDictionary * _preCommitActivePosterConfigurationForRole;
}

@property (nonatomic, copy) NSSet *affectedRoles;
@property (nonatomic, copy) NSDictionary *collectionDiffsPerRole;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *emittedEvents;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *postCommitActivePosterConfigurationForRole;
@property (nonatomic, copy) NSDictionary *preCommitActivePosterConfigurationForRole;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)affectedRoles;
- (id)collectionDiffsPerRole;
- (id)emittedEvents;
- (id)postCommitActivePosterConfigurationForRole;
- (id)preCommitActivePosterConfigurationForRole;
- (void)setAffectedRoles:(id)arg1;
- (void)setCollectionDiffsPerRole:(id)arg1;
- (void)setEmittedEvents:(id)arg1;
- (void)setPostCommitActivePosterConfigurationForRole:(id)arg1;
- (void)setPreCommitActivePosterConfigurationForRole:(id)arg1;

@end
