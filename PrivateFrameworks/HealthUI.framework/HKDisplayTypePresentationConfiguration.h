
@interface HKDisplayTypePresentationConfiguration : NSObject <NSCopying> {
    long long  _currentValue;
    long long  _detailChart;
    long long  _secondaryValue;
    bool  _singleDailyValue;
}

@property (nonatomic, readonly) long long currentValue;
@property (nonatomic, readonly) long long detailChart;
@property (nonatomic, readonly) long long secondaryValue;
@property (nonatomic, readonly) bool singleDailyValue;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)currentValue;
- (long long)detailChart;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCurrentValue:(long long)arg1 secondaryValue:(long long)arg2 detailChart:(long long)arg3 singleDailyValue:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (long long)secondaryValue;
- (bool)singleDailyValue;

@end
