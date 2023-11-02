
@interface PKPaymentPassContent : PKPassContent <NSSecureCoding> {
    long long  _accessType;
    NSArray * _actionGroups;
    NSString * _appURLScheme;
    PKPassAuxiliaryRegistrationRequirements * _auxiliaryRegistrationRequirements;
    NSArray * _availableActions;
    NSString * _cobrandName;
    NSString * _customerServiceIdentifier;
    PKDynamicLayerConfiguration * _dynamicLayerConfiguration;
    long long  _identityType;
    NSDictionary * _localizedSuspendedReasonsByAID;
    NSString * _messagePushTopic;
    NSURL * _messageServiceRegistrationURL;
    NSURL * _messageServiceURL;
    long long  _paymentType;
    NSString * _shippingAddressSeed;
    NSString * _speakableMake;
    NSString * _speakableModel;
    PKSiriIntentsConfiguration * _supportedSiriIntents;
    bool  _supportsTransitOnly;
    NSString * _transactionPushTopic;
    NSURL * _transactionServiceRegistrationURL;
    NSURL * _transactionServiceURL;
    unsigned long long  _transitCommutePlanType;
    NSArray * _transitCommutePlans;
    NSArray * _upgradeRequests;
}

@property (nonatomic) long long accessType;
@property (nonatomic, copy) NSArray *actionGroups;
@property (nonatomic, copy) NSString *appURLScheme;
@property (nonatomic, retain) PKPassAuxiliaryRegistrationRequirements *auxiliaryRegistrationRequirements;
@property (nonatomic, copy) NSArray *availableActions;
@property (nonatomic, copy) NSString *cobrandName;
@property (nonatomic, copy) NSString *customerServiceIdentifier;
@property (nonatomic, retain) PKDynamicLayerConfiguration *dynamicLayerConfiguration;
@property (nonatomic) long long identityType;
@property (nonatomic, copy) NSDictionary *localizedSuspendedReasonsByAID;
@property (nonatomic, copy) NSString *messagePushTopic;
@property (nonatomic, copy) NSURL *messageServiceRegistrationURL;
@property (nonatomic, copy) NSURL *messageServiceURL;
@property (nonatomic) long long paymentType;
@property (nonatomic, copy) NSString *shippingAddressSeed;
@property (nonatomic, copy) NSString *speakableMake;
@property (nonatomic, copy) NSString *speakableModel;
@property (nonatomic, copy) PKSiriIntentsConfiguration *supportedSiriIntents;
@property (nonatomic) bool supportsTransitOnly;
@property (nonatomic, copy) NSString *transactionPushTopic;
@property (nonatomic, copy) NSURL *transactionServiceRegistrationURL;
@property (nonatomic, copy) NSURL *transactionServiceURL;
@property (nonatomic) unsigned long long transitCommutePlanType;
@property (nonatomic, copy) NSArray *transitCommutePlans;
@property (nonatomic, copy) NSArray *upgradeRequests;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)accessType;
- (id)actionGroups;
- (id)appURLScheme;
- (id)auxiliaryRegistrationRequirements;
- (id)availableActions;
- (id)cobrandName;
- (id)customerServiceIdentifier;
- (id)dynamicLayerConfiguration;
- (void)encodeWithCoder:(id)arg1;
- (long long)identityType;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2 privateBundle:(id)arg3 passType:(unsigned long long)arg4;
- (id)localizedSuspendedReasonsByAID;
- (id)messagePushTopic;
- (id)messageServiceRegistrationURL;
- (id)messageServiceURL;
- (long long)paymentType;
- (void)setAccessType:(long long)arg1;
- (void)setActionGroups:(id)arg1;
- (void)setAppURLScheme:(id)arg1;
- (void)setAuxiliaryRegistrationRequirements:(id)arg1;
- (void)setAvailableActions:(id)arg1;
- (void)setCobrandName:(id)arg1;
- (void)setCustomerServiceIdentifier:(id)arg1;
- (void)setDynamicLayerConfiguration:(id)arg1;
- (void)setIdentityType:(long long)arg1;
- (void)setLocalizedSuspendedReasonsByAID:(id)arg1;
- (void)setMessagePushTopic:(id)arg1;
- (void)setMessageServiceRegistrationURL:(id)arg1;
- (void)setMessageServiceURL:(id)arg1;
- (void)setPaymentType:(long long)arg1;
- (void)setShippingAddressSeed:(id)arg1;
- (void)setSpeakableMake:(id)arg1;
- (void)setSpeakableModel:(id)arg1;
- (void)setSupportedSiriIntents:(id)arg1;
- (void)setSupportsTransitOnly:(bool)arg1;
- (void)setTransactionPushTopic:(id)arg1;
- (void)setTransactionServiceRegistrationURL:(id)arg1;
- (void)setTransactionServiceURL:(id)arg1;
- (void)setTransitCommutePlanType:(unsigned long long)arg1;
- (void)setTransitCommutePlans:(id)arg1;
- (void)setUpgradeRequests:(id)arg1;
- (id)shippingAddressSeed;
- (id)speakableMake;
- (id)speakableModel;
- (id)supportedSiriIntents;
- (bool)supportsTransitOnly;
- (id)transactionPushTopic;
- (id)transactionServiceRegistrationURL;
- (id)transactionServiceURL;
- (unsigned long long)transitCommutePlanType;
- (id)transitCommutePlans;
- (id)upgradeRequests;

@end