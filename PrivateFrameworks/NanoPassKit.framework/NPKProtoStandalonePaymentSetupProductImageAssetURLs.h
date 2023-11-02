
@interface NPKProtoStandalonePaymentSetupProductImageAssetURLs : PBCodable <NSCopying> {
    NSString * _digitalCardImageUrl;
    NSString * _logoImageUrl;
    NSString * _thumbnailImageUrl;
}

@property (nonatomic, retain) NSString *digitalCardImageUrl;
@property (nonatomic, readonly) bool hasDigitalCardImageUrl;
@property (nonatomic, readonly) bool hasLogoImageUrl;
@property (nonatomic, readonly) bool hasThumbnailImageUrl;
@property (nonatomic, retain) NSString *logoImageUrl;
@property (nonatomic, retain) NSString *thumbnailImageUrl;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)digitalCardImageUrl;
- (bool)hasDigitalCardImageUrl;
- (bool)hasLogoImageUrl;
- (bool)hasThumbnailImageUrl;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)logoImageUrl;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDigitalCardImageUrl:(id)arg1;
- (void)setLogoImageUrl:(id)arg1;
- (void)setThumbnailImageUrl:(id)arg1;
- (id)thumbnailImageUrl;
- (void)writeTo:(id)arg1;

@end
