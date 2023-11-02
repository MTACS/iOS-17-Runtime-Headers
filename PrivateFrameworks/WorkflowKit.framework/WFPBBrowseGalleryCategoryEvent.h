
@interface WFPBBrowseGalleryCategoryEvent : PBCodable <NSCopying> {
    NSString * _galleryCategoryIdentifier;
    NSString * _key;
}

@property (nonatomic, retain) NSString *galleryCategoryIdentifier;
@property (nonatomic, readonly) bool hasGalleryCategoryIdentifier;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, retain) NSString *key;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)galleryCategoryIdentifier;
- (bool)hasGalleryCategoryIdentifier;
- (bool)hasKey;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setGalleryCategoryIdentifier:(id)arg1;
- (void)setKey:(id)arg1;
- (void)writeTo:(id)arg1;

@end
