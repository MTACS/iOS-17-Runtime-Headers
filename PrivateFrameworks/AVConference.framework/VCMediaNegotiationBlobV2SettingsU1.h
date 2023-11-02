
@interface VCMediaNegotiationBlobV2SettingsU1 : PBCodable <NSCopying> {
    NSMutableArray * _encodeDecodeFeatures;
    struct { 
        unsigned int rtpSSRC : 1; 
    }  _has;
    unsigned int  _rtpSSRC;
}

@property (nonatomic, retain) NSMutableArray *encodeDecodeFeatures;
@property (nonatomic) bool hasRtpSSRC;
@property (nonatomic) unsigned int rtpSSRC;

+ (Class)encodeDecodeFeaturesType;

- (void)addEncodeDecodeFeatures:(id)arg1;
- (void)clearEncodeDecodeFeatures;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encodeDecodeFeatures;
- (id)encodeDecodeFeaturesAtIndex:(unsigned long long)arg1;
- (unsigned long long)encodeDecodeFeaturesCount;
- (bool)hasRtpSSRC;
- (unsigned long long)hash;
- (id)initWithU1Config:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)loadEncodeDecodeFeatures:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)rtpSSRC;
- (void)setEncodeDecodeFeatures:(id)arg1;
- (void)setHasRtpSSRC:(bool)arg1;
- (void)setRtpSSRC:(unsigned int)arg1;
- (id)u1Config;
- (void)writeTo:(id)arg1;

@end
