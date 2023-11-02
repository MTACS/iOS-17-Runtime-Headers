
@interface SBLegacyVOIPRefreshWakeTracker : NSObject <SBApplicationWakeLifecycleHandling> {
    RBSAssertion * _appKeepAliveAssertion;
}

@property (nonatomic, retain) RBSAssertion *appKeepAliveAssertion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createAssertionForAppProcessIdentity:(id)arg1;
- (id)appKeepAliveAssertion;
- (bool)beginWakeForApplication:(id)arg1;
- (void)dealloc;
- (void)endWake;
- (void)setAppKeepAliveAssertion:(id)arg1;
- (double)wakeDuration;

@end
