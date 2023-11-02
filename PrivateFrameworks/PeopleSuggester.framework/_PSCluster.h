
@interface _PSCluster : NSObject <NSSecureCoding> {
    NSMutableArray * _convexHull;
    NSMutableArray * _points;
}

@property (nonatomic, retain) NSMutableArray *convexHull;
@property (nonatomic, retain) NSMutableArray *points;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addPointToCluster:(id)arg1;
- (void)clearCluster;
- (long long)compareByAnglePoint:(id)arg1 andPoint:(id)arg2 withRef:(id)arg3;
- (void)computeConvexHull;
- (bool)containsPoint:(id)arg1;
- (id)convexHull;
- (unsigned long long)count;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPoints:(id)arg1 andHull:(id)arg2;
- (int)orientationOfPoints:(id)arg1 and:(id)arg2 and:(id)arg3;
- (id)pointAtIndex:(unsigned long long)arg1;
- (id)points;
- (void)setConvexHull:(id)arg1;
- (void)setPoints:(id)arg1;
- (void)sortArray:(id)arg1;

@end
