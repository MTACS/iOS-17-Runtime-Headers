
@interface AKFollowUpSynchronizer : NSObject <AKAppleIDAuthenticationDelegate> {
    AKAppleIDAuthenticationController * _controller;
    <AKFollowUpProvider> * _followupProvider;
}

@property (nonatomic, retain) AKAppleIDAuthenticationController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <AKFollowUpProvider> *followupProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)updateSynchronizeTimeForAccount:(id)arg1 inStore:(id)arg2;
+ (void)updateSynchronizeTimeNoSaveForAccount:(id)arg1;

- (void).cxx_destruct;
- (id)_authController;
- (bool)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4;
- (id)controller;
- (id)followupProvider;
- (void)setController:(id)arg1;
- (void)setFollowupProvider:(id)arg1;
- (bool)shouldSynchronizeForAccount:(id)arg1;
- (bool)synchronizeFollowUpsForAccount:(id)arg1 inStore:(id)arg2 error:(id*)arg3;

@end
