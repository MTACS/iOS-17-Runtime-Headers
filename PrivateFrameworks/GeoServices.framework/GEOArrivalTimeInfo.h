
@interface GEOArrivalTimeInfo : NSObject <NSSecureCoding> {
    unsigned long long  _legIndex;
    double  _remainingTime;
}

@property (nonatomic) unsigned long long legIndex;
@property (nonatomic) double remainingTime;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLegIndex:(unsigned long long)arg1 remainingTime:(double)arg2;
- (unsigned long long)legIndex;
- (double)remainingTime;
- (void)setLegIndex:(unsigned long long)arg1;
- (void)setRemainingTime:(double)arg1;

@end
