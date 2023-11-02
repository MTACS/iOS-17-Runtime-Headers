
@interface SNClassifySoundRequest : NSObject <NSCopying, NSSecureCoding, SNAnalyzerCreating, SNRequest> {
    SNClassifierVariant * _classifier;
    NSArray * _knownClassifications;
    double  _overlapFactor;
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
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *knownClassifications;
@property double overlapFactor;
@property (readonly) Class superclass;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } windowDuration;
@property (readonly) SNTimeDurationConstraint *windowDurationConstraint;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createAnalyzerWithError:(id*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithClassifierIdentifier:(id)arg1 error:(id*)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithMLModel:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)knownClassifications;
- (double)overlapFactor;
- (void)setOverlapFactor:(double)arg1;
- (void)setWindowDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })windowDuration;
- (id)windowDurationConstraint;

@end
