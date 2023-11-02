
@interface IDSCTSIM : NSObject <IDSCTSIM> {
    CTXPCServiceSubscriptionContext * _context;
    NSString * _mobileCountryCode;
    NSString * _mobileNetworkCode;
}

@property (nonatomic, readonly) NSString *SIMIdentifier;
@property (nonatomic, retain) CTXPCServiceSubscriptionContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDefaultVoiceSIM;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *mobileCountryCode;
@property (nonatomic, readonly) NSString *mobileNetworkCode;
@property (nonatomic, readonly) NSString *phoneNumber;
@property (nonatomic, readonly) unsigned long long slot;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)SIMIdentifier;
- (id)context;
- (id)description;
- (id)initWithContext:(id)arg1;
- (bool)isDefaultVoiceSIM;
- (id)label;
- (id)mobileCountryCode;
- (id)mobileNetworkCode;
- (id)phoneNumber;
- (void)setContext:(id)arg1;
- (unsigned long long)slot;

@end
