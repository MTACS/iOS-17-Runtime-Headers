
@interface RTDistanceInterval : NSObject <NSCopying, NSSecureCoding> {
    double  _endDistance;
    double  _intervalLength;
    double  _startDistance;
}

@property (readonly) double endDistance;
@property (readonly) double intervalLength;
@property (readonly) double startDistance;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)endDistance;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(double)arg1 length:(double)arg2;
- (id)initWithStartDistance:(double)arg1 endDistance:(double)arg2;
- (double)intervalLength;
- (bool)isEqual:(id)arg1;
- (double)startDistance;

@end
