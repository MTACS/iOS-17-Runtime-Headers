
@protocol PBFPosterRoleProcessorResult <NSObject>

@required

- (NSSet *)affectedRoles;
- (NSDictionary *)collectionDiffsPerRole;
- (NSArray *)emittedEvents;
- (NSDictionary *)postCommitActivePosterConfigurationForRole;
- (NSDictionary *)preCommitActivePosterConfigurationForRole;

@end
