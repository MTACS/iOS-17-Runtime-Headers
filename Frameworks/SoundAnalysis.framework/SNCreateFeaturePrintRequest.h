
@interface SNCreateFeaturePrintRequest : NSObject <NSCopying, NSSecureCoding, SNAnalyzerCreating, SNRequest> {
    long long  _featurePrintType;
    float  _overlapFactor;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _windowDuration;
    SNTimeDurationConstraint * _windowDurationConstraint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long featurePrintType;
@property (readonly) unsigned long long hash;
@property (nonatomic) float overlapFactor;
@property (readonly) Class superclass;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } windowDuration;
@property (nonatomic, readonly) SNTimeDurationConstraint *windowDurationConstraint;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createAnalyzerWithError:(id*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)featurePrintType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeaturePrintType:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (float)overlapFactor;
- (void)setFeaturePrintType:(long long)arg1;
- (void)setOverlapFactor:(float)arg1;
- (void)setWindowDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })windowDuration;
- (id)windowDurationConstraint;

@end
