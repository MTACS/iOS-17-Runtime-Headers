
@interface AVCAudioPowerSpectrum : NSObject <NSSecureCoding> {
    NSMutableArray * _channels;
    float  _maxFrequency;
    float  _minFrequency;
    long long  _sourceType;
}

@property (nonatomic, readonly) NSArray *channels;
@property (nonatomic, readonly) float maxFrequency;
@property (nonatomic, readonly) float minFrequency;
@property (nonatomic, readonly) long long sourceType;

+ (bool)supportsSecureCoding;

- (void)applyChannelBins:(struct _VCAudioPowerSpectrumEntry { struct _VCRange { float x_1_1_1; float x_1_1_2; } x1; float x2; }*)arg1 binCount:(unsigned int)arg2 channelID:(unsigned short)arg3;
- (id)channels;
- (void)checkNumChannels:(unsigned short)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (float)maxFrequency;
- (float)minFrequency;
- (long long)sourceType;

@end
