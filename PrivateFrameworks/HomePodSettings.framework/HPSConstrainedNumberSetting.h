
@interface HPSConstrainedNumberSetting : HPSNumberSetting {
    NSNumber * _maximumValue;
    NSNumber * _minimumValue;
    NSNumber * _stepValue;
}

@property (nonatomic, readonly) NSNumber *maximumValue;
@property (nonatomic, readonly) NSNumber *minimumValue;
@property (nonatomic, readonly) NSNumber *stepValue;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyPath:(id)arg1 numberValue:(id)arg2 minimumValue:(id)arg3 maximumValue:(id)arg4 stepValue:(id)arg5;
- (id)maximumValue;
- (id)minimumValue;
- (id)stepValue;

@end
