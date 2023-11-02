
@interface SNNullRequest : NSObject <NSCopying, NSSecureCoding, SNAnalyzerCreating, SNRequest> {
    unsigned int  _blockSize;
    double  _computationalDutyCycle;
    SNNullDetector * _detector;
    bool  _graphIsDeadEnded;
    double  _sampleRate;
    bool  _shouldThrowException;
}

@property (nonatomic) unsigned int blockSize;
@property (nonatomic) double computationalDutyCycle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool graphIsDeadEnded;
@property (readonly) unsigned long long hash;
@property (nonatomic) double sampleRate;
@property (nonatomic) bool shouldThrowException;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)blockSize;
- (double)computationalDutyCycle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createAnalyzerWithError:(id*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)graphIsDeadEnded;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)sampleRate;
- (void)setBlockSize:(unsigned int)arg1;
- (void)setComputationalDutyCycle:(double)arg1;
- (void)setGraphIsDeadEnded:(bool)arg1;
- (void)setSampleRate:(double)arg1;
- (void)setShouldThrowException:(bool)arg1;
- (bool)shouldThrowException;

@end
