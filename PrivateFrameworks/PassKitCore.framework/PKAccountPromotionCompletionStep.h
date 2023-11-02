
@interface PKAccountPromotionCompletionStep : NSObject <NSCopying, NSSecureCoding> {
    bool  _completed;
    NSString * _currencyCode;
    NSDecimalNumber * _currentValue;
    NSDecimalNumber * _endValue;
    long long  _index;
    unsigned long long  _progressType;
}

@property (nonatomic) bool completed;
@property (nonatomic, retain) NSString *currencyCode;
@property (nonatomic, retain) NSDecimalNumber *currentValue;
@property (nonatomic, retain) NSDecimalNumber *endValue;
@property (nonatomic) long long index;
@property (nonatomic) unsigned long long progressType;

+ (id)completionStepsFromDictionaries:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_initWithCompletionStepDictionary:(id)arg1 index:(long long)arg2;
- (bool)completed;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyCode;
- (id)currentValue;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endValue;
- (unsigned long long)hash;
- (long long)index;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 index:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAccountPromotionCompletionStep:(id)arg1;
- (unsigned long long)progressType;
- (void)setCompleted:(bool)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setCurrentValue:(id)arg1;
- (void)setEndValue:(id)arg1;
- (void)setIndex:(long long)arg1;
- (void)setProgressType:(unsigned long long)arg1;

@end
