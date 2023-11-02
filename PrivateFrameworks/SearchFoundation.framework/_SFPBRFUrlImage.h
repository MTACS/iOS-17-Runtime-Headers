
@interface _SFPBRFUrlImage : PBCodable <NSSecureCoding, _SFPBRFUrlImage> {
    _SFPBRFAspectRatio * _aspect_ratio;
    NSString * _dark_mode_url;
    int  _image_rendering_mode;
    int  _image_style;
    int  _sizing_mode;
    _SFPBRFSymbolImage * _symbol_placeholder_image;
    NSString * _url;
    unsigned long long  _whichPlaceholder_Image;
}

@property (nonatomic, retain) _SFPBRFAspectRatio *aspect_ratio;
@property (nonatomic, copy) NSString *dark_mode_url;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int image_rendering_mode;
@property (nonatomic) int image_style;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int sizing_mode;
@property (readonly) Class superclass;
@property (nonatomic, retain) _SFPBRFSymbolImage *symbol_placeholder_image;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, readonly) unsigned long long whichPlaceholder_Image;

- (void).cxx_destruct;
- (id)aspect_ratio;
- (id)dark_mode_url;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (int)image_rendering_mode;
- (int)image_style;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAspect_ratio:(id)arg1;
- (void)setDark_mode_url:(id)arg1;
- (void)setImage_rendering_mode:(int)arg1;
- (void)setImage_style:(int)arg1;
- (void)setSizing_mode:(int)arg1;
- (void)setSymbol_placeholder_image:(id)arg1;
- (void)setUrl:(id)arg1;
- (int)sizing_mode;
- (id)symbol_placeholder_image;
- (id)url;
- (unsigned long long)whichPlaceholder_Image;
- (void)writeTo:(id)arg1;

@end
