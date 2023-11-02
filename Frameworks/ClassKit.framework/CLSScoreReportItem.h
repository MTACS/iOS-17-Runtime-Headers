
@interface CLSScoreReportItem : CLSActivityReportItem <NSCopying, NSSecureCoding> {
    double  _maxValue;
    double  _value;
}

@property (nonatomic) double maxValue;
@property (nonatomic, readonly) double normalized;
@property (nonatomic) double value;

+ (bool)supportsSecureCoding;

- (void)add:(id)arg1;
- (long long)compare:(id)arg1;
- (id)convertToItemCompatibleWithItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)maxValue;
- (double)normalized;
- (void)scalarMultiply:(double)arg1;
- (void)setMaxValue:(double)arg1;
- (void)setValue:(double)arg1;
- (double)value;

@end
