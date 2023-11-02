
@interface SNDetectSignalThresholdRequest : NSObject <NSCopying, NSSecureCoding, SNAnalyzerCreating, SNRequest> {
    unsigned int  _blockSize;
    SNDetectSignalThresholdRequestImpl * _detector;
    double  _magnitudeThreshold;
    double  _sampleRate;
}

@property (nonatomic) unsigned int blockSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double magnitudeThreshold;
@property (nonatomic) double sampleRate;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)blockSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createAnalyzerWithError:(id*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)magnitudeThreshold;
- (double)sampleRate;
- (void)setBlockSize:(unsigned int)arg1;
- (void)setMagnitudeThreshold:(double)arg1;
- (void)setSampleRate:(double)arg1;

@end
