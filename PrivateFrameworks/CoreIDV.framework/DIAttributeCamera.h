
@interface DIAttributeCamera : DIAttribute <NSSecureCoding> {
    NSArray * _scanRequirements;
    NSArray * currentValue;
}

@property (getter=getCurrentValue, nonatomic, copy) NSArray *currentValue;
@property (nonatomic, retain) NSArray *scanRequirements;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)defaultValue;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)getCurrentValue;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)scanRequirements;
- (void)setCurrentValue:(id)arg1;
- (void)setScanRequirements:(id)arg1;

@end
