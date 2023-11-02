
@interface VCMediaNegotiationBlobMomentsSettings : PBCodable <NSCopying> {
    unsigned int  _capabilities;
    struct { 
        unsigned int multiwayCapabilities : 1; 
        unsigned int supportedImageTypes : 1; 
        unsigned int supportedVideoCodecs : 1; 
    }  _has;
    unsigned int  _multiwayCapabilities;
    unsigned int  _supportedImageTypes;
    unsigned int  _supportedVideoCodecs;
}

@property (nonatomic) unsigned int capabilities;
@property (nonatomic) bool hasMultiwayCapabilities;
@property (nonatomic) bool hasSupportedImageTypes;
@property (nonatomic) bool hasSupportedVideoCodecs;
@property (nonatomic) unsigned int multiwayCapabilities;
@property (nonatomic) unsigned int supportedImageTypes;
@property (nonatomic) unsigned int supportedVideoCodecs;

+ (unsigned int)avcMomentsCapabilitiesForMultiwayMomentsCapabilities:(int)arg1;
+ (unsigned int)capabilitiesBitmapWithCapabilities:(unsigned char)arg1;

- (unsigned int)capabilities;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMultiwayCapabilities;
- (bool)hasSupportedImageTypes;
- (bool)hasSupportedVideoCodecs;
- (unsigned long long)hash;
- (id)initWithVideoCodecs:(id)arg1 imageTypes:(id)arg2 capabilities:(unsigned char)arg3 multiwayCapabilities:(unsigned char)arg4;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)multiwayCapabilities;
- (id)newImageTypeSet;
- (id)newVideoCodecSet;
- (bool)readFrom:(id)arg1;
- (void)setCapabilities:(unsigned int)arg1;
- (void)setHasMultiwayCapabilities:(bool)arg1;
- (void)setHasSupportedImageTypes:(bool)arg1;
- (void)setHasSupportedVideoCodecs:(bool)arg1;
- (void)setMultiwayCapabilities:(unsigned int)arg1;
- (void)setSupportedImageTypes:(unsigned int)arg1;
- (void)setSupportedVideoCodecs:(unsigned int)arg1;
- (unsigned int)supportedImageTypes;
- (unsigned int)supportedVideoCodecs;
- (void)writeTo:(id)arg1;

@end
