
@protocol PBFPosterRoleProcessorTransaction <BSInvalidatable>

@required

- (<PBFPosterRoleCoordinatorTransitionContext> *)context;
- (NSString *)reason;
- (NSString *)shortIdentifier;
- (NSDictionary *)userInfo;

@end
