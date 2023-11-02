
@interface TPSCellularNetworkController : NSObject <TPSRegistrationTelephonyControllerDelegate> {
    NSArray * _networkItems;
    CTNetworkSelectionInfo * _networkSelectionInfo;
    long long  _networkSelectionMode;
    NSArray * _networks;
    TPSRegistrationTelephonyController * _registrationController;
    TPSCellularNetworkItem * _selectedNetworkItem;
    CTXPCServiceSubscriptionContext * _subscriptionContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *networkItems;
@property (getter=isNetworkSelectionEnabled, nonatomic, readonly) bool networkSelectionEnabled;
@property (nonatomic, retain) CTNetworkSelectionInfo *networkSelectionInfo;
@property (nonatomic) long long networkSelectionMode;
@property (nonatomic, copy) NSArray *networks;
@property (nonatomic, readonly) TPSRegistrationTelephonyController *registrationController;
@property (nonatomic, retain) TPSCellularNetworkItem *selectedNetworkItem;
@property (nonatomic, readonly) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSubscriptionContext:(id)arg1;
- (bool)isNetworkSelectionEnabled;
- (id)networkItemAtIndex:(long long)arg1;
- (id)networkItemForNetwork:(id)arg1;
- (id)networkItems;
- (id)networkSelectionInfo;
- (void)networkSelectionInfoChangedForRegistrationController:(id)arg1;
- (long long)networkSelectionMode;
- (id)networks;
- (void)networksChangedForRegistrationController:(id)arg1;
- (id)registrationController;
- (void)selectNetworkItemAtIndex:(unsigned long long)arg1;
- (void)selectNetworkSelectionMode:(long long)arg1;
- (id)selectedNetworkItem;
- (void)setNetworkItems:(id)arg1;
- (void)setNetworkSelectionInfo:(id)arg1;
- (void)setNetworkSelectionMode:(long long)arg1;
- (void)setNetworks:(id)arg1;
- (void)setSelectedNetworkItem:(id)arg1;
- (id)subscriptionContext;
- (void)updateNetworkSelectionModeForNetworkSelectionInfo:(id)arg1;
- (void)updateSelectedNetworkForNetworkSelectionInfo:(id)arg1;

@end
