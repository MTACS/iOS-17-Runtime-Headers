
@interface VCMediaNegotiationBlobV2MicrophoneSettingsU1 : PBCodable <NSCopying> {
    struct { 
        unsigned int payloads : 1; 
        unsigned int rtpSSRC : 1; 
    }  _has;
    unsigned int  _payloads;
    unsigned int  _rtpSSRC;
}

@property (nonatomic, readonly) NSSet *audioPayloads;
@property (nonatomic) bool hasPayloads;
@property (nonatomic) bool hasRtpSSRC;
@property (nonatomic) unsigned int payloads;
@property (nonatomic) unsigned int rtpSSRC;

+ (int)flagFromPayload:(int)arg1;
+ (int)payloadFromFlag:(int)arg1;

- (id)audioPayloads;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPayloads;
- (bool)hasRtpSSRC;
- (unsigned long long)hash;
- (id)initWithSSRC:(unsigned int)arg1 audioPayloads:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)payloadBitmapWithAudioPayloads:(id)arg1;
- (unsigned int)payloads;
- (void)printWithLogFile:(void*)arg1 prefix:(id)arg2;
- (bool)readFrom:(id)arg1;
- (unsigned int)rtpSSRC;
- (void)setHasPayloads:(bool)arg1;
- (void)setHasRtpSSRC:(bool)arg1;
- (void)setPayloads:(unsigned int)arg1;
- (void)setRtpSSRC:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
