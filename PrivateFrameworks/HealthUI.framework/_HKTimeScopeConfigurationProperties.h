
@interface _HKTimeScopeConfigurationProperties : NSObject {
    long long  _horizontalIndex;
    long long  _numberOfHorizontalDisplayTypes;
    long long  _timeScope;
}

@property (nonatomic) long long horizontalIndex;
@property (nonatomic) long long numberOfHorizontalDisplayTypes;
@property (nonatomic) long long timeScope;

- (long long)horizontalIndex;
- (long long)numberOfHorizontalDisplayTypes;
- (void)setHorizontalIndex:(long long)arg1;
- (void)setNumberOfHorizontalDisplayTypes:(long long)arg1;
- (void)setTimeScope:(long long)arg1;
- (long long)timeScope;

@end
