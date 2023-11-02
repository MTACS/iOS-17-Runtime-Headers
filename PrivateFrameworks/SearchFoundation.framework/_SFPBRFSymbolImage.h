
@interface _SFPBRFSymbolImage : PBCodable <NSSecureCoding, _SFPBRFSymbolImage> {
    _SFPBRFColor * _background_color;
    int  _image_style;
    NSString * _name;
    _SFPBRFColor * _primary_color;
    bool  _punches_through_background;
    _SFPBRFColor * _secondary_color;
    int  _symbol_rendering_mode;
}

@property (nonatomic, retain) _SFPBRFColor *background_color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int image_style;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) _SFPBRFColor *primary_color;
@property (nonatomic) bool punches_through_background;
@property (nonatomic, retain) _SFPBRFColor *secondary_color;
@property (readonly) Class superclass;
@property (nonatomic) int symbol_rendering_mode;

- (void).cxx_destruct;
- (id)background_color;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (int)image_style;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)name;
- (id)primary_color;
- (bool)punches_through_background;
- (bool)readFrom:(id)arg1;
- (id)secondary_color;
- (void)setBackground_color:(id)arg1;
- (void)setImage_style:(int)arg1;
- (void)setName:(id)arg1;
- (void)setPrimary_color:(id)arg1;
- (void)setPunches_through_background:(bool)arg1;
- (void)setSecondary_color:(id)arg1;
- (void)setSymbol_rendering_mode:(int)arg1;
- (int)symbol_rendering_mode;
- (void)writeTo:(id)arg1;

@end
