
@interface _PSClusterPoint : NSObject <NSSecureCoding> {
    NSDate * _timestamp;
    bool  _timestampExists;
    double  _x;
    double  _y;
}

@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly) bool timestampExists;
@property (nonatomic) double x;
@property (nonatomic) double y;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)distanceToHull:(id)arg1;
- (double)distanceToLineFormedByStart:(id)arg1 End:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (double)euclideanDistanceToPoint:(id)arg1;
- (int)findSideOfLineFormedByStart:(id)arg1 End:(id)arg2;
- (unsigned long long)hash;
- (bool)inConvexHull:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1;
- (id)initWithX:(double)arg1 Y:(double)arg2;
- (bool)isEqual:(id)arg1;
- (void)setX:(double)arg1;
- (void)setY:(double)arg1;
- (id)timestamp;
- (bool)timestampExists;
- (double)x;
- (double)y;

@end
