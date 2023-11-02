
@interface DIAttributeDate : DIAttribute <NSSecureCoding> {
    bool  _requireDay;
    bool  _requireMonth;
    bool  _requireYear;
    NSDate * currentValue;
    NSDate * defaultValue;
}

@property (getter=getCurrentValue, nonatomic, copy) NSDate *currentValue;
@property (nonatomic, copy) NSDate *defaultValue;
@property (nonatomic) bool requireDay;
@property (nonatomic) bool requireMonth;
@property (nonatomic) bool requireYear;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)defaultValue;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)getCurrentValue;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)requireDay;
- (bool)requireMonth;
- (bool)requireYear;
- (void)setCurrentValue:(id)arg1;
- (void)setDefaultValue:(id)arg1;
- (void)setRequireDay:(bool)arg1;
- (void)setRequireMonth:(bool)arg1;
- (void)setRequireYear:(bool)arg1;

@end