
@interface NPKProtoStandalonePaymentHeroImage : PBCodable <NSCopying> {
    NSString * _identifier;
    NSData * _imageData;
    NSString * _imageHash;
    NSString * _imageURL;
}

@property (nonatomic, readonly) bool hasImageData;
@property (nonatomic, readonly) bool hasImageHash;
@property (nonatomic, readonly) bool hasImageURL;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSData *imageData;
@property (nonatomic, retain) NSString *imageHash;
@property (nonatomic, retain) NSString *imageURL;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasImageData;
- (bool)hasImageHash;
- (bool)hasImageURL;
- (unsigned long long)hash;
- (id)identifier;
- (id)imageData;
- (id)imageHash;
- (id)imageURL;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setImageHash:(id)arg1;
- (void)setImageURL:(id)arg1;
- (void)writeTo:(id)arg1;

@end
