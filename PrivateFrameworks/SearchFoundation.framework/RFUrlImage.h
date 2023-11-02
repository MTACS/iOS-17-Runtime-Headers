
@interface RFUrlImage : NSObject <NSCopying, NSSecureCoding, RFUrlImage> {
    RFAspectRatio * _aspect_ratio;
    NSString * _dark_mode_url;
    struct { 
        unsigned int symbol_placeholder_image : 1; 
        unsigned int image_style : 1; 
        unsigned int sizing_mode : 1; 
        unsigned int image_rendering_mode : 1; 
    }  _has;
    int  _image_rendering_mode;
    int  _image_style;
    int  _sizing_mode;
    RFSymbolImage * _symbol_placeholder_image;
    NSString * _url;
}

@property (nonatomic, retain) RFAspectRatio *aspect_ratio;
@property (nonatomic, copy) NSString *dark_mode_url;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic) int image_rendering_mode;
@property (nonatomic) int image_style;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int sizing_mode;
@property (readonly) Class superclass;
@property (nonatomic, retain) RFSymbolImage *symbol_placeholder_image;
@property (nonatomic, copy) NSString *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)aspect_ratio;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dark_mode_url;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasImage_rendering_mode;
- (bool)hasImage_style;
- (bool)hasSizing_mode;
- (bool)hasSymbol_placeholder_image;
- (unsigned long long)hash;
- (int)image_rendering_mode;
- (int)image_style;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
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

@end
