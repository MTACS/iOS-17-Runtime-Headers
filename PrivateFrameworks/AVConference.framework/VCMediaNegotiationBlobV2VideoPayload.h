
@interface VCMediaNegotiationBlobV2VideoPayload : PBCodable <NSCopying> {
    unsigned int  _decodeFormats;
    NSData * _encodeDecodeFeatures;
    unsigned int  _encodeFormats;
    struct { 
        unsigned int decodeFormats : 1; 
        unsigned int encodeFormats : 1; 
        unsigned int parameterSet : 1; 
        unsigned int videoPayload : 1; 
    }  _has;
    unsigned int  _parameterSet;
    unsigned int  _videoPayload;
}

@property (nonatomic) unsigned int decodeFormats;
@property (nonatomic, readonly) NSArray *decodeVideoRules;
@property (nonatomic, retain) NSData *encodeDecodeFeatures;
@property (nonatomic) unsigned int encodeFormats;
@property (nonatomic, readonly) NSArray *encodeVideoRules;
@property (nonatomic) bool hasDecodeFormats;
@property (nonatomic, readonly) bool hasEncodeDecodeFeatures;
@property (nonatomic) bool hasEncodeFormats;
@property (nonatomic) bool hasParameterSet;
@property (nonatomic) bool hasVideoPayload;
@property (nonatomic) unsigned int parameterSet;
@property (nonatomic, readonly) int payload;
@property (nonatomic, readonly) unsigned int videoParameterSupport;
@property (nonatomic) unsigned int videoPayload;

+ (int)payloadWithRTPPayload:(int)arg1;
+ (int)rtpPayloadWithPayload:(int)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)decodeFormats;
- (id)decodeVideoRules;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encodeDecodeFeatures;
- (unsigned int)encodeFormats;
- (id)encodeVideoRules;
- (bool)hasDecodeFormats;
- (bool)hasEncodeDecodeFeatures;
- (bool)hasEncodeFormats;
- (bool)hasParameterSet;
- (bool)hasVideoPayload;
- (unsigned long long)hash;
- (id)initWithPayload:(int)arg1 encodeVideoRules:(id)arg2 decodeVideoRules:(id)arg3 videoParameterSupport:(unsigned int)arg4 featureListStrings:(id)arg5;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)parameterSet;
- (int)payload;
- (void)printWithLogFile:(void*)arg1 prefix:(id)arg2;
- (bool)readFrom:(id)arg1;
- (void)setDecodeFormats:(unsigned int)arg1;
- (void)setEncodeDecodeFeatures:(id)arg1;
- (void)setEncodeFormats:(unsigned int)arg1;
- (void)setHasDecodeFormats:(bool)arg1;
- (void)setHasEncodeFormats:(bool)arg1;
- (void)setHasParameterSet:(bool)arg1;
- (void)setHasVideoPayload:(bool)arg1;
- (void)setParameterSet:(unsigned int)arg1;
- (void)setVideoPayload:(unsigned int)arg1;
- (bool)setupEncode:(bool)arg1 videoRules:(id)arg2;
- (void)setupVideoParameterSupport:(unsigned int)arg1;
- (unsigned int)videoParameterSupport;
- (unsigned int)videoPayload;
- (id)videoRulesWithBitmap:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
