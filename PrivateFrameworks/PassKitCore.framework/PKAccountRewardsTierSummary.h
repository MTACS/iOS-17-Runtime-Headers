
@interface PKAccountRewardsTierSummary : NSObject <NSCopying, NSSecureCoding, PKIdentifiable> {
    NSString * _currencyCode;
    NSDate * _endDate;
    NSDecimalNumber * _onePercentTotal;
    NSDecimalNumber * _specialTotal;
    NSDate * _startDate;
    NSDecimalNumber * _threePercentTotal;
    NSDecimalNumber * _twoPercentTotal;
    NSString * _uuid;
}

@property (nonatomic, retain) NSString *currencyCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (nonatomic, retain) NSDecimalNumber *onePercentTotal;
@property (nonatomic, retain) NSDecimalNumber *specialTotal;
@property (nonatomic, retain) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDecimalNumber *threePercentTotal;
@property (nonatomic, readonly) NSDecimalNumber *totalAmount;
@property (nonatomic, readonly) PKCurrencyAmount *totalCurrencyAmount;
@property (nonatomic, retain) NSDecimalNumber *twoPercentTotal;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyAmountForRewardsTier:(unsigned long long)arg1;
- (id)currencyCode;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 currencyCode:(id)arg3 onePercentTotal:(id)arg4 twoPercentTotal:(id)arg5 threePercentTotal:(id)arg6 specialTotal:(id)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRewardsTierSummary:(id)arg1;
- (id)onePercentTotal;
- (void)setCurrencyCode:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setOnePercentTotal:(id)arg1;
- (void)setSpecialTotal:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setThreePercentTotal:(id)arg1;
- (void)setTwoPercentTotal:(id)arg1;
- (id)specialTotal;
- (id)startDate;
- (id)threePercentTotal;
- (id)totalAmount;
- (id)totalCurrencyAmount;
- (id)totalForRewardsTier:(unsigned long long)arg1;
- (id)twoPercentTotal;

@end
