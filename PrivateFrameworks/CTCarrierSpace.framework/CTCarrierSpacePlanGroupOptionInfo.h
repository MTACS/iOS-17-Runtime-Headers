
@interface CTCarrierSpacePlanGroupOptionInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _planDetailsURL;
    NSString * _planId;
    NSString * _planLabel;
    bool  _planPurchasable;
    NSString * _planPurchaseURL;
    unsigned char  _planSubscriptionStatus;
    NSString * _planTermsURL;
    long long  _planType;
    NSString * _planValue;
}

@property (nonatomic, retain) NSString *planDetailsURL;
@property (nonatomic, retain) NSString *planId;
@property (nonatomic, retain) NSString *planLabel;
@property (nonatomic) bool planPurchasable;
@property (nonatomic, retain) NSString *planPurchaseURL;
@property (nonatomic, readonly) long long planStatus;
@property (nonatomic) unsigned char planSubscriptionStatus;
@property (nonatomic, retain) NSString *planTermsURL;
@property (nonatomic) long long planType;
@property (nonatomic, retain) NSString *planValue;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)planDetailsURL;
- (id)planId;
- (id)planLabel;
- (bool)planPurchasable;
- (id)planPurchaseURL;
- (long long)planStatus;
- (unsigned char)planSubscriptionStatus;
- (id)planTermsURL;
- (long long)planType;
- (id)planValue;
- (void)setPlanDetailsURL:(id)arg1;
- (void)setPlanId:(id)arg1;
- (void)setPlanLabel:(id)arg1;
- (void)setPlanPurchasable:(bool)arg1;
- (void)setPlanPurchaseURL:(id)arg1;
- (void)setPlanSubscriptionStatus:(unsigned char)arg1;
- (void)setPlanTermsURL:(id)arg1;
- (void)setPlanType:(long long)arg1;
- (void)setPlanValue:(id)arg1;

@end
