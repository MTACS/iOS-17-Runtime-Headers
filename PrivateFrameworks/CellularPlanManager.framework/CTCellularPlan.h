
@interface CTCellularPlan : NSObject <NSCopying, NSSecureCoding> {
    bool  _isHomePlan;
    NSString * _phoneNumber;
    CTCellularPlanProfile * _profile;
    bool  _requiresUserConsent;
    CTCellularPlanSubscription * _subscription;
    NSNumber * _subscriptionStatusOverride;
}

@property (nonatomic, readonly) int accountStatus;
@property (nonatomic, readonly) NSString *accountURL;
@property (nonatomic, readonly) bool autoRenew;
@property (nonatomic, readonly) double billingEndDate;
@property (nonatomic, readonly) double billingStartDate;
@property (nonatomic, readonly) NSString *carrierName;
@property (nonatomic, readonly) NSArray *dataUsage;
@property (nonatomic, readonly) NSString *iccid;
@property (nonatomic, readonly) bool isDeleteNotAllowed;
@property (nonatomic, readonly) bool isDisableNotAllowed;
@property (nonatomic) bool isHomePlan;
@property (nonatomic, readonly) bool isSelectable;
@property (nonatomic, readonly) bool isSelected;
@property (nonatomic, retain) NSString *phoneNumber;
@property (nonatomic, readonly) NSString *planDescription;
@property (nonatomic, readonly) int planStatus;
@property (nonatomic, readonly) int planType;
@property (nonatomic, retain) CTCellularPlanProfile *profile;
@property (nonatomic, readonly) NSData *profileId;
@property (nonatomic) bool requiresUserConsent;
@property (nonatomic, readonly) int status;
@property (nonatomic, retain) CTCellularPlanSubscription *subscription;
@property (nonatomic, retain) NSNumber *subscriptionStatusOverride;
@property (nonatomic, readonly) double timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)accountStatus;
- (id)accountURL;
- (bool)autoRenew;
- (double)billingEndDate;
- (double)billingStartDate;
- (id)carrierName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataUsage;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)iccid;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithProfile:(id)arg1 subscription:(id)arg2;
- (bool)isDeleteNotAllowed;
- (bool)isDisableNotAllowed;
- (bool)isHomePlan;
- (bool)isSelectable;
- (bool)isSelected;
- (id)phoneNumber;
- (id)planDescription;
- (long long)planDescriptionCompare:(id)arg1;
- (int)planStatus;
- (int)planType;
- (id)profile;
- (id)profileId;
- (id)redactedDescription;
- (bool)requiresUserConsent;
- (void)setIsHomePlan:(bool)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setRequiresUserConsent:(bool)arg1;
- (void)setSubscription:(id)arg1;
- (void)setSubscriptionStatusOverride:(id)arg1;
- (int)status;
- (id)statusAsString:(id)arg1;
- (id)subscription;
- (id)subscriptionStatusOverride;
- (double)timestamp;

@end
