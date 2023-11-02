
@interface CTDisplayPlan : NSObject <NSSecureCoding> {
    unsigned long long  _attributes;
    NSString * _carrierName;
    bool  _isPhysical;
    NSString * _label;
    NSString * _phoneNumber;
    CTPlan * _plan;
    long long  _status;
}

@property (nonatomic, readonly) unsigned long long attributes;
@property (nonatomic, readonly) NSString *carrierName;
@property (nonatomic, readonly) bool isPhysical;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *phoneNumber;
@property (nonatomic, readonly) CTPlan *plan;
@property (nonatomic, readonly) long long status;

// Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)attributes;
- (id)carrierName;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlan:(id)arg1 status:(long long)arg2 attributes:(unsigned long long)arg3 isPhysical:(bool)arg4 carrierName:(id)arg5 phoneNumber:(id)arg6 label:(id)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isPhysical;
- (id)label;
- (id)phoneNumber;
- (id)plan;
- (long long)status;

// Image: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport

- (bool)isNotEligibleActivationPolicyMismatchPlan;
- (bool)isOnDeviceTransferredPlan;
- (bool)isOneClickTransferablePlan;
- (bool)isTransferIneligiblePlan;
- (bool)isTransferablePlan;
- (bool)isWebsheetTransferablePlan;
- (id)remotePlan;
- (unsigned long long)transferCapability;

@end
