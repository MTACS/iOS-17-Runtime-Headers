
@interface TSDPathCut : NSObject {
    long long  mSegment;
    double  mSkew;
    double  mT;
}

@property (nonatomic, readonly) long long segment;
@property (nonatomic, readonly) double skew;
@property (nonatomic, readonly) double t;

- (id)description;
- (id)initWithSegment:(long long)arg1 atT:(double)arg2 withSkew:(double)arg3;
- (long long)segment;
- (double)skew;
- (double)t;

@end
