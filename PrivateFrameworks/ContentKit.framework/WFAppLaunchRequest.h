
@interface WFAppLaunchRequest : INCAppLaunchRequest {
    bool  _requiresUserFacingApp;
}

@property (nonatomic) bool requiresUserFacingApp;

- (bool)isRequestForUserFacingApp;
- (void)performWithCompletionHandler:(id /* block */)arg1;
- (id)readableErrorFromError:(id)arg1;
- (bool)requiresUserFacingApp;
- (id)rootCauseErrorFromError:(id)arg1;
- (void)setRequiresUserFacingApp:(bool)arg1;

@end
