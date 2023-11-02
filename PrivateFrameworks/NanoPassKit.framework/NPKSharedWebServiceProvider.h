
@interface NPKSharedWebServiceProvider : NSObject <NPKPaymentWebServiceCompanionTargetDeviceDelegate> {
    NPKCompanionAgentConnection * _companionAgentConnection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _companionAgentConnectionLock;
    PKPeerPaymentAccount * _peerPaymentAccount;
    NPKPeerPaymentWebServiceCompanionTargetDevice * _peerPaymentTargetDevice;
    PKPeerPaymentWebService * _peerPaymentWebService;
    NPKPaymentWebServiceCompanionTargetDevice * _targetDevice;
    PKPaymentWebService * _webService;
}

@property (nonatomic, retain) NPKCompanionAgentConnection *companionAgentConnection;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } companionAgentConnectionLock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKPeerPaymentAccount *peerPaymentAccount;
@property (nonatomic, retain) NPKPeerPaymentWebServiceCompanionTargetDevice *peerPaymentTargetDevice;
@property (nonatomic, retain) PKPeerPaymentWebService *peerPaymentWebService;
@property (readonly) Class superclass;
@property (nonatomic, retain) NPKPaymentWebServiceCompanionTargetDevice *targetDevice;
@property (nonatomic, retain) PKPaymentWebService *webService;

+ (id)sharedWebServiceProvider;

- (void).cxx_destruct;
- (void)_deviceFailedToPair:(id)arg1;
- (id)_peerPaymentAccount;
- (id)_peerPaymentWebServiceContext;
- (id)_webServiceContext;
- (void)archiveWebServiceBackgroundContext:(id)arg1;
- (void)archiveWebServiceContext:(id)arg1;
- (void)checkCompanionPeerPaymentRegistrationState;
- (id)companionAgentConnection;
- (struct os_unfair_lock_s { unsigned int x1; })companionAgentConnectionLock;
- (void)dealloc;
- (void)handleAppletState:(id)arg1 forUniqueID:(id)arg2;
- (void)handleBalanceReminderUpdate:(id)arg1 balance:(id)arg2 forUniqueID:(id)arg3;
- (void)handleBalanceUpdate:(id)arg1 forUniqueID:(id)arg2;
- (void)handleCredentialsUpdate:(id)arg1 forUniqueID:(id)arg2;
- (void)handleDownloadAllPaymentPasses;
- (void)handlePaymentTransactions:(id)arg1 appletStates:(id)arg2 forUniqueIDs:(id)arg3;
- (void)handlePaymentWebServiceContextFromWatch:(id)arg1;
- (void)handlePreconditionNotMetWithUniqueIDs:(id)arg1 preconditionDescription:(id)arg2 shouldUnregister:(bool)arg3;
- (void)handlePreferredAID:(id)arg1 forPassWithUniqueID:(id)arg2;
- (void)handlePushToken:(id)arg1;
- (void)handleRemoveTransactionsWithIdentifiers:(id)arg1;
- (void)handleUpdatePaymentPassWithTypeIdentifier:(id)arg1;
- (void)handleUpdatedPeerPaymentWebServiceContext:(id)arg1 account:(id)arg2;
- (id)init;
- (void)loadWebService;
- (void)noteForegroundVerificationObserverActive:(bool)arg1;
- (id)peerPaymentAccount;
- (id)peerPaymentTargetDevice;
- (id)peerPaymentWebService;
- (void)sendPaymentOptionsDefaultsToWatch;
- (void)sendWebServiceContextToWatch;
- (void)setCompanionAgentConnection:(id)arg1;
- (void)setNewAuthRandom:(id /* block */)arg1;
- (void)setPeerPaymentAccount:(id)arg1;
- (void)setPeerPaymentTargetDevice:(id)arg1;
- (void)setPeerPaymentWebService:(id)arg1;
- (void)setTargetDevice:(id)arg1;
- (void)setWebService:(id)arg1;
- (void)showPaymentSetupForAppDisplayName:(id)arg1;
- (void)startBackgroundVerificationObserverForPass:(id)arg1 verificationMethod:(id)arg2;
- (id)targetDevice;
- (id)webService;

@end
