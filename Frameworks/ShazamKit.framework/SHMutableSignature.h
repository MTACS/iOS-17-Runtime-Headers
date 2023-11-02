
@interface SHMutableSignature : SHSignature {
    SHAudioConverter * _audioConverter;
    long long  _clipStyle;
    unsigned int  _currentFrameCount;
    AVAudioFormat * _format;
    double  _maximumSeconds;
    SigX * _sigX;
    SHSpectralOutputConfiguration * _spectralOutputConfiguration;
}

@property (nonatomic, readonly) SHAudioConverter *audioConverter;
@property (nonatomic, readonly) long long clipStyle;
@property (nonatomic) unsigned int currentFrameCount;
@property (nonatomic, retain) AVAudioFormat *format;
@property (nonatomic, readonly) double maximumSeconds;
@property (nonatomic, retain) SigX *sigX;
@property (nonatomic, retain) SHSpectralOutputConfiguration *spectralOutputConfiguration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)appendBuffer:(id)arg1 atTime:(id)arg2 error:(id*)arg3;
- (id)audioConverter;
- (id)clipExcessAudio:(id)arg1;
- (long long)clipStyle;
- (void)configureWithFormat:(id)arg1;
- (unsigned int)currentFrameCount;
- (long long)currentPosition;
- (id)dataRepresentation;
- (void)disableSpectralOutput;
- (double)duration;
- (void)enableSpectralOutputWithConfiguration:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)format;
- (id)generate:(id*)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 dataRepresentation:(id)arg2 startTime:(id)arg3 error:(id*)arg4;
- (id)initWithMaximumSeconds:(double)arg1 clipStyle:(long long)arg2;
- (double)maximumSeconds;
- (double)secondsFromFrameCount:(unsigned int)arg1 forFormat:(id)arg2;
- (void)setCurrentFrameCount:(unsigned int)arg1;
- (void)setFormat:(id)arg1;
- (void)setSigX:(id)arg1;
- (void)setSpectralOutputConfiguration:(id)arg1;
- (id)sigX;
- (int)signatureType;
- (id)spectralOutputConfiguration;
- (bool)updateRingBufferDuration:(double)arg1 error:(id*)arg2;

@end
