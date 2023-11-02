
@interface PLOPTICSClusterDescriptor : NSObject {
    NSNumber * _clusterSize;
    NSNumber * _endIndex;
    NSNumber * _minCoreDistance;
    NSNumber * _minCoreDistanceIndex;
    NSNumber * _rootLevel;
    NSNumber * _startIndex;
}

@property (nonatomic, readonly, retain) NSNumber *clusterSize;
@property (nonatomic, readonly, retain) NSNumber *endIndex;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } indexRange;
@property (nonatomic, readonly, retain) NSNumber *minCoreDistance;
@property (nonatomic, readonly, retain) NSNumber *minCoreDistanceIndex;
@property (nonatomic, readonly, retain) NSNumber *rootLevel;
@property (nonatomic, readonly, retain) NSNumber *startIndex;

+ (id)clusterDescriptor:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 rootLevel:(long long)arg2 minCoreDistanceIndex:(long long)arg3 minCoreDistance:(double)arg4;

- (void).cxx_destruct;
- (id)clusterSize;
- (id)endIndex;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })indexRange;
- (id)initWithParameters:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 rootLevel:(long long)arg2 minCoreDistanceIndex:(long long)arg3 minCoreDistance:(double)arg4;
- (id)minCoreDistance;
- (id)minCoreDistanceIndex;
- (id)rootLevel;
- (id)startIndex;

@end
