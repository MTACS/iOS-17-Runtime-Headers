
@interface PRSRankingSpanCalculator : NSObject {
    float  _firstTermPosition;
    bool  _n2Exists;
    bool  _n3Exists;
    float  _normCount;
    float  _ordered;
    float  _pairDist;
    bool  _pathExists;
    float  _unordered;
}

@property (nonatomic) float firstTermPosition;
@property (nonatomic) bool n2Exists;
@property (nonatomic) bool n3Exists;
@property (nonatomic) float normCount;
@property (nonatomic) float ordered;
@property (nonatomic) float pairDist;
@property (nonatomic) bool pathExists;
@property (nonatomic) float unordered;

+ (bool)doesOrderedSpanExistWithArrayOfIndexArrays:(unsigned long long**)arg1 arrayOfIndexArraysCounts:(unsigned long long*)arg2 arrayOfIndexArraysCount:(unsigned long long)arg3 orderedSpan:(long long*)arg4 firstTermPosition:(unsigned long long*)arg5 queryTermCount:(unsigned long long)arg6;
+ (bool)doesOrderedSpanExistWithArrayOfIndexArrays:(unsigned long long**)arg1 arrayOfIndexArraysCounts:(unsigned long long*)arg2 arrayOfIndexArraysCount:(unsigned long long)arg3 queryTermCount:(unsigned long long)arg4 kTermCount:(unsigned long long)arg5;
+ (long long)minimumAnyOrderSpanWithArrayOfIndexArrays:(unsigned long long**)arg1 arrayOfIndexArraysCounts:(unsigned long long*)arg2 arrayOfIndexArraysCount:(unsigned long long)arg3 queryTermCount:(unsigned long long)arg4;
+ (long long)minimumPairDistanceWithArrayOfIndexArrays:(unsigned long long**)arg1 arrayOfIndexArraysCounts:(unsigned long long*)arg2 arrayOfIndexArraysCount:(unsigned long long)arg3 queryTermCount:(unsigned long long)arg4 tokenCount:(unsigned long long)arg5;

- (id)description;
- (float)firstTermPosition;
- (bool)n2Exists;
- (bool)n3Exists;
- (float)normCount;
- (float)ordered;
- (float)pairDist;
- (bool)pathExists;
- (void)reset;
- (void)resetSpans;
- (void)setFirstTermPosition:(float)arg1;
- (void)setN2Exists:(bool)arg1;
- (void)setN3Exists:(bool)arg1;
- (void)setNormCount:(float)arg1;
- (void)setOrdered:(float)arg1;
- (void)setPairDist:(float)arg1;
- (void)setPathExists:(bool)arg1;
- (void)setUnordered:(float)arg1;
- (float)unordered;
- (void)updateWithTermPositions:(id)arg1 queryTermCount:(unsigned long long)arg2 tokenCount:(unsigned long long)arg3;

@end
