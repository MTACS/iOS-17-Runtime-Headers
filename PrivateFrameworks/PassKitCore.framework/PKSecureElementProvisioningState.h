
@interface PKSecureElementProvisioningState : NSObject <NSSecureCoding> {
    PKPaymentEligibilityResponse * _eligibilityResponse;
    NSData * _externalizedAuth;
    NSString * _nonce;
    NSString * _productIdentifier;
    PKPaymentProvisioningResponse * _provisioningResponse;
    NSData * _provisioningStepState;
    NSString * _referrerIdentifier;
    PKPaymentRequirementsResponse * _requirementsResponse;
    NSString * _secureElementReservationGroupIdentifier;
    NSString * _sid;
}

@property (nonatomic, retain) PKPaymentEligibilityResponse *eligibilityResponse;
@property (nonatomic, retain) NSData *externalizedAuth;
@property (nonatomic, retain) NSString *productIdentifier;
@property (nonatomic, retain) PKPaymentProvisioningResponse *provisioningResponse;
@property (nonatomic, retain) NSData *provisioningStepState;
@property (nonatomic, retain) NSString *referrerIdentifier;
@property (nonatomic, retain) PKPaymentRequirementsResponse *requirementsResponse;
@property (nonatomic, retain) NSString *secureElementReservationGroupIdentifier;
@property (nonatomic, readonly) NSString *sid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)createDivergentState;
- (id)description;
- (id)eligibilityResponse;
- (void)encodeWithCoder:(id)arg1;
- (id)externalizedAuth;
- (bool)hasNonce;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)productIdentifier;
- (id)provisioningResponse;
- (id)provisioningStepState;
- (id)referrerIdentifier;
- (id)requirementsResponse;
- (id)secureElementReservationGroupIdentifier;
- (void)setEligibilityResponse:(id)arg1;
- (void)setExternalizedAuth:(id)arg1;
- (void)setNonce:(id)arg1;
- (void)setProductIdentifier:(id)arg1;
- (void)setProvisioningResponse:(id)arg1;
- (void)setProvisioningStepState:(id)arg1;
- (void)setReferrerIdentifier:(id)arg1;
- (void)setRequirementsResponse:(id)arg1;
- (void)setSecureElementReservationGroupIdentifier:(id)arg1;
- (id)sid;
- (id)useNonce;

@end
