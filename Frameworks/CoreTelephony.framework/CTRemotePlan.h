
@interface CTRemotePlan : CTPlan {
    unsigned long long  _addOnCarrierFlowType;
    unsigned long long  _addOnPurchaseType;
    CTRemotePlanIdentifier * _planID;
    CTPlanSignUpDetails * _signUpDetails;
    CTPlanTransferAttributes * _transferAttributes;
}

@property (nonatomic) unsigned long long addOnCarrierFlowType;
@property (nonatomic) unsigned long long addOnPurchaseType;
@property (nonatomic, retain) CTRemotePlanIdentifier *planID;
@property (nonatomic, retain) CTPlanSignUpDetails *signUpDetails;
@property (nonatomic, retain) CTPlanTransferAttributes *transferAttributes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)addOnCarrierFlowType;
- (unsigned long long)addOnPurchaseType;
- (id)carrierName;
- (id)countryCode;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)iccid;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)label;
- (id)phoneNumber;
- (id)planID;
- (void)setAddOnCarrierFlowType:(unsigned long long)arg1;
- (void)setAddOnPurchaseType:(unsigned long long)arg1;
- (void)setPlanID:(id)arg1;
- (void)setSignUpDetails:(id)arg1;
- (void)setTransferAttributes:(id)arg1;
- (id)signUpDetails;
- (id)transferAttributes;

@end
