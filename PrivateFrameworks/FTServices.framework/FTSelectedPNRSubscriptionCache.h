
@interface FTSelectedPNRSubscriptionCache : NSObject {
    CTXPCContexts * _activeSubscriptionInfo;
    long long  _dualSIMCapability;
    NSString * _phoneNumber;
    CTXPCServiceSubscriptionContext * _selectedContext;
    CTXPCServiceSubscriptionInfo * _subscriptionInfo;
}

@property (nonatomic, retain) CTXPCContexts *activeSubscriptionInfo;
@property (nonatomic) long long dualSIMCapability;
@property (nonatomic, retain) NSString *phoneNumber;
@property (nonatomic, retain) CTXPCServiceSubscriptionContext *selectedContext;
@property (nonatomic, retain) CTXPCServiceSubscriptionInfo *subscriptionInfo;

- (void).cxx_destruct;
- (id)activeSubscriptionInfo;
- (id)debugDescription;
- (long long)dualSIMCapability;
- (id)phoneNumber;
- (id)selectedContext;
- (void)setActiveSubscriptionInfo:(id)arg1;
- (void)setDualSIMCapability:(long long)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setSelectedContext:(id)arg1;
- (void)setSubscriptionInfo:(id)arg1;
- (id)subscriptionInfo;

@end
