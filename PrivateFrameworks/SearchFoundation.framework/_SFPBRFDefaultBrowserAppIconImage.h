
@interface _SFPBRFDefaultBrowserAppIconImage : PBCodable <NSSecureCoding, _SFPBRFDefaultBrowserAppIconImage> {
    int  _image_style;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int image_style;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (int)image_style;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setImage_style:(int)arg1;
- (void)writeTo:(id)arg1;

@end
