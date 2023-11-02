
@interface HMDCameraRecordingGeneralConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {
    unsigned long long  _eventTriggerOptions;
    NSArray * _mediaContainerConfigurations;
    NSNumber * _prebufferLength;
}

@property (nonatomic, readonly) unsigned long long eventTriggerOptions;
@property (nonatomic, readonly, copy) NSArray *mediaContainerConfigurations;
@property (nonatomic, readonly, copy) NSNumber *prebufferLength;
@property (readonly, copy) NSData *tlvData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_parseFromTLVData;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)eventTriggerOptions;
- (id)initWithCoder:(id)arg1;
- (id)initWithPrebufferLength:(id)arg1 eventTriggerOptions:(unsigned long long)arg2 mediaContainerConfigurations:(id)arg3;
- (id)mediaContainerConfigurations;
- (id)prebufferLength;
- (id)tlvData;

@end
