
@interface AVAudioConverter : NSObject {
    void * _impl;
}

@property (nonatomic, readonly) NSArray *applicableEncodeBitRates;
@property (nonatomic, readonly) NSArray *applicableEncodeSampleRates;
@property (nonatomic, readonly) NSArray *availableEncodeBitRates;
@property (nonatomic, readonly) NSArray *availableEncodeChannelLayoutTags;
@property (nonatomic, readonly) NSArray *availableEncodeSampleRates;
@property (nonatomic) long long bitRate;
@property (nonatomic, retain) NSString *bitRateStrategy;
@property (nonatomic, retain) NSArray *channelMap;
@property (nonatomic) bool dither;
@property (nonatomic) bool downmix;
@property (nonatomic, readonly) AVAudioFormat *inputFormat;
@property (nonatomic, retain) NSData *magicCookie;
@property (nonatomic, readonly) long long maximumOutputPacketSize;
@property (nonatomic, readonly) AVAudioFormat *outputFormat;
@property (nonatomic) struct AVAudioConverterPrimeInfo { unsigned int x1; unsigned int x2; } primeInfo;
@property (nonatomic) long long primeMethod;
@property (nonatomic, retain) NSString *sampleRateConverterAlgorithm;
@property (nonatomic) long long sampleRateConverterQuality;

- (id)applicableEncodeBitRates;
- (id)applicableEncodeSampleRates;
- (id)availableEncodeBitRates;
- (id)availableEncodeChannelLayoutTags;
- (id)availableEncodeSampleRates;
- (long long)bitRate;
- (id)bitRateStrategy;
- (id)channelMap;
- (long long)convertToBuffer:(id)arg1 error:(id*)arg2 withInputFromBlock:(id /* block */)arg3;
- (bool)convertToBuffer:(id)arg1 fromBuffer:(id)arg2 error:(id*)arg3;
- (void)dealloc;
- (bool)dither;
- (bool)downmix;
- (id)initFromFormat:(id)arg1 toFormat:(id)arg2;
- (id)inputFormat;
- (id)magicCookie;
- (long long)maximumOutputPacketSize;
- (id)outputFormat;
- (struct AVAudioConverterPrimeInfo { unsigned int x1; unsigned int x2; })primeInfo;
- (long long)primeMethod;
- (void)reset;
- (id)sampleRateConverterAlgorithm;
- (long long)sampleRateConverterQuality;
- (void)setBitRate:(long long)arg1;
- (void)setBitRateStrategy:(id)arg1;
- (void)setChannelMap:(id)arg1;
- (void)setDither:(bool)arg1;
- (void)setDownmix:(bool)arg1;
- (void)setMagicCookie:(id)arg1;
- (void)setPrimeInfo:(struct AVAudioConverterPrimeInfo { unsigned int x1; unsigned int x2; })arg1;
- (void)setPrimeMethod:(long long)arg1;
- (void)setSampleRateConverterAlgorithm:(id)arg1;
- (void)setSampleRateConverterQuality:(long long)arg1;

@end
