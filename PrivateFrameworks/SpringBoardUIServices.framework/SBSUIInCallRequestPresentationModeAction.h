
@interface SBSUIInCallRequestPresentationModeAction : BSAction

@property (nonatomic, readonly, copy) NSString *analyticsSource;
@property (nonatomic, readonly) long long requestedPresentationMode;
@property (getter=isUserInitiated, nonatomic, readonly) bool userInitiated;

- (id)analyticsSource;
- (id)initWithRequestedPresentationMode:(long long)arg1 isUserInitiated:(bool)arg2 analyticsSource:(id)arg3 responseHandler:(id /* block */)arg4;
- (bool)isUserInitiated;
- (long long)requestedPresentationMode;
- (void)sendCompletionResponseWithSuccess:(bool)arg1;

@end
