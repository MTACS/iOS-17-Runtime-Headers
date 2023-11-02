
@interface WiFiAwareDataSessionStatisticsHistogramBin : NSObject <NSSecureCoding> {
    double  _binEnd;
    double  _binStart;
    double  _value;
}

@property (nonatomic, readonly) double binEnd;
@property (nonatomic, readonly) double binStart;
@property (nonatomic) double value;

+ (bool)supportsSecureCoding;

- (double)binEnd;
- (double)binStart;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBinStart:(double)arg1 binEnd:(double)arg2 value:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setValue:(double)arg1;
- (double)value;

@end
