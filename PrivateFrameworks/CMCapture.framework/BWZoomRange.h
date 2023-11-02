
@interface BWZoomRange : NSObject <NSCopying> {
    float  _fudgedLowerBound;
    float  _fudgedUpperBound;
    unsigned long long  _hash;
    float  _lowerBound;
    float  _upperBound;
}

@property (nonatomic, readonly) float fudgedLowerBound;
@property (nonatomic, readonly) float fudgedUpperBound;
@property (nonatomic, readonly) float lowerBound;
@property (nonatomic, readonly) float upperBound;

+ (id)fudgedZoomRangeWithLower:(float)arg1 upperBound:(float)arg2 fudgedLowerBound:(float)arg3 fudgedUpperBound:(float)arg4;
+ (id)zoomRangeWithLower:(float)arg1 upperBound:(float)arg2;

- (float)applyFudgeToZoomFactor:(float)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (float)fudgedLowerBound;
- (float)fudgedUpperBound;
- (unsigned long long)hash;
- (id)initWithLowerBound:(float)arg1 upperBound:(float)arg2;
- (id)initWithLowerBound:(float)arg1 upperBound:(float)arg2 fudgedLowerBound:(float)arg3 fudgedUpperBound:(float)arg4;
- (bool)isEqual:(id)arg1;
- (float)lowerBound;
- (float)upperBound;

@end
