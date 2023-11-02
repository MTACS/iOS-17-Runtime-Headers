
@interface AVAudioDeviceTestResult : NSObject <NSSecureCoding> {
    double  _correlationValue;
    NSData * _data;
    long long  _inputID;
    long long  _outputID;
    double  _sampleRate;
}

@property (nonatomic) double correlationValue;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic) long long inputID;
@property (nonatomic) long long outputID;
@property (nonatomic) double sampleRate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)correlationValue;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 inputID:(long long)arg2 outputID:(long long)arg3 sampleRate:(double)arg4 correlationValue:(double)arg5;
- (long long)inputID;
- (long long)outputID;
- (double)sampleRate;
- (void)setCorrelationValue:(double)arg1;
- (void)setInputID:(long long)arg1;
- (void)setOutputID:(long long)arg1;
- (void)setSampleRate:(double)arg1;

@end
