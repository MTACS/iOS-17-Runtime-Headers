
@interface GEOComposedStringArgument_Frequency : GEOComposedStringArgument {
    NSMeasurement * _defaultMaxValue;
    NSMeasurement * _defaultMinValue;
    NSMeasurement * _defaultValue;
    NSMeasurement * _overrideMaxValue;
    NSMeasurement * _overrideMinValue;
    NSMeasurement * _overrideValue;
}

@property (nonatomic) double overrideMaxValue;
@property (nonatomic) double overrideMinValue;
@property (nonatomic) double overrideValue;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithGeoFormatArgument:(id)arg1;
- (id)_replacementValueForFrequencyRange;
- (id)_replacementValueForFrequencyValue;
- (id)_stringReplacementWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)frequencyFormat;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)overrideMaxValue;
- (double)overrideMinValue;
- (double)overrideValue;
- (void)setOverrideMaxValue:(double)arg1;
- (void)setOverrideMinValue:(double)arg1;
- (void)setOverrideValue:(double)arg1;

@end
