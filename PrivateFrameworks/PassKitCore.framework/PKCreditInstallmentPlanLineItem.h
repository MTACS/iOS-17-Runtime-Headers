
@interface PKCreditInstallmentPlanLineItem : NSObject <NSCopying, NSSecureCoding> {
    NSDecimalNumber * _amount;
    unsigned long long  _duration;
    NSString * _identifier;
    NSString * _itemDescription;
    NSDecimalNumber * _paymentsToDateAmount;
    long long  _state;
    long long  _type;
}

@property (nonatomic, retain) NSDecimalNumber *amount;
@property (nonatomic) unsigned long long duration;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *itemDescription;
@property (nonatomic, retain) NSDecimalNumber *paymentsToDateAmount;
@property (nonatomic) long long state;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)amount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)duration;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToInstallmentPlanLineItem:(id)arg1;
- (id)itemDescription;
- (id)paymentsToDateAmount;
- (void)setAmount:(id)arg1;
- (void)setDuration:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setItemDescription:(id)arg1;
- (void)setPaymentsToDateAmount:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setType:(long long)arg1;
- (long long)state;
- (long long)type;

@end
