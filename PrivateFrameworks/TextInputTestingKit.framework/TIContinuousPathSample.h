
@interface TIContinuousPathSample : NSObject <NSSecureCoding> {
    double  _force;
    long long  _pathIndex;
    struct CGPoint { 
        double x; 
        double y; 
    }  _point;
    double  _radius;
    int  _stage;
    double  _timeStamp;
}

@property (nonatomic, readonly) double force;
@property (nonatomic, readonly) long long pathIndex;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } point;
@property (nonatomic, readonly) double radius;
@property (nonatomic, readonly) int stage;
@property (nonatomic, readonly) double timeStamp;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)force;
- (id)initWithCoder:(id)arg1;
- (id)initWithJsonDictionary:(id)arg1;
- (id)initWithPoint:(struct CGPoint { double x1; double x2; })arg1 timeStamp:(double)arg2 force:(double)arg3 radius:(double)arg4;
- (id)initWithPoint:(struct CGPoint { double x1; double x2; })arg1 timeStamp:(double)arg2 force:(double)arg3 radius:(double)arg4 stage:(int)arg5 pathIndex:(long long)arg6;
- (long long)pathIndex;
- (struct CGPoint { double x1; double x2; })point;
- (double)radius;
- (int)stage;
- (double)timeStamp;
- (id)toJsonDictionary;

@end
