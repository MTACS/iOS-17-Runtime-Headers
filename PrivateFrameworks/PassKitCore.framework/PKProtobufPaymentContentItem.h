
@interface PKProtobufPaymentContentItem : PBCodable <NSCopying> {
    bool  _centered;
    struct { 
        unsigned int centered : 1; 
    }  _has;
    NSData * _image;
    NSData * _imageRequest;
    NSData * _label;
    NSData * _title;
}

@property (nonatomic) bool centered;
@property (nonatomic) bool hasCentered;
@property (nonatomic, readonly) bool hasImage;
@property (nonatomic, readonly) bool hasImageRequest;
@property (nonatomic, readonly) bool hasLabel;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, retain) NSData *image;
@property (nonatomic, retain) NSData *imageRequest;
@property (nonatomic, retain) NSData *label;
@property (nonatomic, retain) NSData *title;

- (void).cxx_destruct;
- (bool)centered;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCentered;
- (bool)hasImage;
- (bool)hasImageRequest;
- (bool)hasLabel;
- (bool)hasTitle;
- (unsigned long long)hash;
- (id)image;
- (id)imageRequest;
- (bool)isEqual:(id)arg1;
- (id)label;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCentered:(bool)arg1;
- (void)setHasCentered:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setImageRequest:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)writeTo:(id)arg1;

@end
