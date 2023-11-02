
@interface SMTSiriIntendedInfo : NSObject <NSCopying, NSSecureCoding> {
    float  _aftmScore;
    float  _checkerScore;
    NSNumber * _invocationType;
    float  _lrnnOffset;
    float  _lrnnScale;
    float  _lrnnScore;
    float  _lrnnThreshold;
    float  _odldScore;
    float  _spkrIdScore;
}

@property (nonatomic, readonly) float aftmScore;
@property (nonatomic, readonly) float checkerScore;
@property (nonatomic, readonly, copy) NSNumber *invocationType;
@property (nonatomic, readonly) float lrnnOffset;
@property (nonatomic, readonly) float lrnnScale;
@property (nonatomic, readonly) float lrnnScore;
@property (nonatomic, readonly) float lrnnThreshold;
@property (nonatomic, readonly) float odldScore;
@property (nonatomic, readonly) float spkrIdScore;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (float)aftmScore;
- (float)checkerScore;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOdldScore:(float)arg1 aftmScore:(float)arg2 spkrIdScore:(float)arg3 lrnnScore:(float)arg4 checkerScore:(float)arg5 invocationType:(id)arg6;
- (id)initWithOdldScore:(float)arg1 aftmScore:(float)arg2 spkrIdScore:(float)arg3 lrnnScore:(float)arg4 checkerScore:(float)arg5 invocationType:(id)arg6 lrnnThreshold:(float)arg7 lrnnScale:(float)arg8 lrnnOffset:(float)arg9;
- (id)invocationType;
- (bool)isEqual:(id)arg1;
- (float)lrnnOffset;
- (float)lrnnScale;
- (float)lrnnScore;
- (float)lrnnThreshold;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (float)odldScore;
- (float)spkrIdScore;

@end
