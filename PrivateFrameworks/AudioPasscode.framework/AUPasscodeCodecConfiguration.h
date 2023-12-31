
@interface AUPasscodeCodecConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSString * _algorithmName;
    long long  _numChannels;
    long long  _payloadLengthBytes;
    long long  _sampleRate;
}

@property (nonatomic, copy) NSString *algorithmName;
@property (nonatomic) long long numChannels;
@property (nonatomic) long long payloadLengthBytes;
@property (nonatomic) long long sampleRate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)__setDefaultValues;
- (id)algorithmName;
- (id)commandLineOptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAlgorithmName:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCommandLineArgs:(id)arg1;
- (long long)numChannels;
- (long long)payloadLengthBytes;
- (long long)sampleRate;
- (void)setAlgorithmName:(id)arg1;
- (void)setNumChannels:(long long)arg1;
- (void)setPayloadLengthBytes:(long long)arg1;
- (void)setSampleRate:(long long)arg1;

@end
