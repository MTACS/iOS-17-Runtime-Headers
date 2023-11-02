
@interface IDSPhoneSubscription : NSObject <NSCopying, NSSecureCoding> {
    NSString * _labelID;
    long long  _subscriptionSlot;
}

@property (nonatomic, retain) NSString *labelID;
@property (nonatomic) long long subscriptionSlot;

+ (id)CTSIMSFromPhoneSubscriptions:(id)arg1;
+ (id)phoneSubscriptionWithLabelID:(id)arg1;
+ (id)phoneSubscriptionWithSIM:(id)arg1;
+ (id)phoneSubscriptionWithSubscriptionSlot:(long long)arg1;
+ (id)phoneSubscriptionWithSubscriptionSlot:(long long)arg1 andLabelID:(id)arg2;
+ (id)phoneSubscriptionsFromCTSIMs:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubscriptionSlot:(long long)arg1 labelID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPhoneSubscription:(id)arg1;
- (id)labelID;
- (id)matchingSim;
- (void)setLabelID:(id)arg1;
- (void)setSubscriptionSlot:(long long)arg1;
- (long long)subscriptionSlot;

@end
