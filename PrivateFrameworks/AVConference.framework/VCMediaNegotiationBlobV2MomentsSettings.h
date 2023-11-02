
@interface VCMediaNegotiationBlobV2MomentsSettings : PBCodable <NSCopying> {
    unsigned int  _capabilities;
    struct { 
        unsigned int capabilities : 1; 
        unsigned int supportedCodecs : 1; 
    }  _has;
    unsigned int  _supportedCodecs;
}

@property (nonatomic) unsigned int capabilities;
@property (nonatomic, readonly) unsigned char capabilitiesMultiway;
@property (nonatomic, readonly) unsigned char capabilitiesOneToOne;
@property (nonatomic) bool hasCapabilities;
@property (nonatomic) bool hasSupportedCodecs;
@property (nonatomic, readonly) NSSet *imageTypes;
@property (nonatomic) unsigned int supportedCodecs;
@property (nonatomic, readonly) NSSet *videoCodecs;

+ (unsigned int)blobCapabilitiesWithOneToOneCapabilities:(unsigned char)arg1 multiwayCapabilities:(unsigned char)arg2;
+ (unsigned char)capabilitiesWithBlobCapabilities:(unsigned int)arg1;
+ (id)imageTypesWithSupportedCodecs:(unsigned int)arg1;
+ (unsigned char)multiwayCapabilitiesWithBlobCapabilities:(unsigned int)arg1;
+ (unsigned int)supportedCodecsWithVideoCodecs:(id)arg1 imageTypes:(id)arg2;
+ (id)videoCodecsWithSupportedCodecs:(unsigned int)arg1;

- (void)appendFieldName:(id)arg1 codecs:(unsigned int)arg2 outString:(id)arg3;
- (unsigned int)capabilities;
- (unsigned char)capabilitiesMultiway;
- (unsigned char)capabilitiesOneToOne;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCapabilities;
- (bool)hasSupportedCodecs;
- (unsigned long long)hash;
- (id)imageTypes;
- (id)initWithVideoCodecs:(id)arg1 imageTypes:(id)arg2 capabilitiesOneToOne:(unsigned char)arg3 capabilitiesMultiway:(unsigned char)arg4;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)printWithLogFile:(void*)arg1 prefix:(id)arg2;
- (bool)readFrom:(id)arg1;
- (void)setCapabilities:(unsigned int)arg1;
- (void)setHasCapabilities:(bool)arg1;
- (void)setHasSupportedCodecs:(bool)arg1;
- (void)setSupportedCodecs:(unsigned int)arg1;
- (unsigned int)supportedCodecs;
- (id)videoCodecs;
- (void)writeTo:(id)arg1;

@end
