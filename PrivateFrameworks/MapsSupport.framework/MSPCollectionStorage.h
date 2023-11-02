
@interface MSPCollectionStorage : PBCodable <NSCopying> {
    NSString * _collectionDescription;
    NSData * _image;
    NSString * _imageURL;
    NSData * _itemData;
    NSString * _title;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *collectionDescription;
@property (nonatomic, readonly) bool hasCollectionDescription;
@property (nonatomic, readonly) bool hasImage;
@property (nonatomic, readonly) bool hasImageURL;
@property (nonatomic, readonly) bool hasItemData;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, retain) NSData *image;
@property (nonatomic, retain) NSString *imageURL;
@property (nonatomic, retain) NSData *itemData;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (id)collectionDescription;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCollectionDescription;
- (bool)hasImage;
- (bool)hasImageURL;
- (bool)hasItemData;
- (bool)hasTitle;
- (unsigned long long)hash;
- (id)image;
- (id)imageURL;
- (bool)isEqual:(id)arg1;
- (id)itemData;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCollectionDescription:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageURL:(id)arg1;
- (void)setItemData:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
