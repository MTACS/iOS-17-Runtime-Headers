
@interface MSDSetupUIController : NSObject {
    double  _autoEnrollmentTimeStamp;
    id /* block */  _completionHandler;
    NSData * _helpMenuUserTapped;
    BFFNavigationController * _navigationController;
    bool  _originalLocationServicesState;
}

@property (nonatomic) double autoEnrollmentTimeStamp;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) NSData *helpMenuUserTapped;
@property (nonatomic, retain) BFFNavigationController *navigationController;
@property bool originalLocationServicesState;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_restoreLocationServicesState;
- (void)_setupComplete:(bool)arg1;
- (void)_startEACSWithReason:(id)arg1 eraseDataPlan:(bool)arg2;
- (double)autoEnrollmentTimeStamp;
- (id /* block */)completionHandler;
- (void)disconnectWiFi;
- (void)enableLocationServices;
- (bool)hasSecureCookie;
- (id)helpMenuUserTapped;
- (void)markAsNotDemoAndEraseDataPlan:(bool)arg1;
- (id)navigationController;
- (bool)originalLocationServicesState;
- (void)popTopmostViewController;
- (void)pushViewController:(id)arg1 andRemoveTopmostView:(bool)arg2;
- (void)quitToCustomerFlow;
- (void)quitToHomeScreen;
- (void)quitToOfflineMode;
- (void)saveLocationServicesState;
- (void)setAutoEnrollmentTimeStamp:(double)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setHelpMenuRowSelection:(id)arg1;
- (void)setHelpMenuUserTapped:(id)arg1;
- (void)setNavigationController:(id)arg1;
- (void)setOriginalLocationServicesState:(bool)arg1;
- (void)setupCompleteWithStoreID:(id)arg1;

@end
