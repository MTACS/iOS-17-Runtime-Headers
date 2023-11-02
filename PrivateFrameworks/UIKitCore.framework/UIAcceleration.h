
@interface UIAcceleration : NSObject {
    double  _timestamp;
    double  _x;
    double  _y;
    double  _z;
}

@property (nonatomic) double timestamp;
@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double z;

- (id)description;
- (void)setTimestamp:(double)arg1;
- (void)setX:(double)arg1;
- (void)setY:(double)arg1;
- (void)setZ:(double)arg1;
- (double)timestamp;
- (double)x;
- (double)y;
- (double)z;

@end
