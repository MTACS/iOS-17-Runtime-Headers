
@interface SHSignatureBuffer : NSObject {
    double  _bufferMaxSize;
    double  _maximumSignatureDuration;
    double  _minimumSignatureDuration;
    bool  _shouldGenerateSpectralOutput;
    NSMutableArray * _slots;
}

@property (nonatomic) double bufferMaxSize;
@property (nonatomic, readonly) double currentSignatureDuration;
@property (nonatomic) double maximumSignatureDuration;
@property (nonatomic) double minimumSignatureDuration;
@property (nonatomic) bool shouldGenerateSpectralOutput;
@property (nonatomic, readonly) NSMutableArray *slots;

+ (id)sessionDriverSignatureSlotWithDuration:(double)arg1 shouldGenerateSpectralOutput:(bool)arg2;

- (void).cxx_destruct;
- (double)bufferMaxSize;
- (double)currentSignatureDuration;
- (void)discardSignatureWithID:(id)arg1;
- (double)duration;
- (void)flow:(id)arg1 time:(id)arg2;
- (id)generateCurrentSignature;
- (id)initWithMinimumSignatureDuration:(double)arg1 maximumSignatureDuration:(double)arg2 bufferDuration:(double)arg3;
- (id)initWithMinimumSignatureDuration:(double)arg1 maximumSignatureDuration:(double)arg2 bufferDuration:(double)arg3 signatureGenerator:(id)arg4;
- (double)maximumSignatureDuration;
- (double)minimumSignatureDuration;
- (void)reset;
- (void)setBufferMaxSize:(double)arg1;
- (void)setMaximumSignatureDuration:(double)arg1;
- (void)setMinimumSignatureDuration:(double)arg1;
- (void)setShouldGenerateSpectralOutput:(bool)arg1;
- (bool)shouldGenerateSpectralOutput;
- (id)slots;

@end
