
@interface HAPAudioStreamCodecParameters : NSObject <HAPTLVProtocol, NSCopying> {
    HAPAudioCodecBitRateWrapper * _bitRate;
    HAPTLVUnsignedNumberValue * _numAudioChannels;
    HAPTLVUnsignedNumberValue * _packetTime;
    HAPAudioCodecSampleRateWrapper * _sampleRate;
}

@property (nonatomic, retain) HAPAudioCodecBitRateWrapper *bitRate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *numAudioChannels;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *packetTime;
@property (nonatomic, retain) HAPAudioCodecSampleRateWrapper *sampleRate;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)bitRate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithNumAudioChannels:(id)arg1 bitRate:(id)arg2 sampleRate:(id)arg3 packetTime:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)numAudioChannels;
- (id)packetTime;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)sampleRate;
- (id)serializeWithError:(id*)arg1;
- (void)setBitRate:(id)arg1;
- (void)setNumAudioChannels:(id)arg1;
- (void)setPacketTime:(id)arg1;
- (void)setSampleRate:(id)arg1;

@end
