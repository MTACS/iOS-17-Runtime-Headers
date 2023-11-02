
@interface _SFPBRFBadgedImage : PBCodable <NSSecureCoding, _SFPBRFBadgedImage> {
    _SFPBRFImageSource * _badge;
    _SFPBRFImageSource * _image;
}

@property (nonatomic, retain) _SFPBRFImageSource *badge;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _SFPBRFImageSource *image;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)badge;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)image;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setBadge:(id)arg1;
- (void)setImage:(id)arg1;
- (void)writeTo:(id)arg1;

@end
