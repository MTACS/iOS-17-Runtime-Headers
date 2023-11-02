
@interface NPKProtoStandalonePaymentSetupMoreInfoItem : PBCodable <NSCopying> {
    NSString * _body;
    NSData * _imageData;
    NSString * _imageURL;
    NSString * _linkText;
    NSString * _linkURL;
    NSString * _title;
}

@property (nonatomic, retain) NSString *body;
@property (nonatomic, readonly) bool hasBody;
@property (nonatomic, readonly) bool hasImageData;
@property (nonatomic, readonly) bool hasImageURL;
@property (nonatomic, readonly) bool hasLinkText;
@property (nonatomic, readonly) bool hasLinkURL;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, retain) NSData *imageData;
@property (nonatomic, retain) NSString *imageURL;
@property (nonatomic, retain) NSString *linkText;
@property (nonatomic, retain) NSString *linkURL;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)body;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBody;
- (bool)hasImageData;
- (bool)hasImageURL;
- (bool)hasLinkText;
- (bool)hasLinkURL;
- (bool)hasTitle;
- (unsigned long long)hash;
- (id)imageData;
- (id)imageURL;
- (bool)isEqual:(id)arg1;
- (id)linkText;
- (id)linkURL;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setImageURL:(id)arg1;
- (void)setLinkText:(id)arg1;
- (void)setLinkURL:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)writeTo:(id)arg1;

@end
