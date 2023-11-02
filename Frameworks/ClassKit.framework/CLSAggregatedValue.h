
@interface CLSAggregatedValue : CLSReportItem <NSCopying, NSSecureCoding> {
    int  _aggregateType;
    long long  _totalSampleCount;
    double  _value;
}

@property (nonatomic) int aggregateType;
@property (nonatomic, readonly) double normalized;
@property (nonatomic) long long totalSampleCount;
@property (nonatomic) double value;

+ (bool)supportsSecureCoding;

- (void)add:(id)arg1;
- (int)aggregateType;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)normalized;
- (void)scalarMultiply:(double)arg1;
- (void)setAggregateType:(int)arg1;
- (void)setTotalSampleCount:(long long)arg1;
- (void)setValue:(double)arg1;
- (long long)totalSampleCount;
- (double)value;

@end
