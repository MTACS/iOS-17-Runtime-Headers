
@interface SASTimeIntervalTransport : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _transport;
}

@property (nonatomic, retain) NSNumber *transport;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimeInterval:(double)arg1;
- (void)setTransport:(id)arg1;
- (double)timeInterval;
- (id)transport;

@end
