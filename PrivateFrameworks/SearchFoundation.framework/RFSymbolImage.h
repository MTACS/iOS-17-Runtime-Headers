
@interface RFSymbolImage : NSObject <NSCopying, NSSecureCoding, RFSymbolImage> {
    RFColor * _background_color;
    struct { 
        unsigned int image_style : 1; 
        unsigned int symbol_rendering_mode : 1; 
        unsigned int punches_through_background : 1; 
    }  _has;
    int  _image_style;
    NSString * _name;
    RFColor * _primary_color;
    bool  _punches_through_background;
    RFColor * _secondary_color;
    int  _symbol_rendering_mode;
}

@property (nonatomic, retain) RFColor *background_color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic) int image_style;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) RFColor *primary_color;
@property (nonatomic) bool punches_through_background;
@property (nonatomic, retain) RFColor *secondary_color;
@property (readonly) Class superclass;
@property (nonatomic) int symbol_rendering_mode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)background_color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasImage_style;
- (bool)hasPunches_through_background;
- (bool)hasSymbol_rendering_mode;
- (unsigned long long)hash;
- (int)image_style;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)name;
- (id)primary_color;
- (bool)punches_through_background;
- (id)secondary_color;
- (void)setBackground_color:(id)arg1;
- (void)setImage_style:(int)arg1;
- (void)setName:(id)arg1;
- (void)setPrimary_color:(id)arg1;
- (void)setPunches_through_background:(bool)arg1;
- (void)setSecondary_color:(id)arg1;
- (void)setSymbol_rendering_mode:(int)arg1;
- (int)symbol_rendering_mode;

@end
