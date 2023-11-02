
@interface SBSplashBoardLaunchRequestProvider : NSObject <XBApplicationLaunchRequestProviding> {
    SBApplicationController * _applicationController;
    FBSDisplayConfiguration * _displayConfiguration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithApplicationController:(id)arg1 displayConfiguration:(id)arg2;
- (id)launchRequestsForApplication:(id)arg1 withCompatibilityInfo:(id)arg2 defaultLaunchRequests:(id)arg3;

@end
