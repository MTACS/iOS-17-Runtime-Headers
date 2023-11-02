
@protocol _SFPBRFFormattedText <NSObject>

@required

- (_SFPBRFColor *)background_color;
- (_SFPBRFColor *)color;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBRFImageElement *)inline_image_element;
- (_SFPBRFOptionalBool *)is_bold;
- (_SFPBRFOptionalBool *)is_highlighted;
- (_SFPBRFOptionalBool *)is_italic;
- (NSData *)jsonData;
- (void)setBackground_color:(_SFPBRFColor *)arg1;
- (void)setColor:(_SFPBRFColor *)arg1;
- (void)setInline_image_element:(_SFPBRFImageElement *)arg1;
- (void)setIs_bold:(_SFPBRFOptionalBool *)arg1;
- (void)setIs_highlighted:(_SFPBRFOptionalBool *)arg1;
- (void)setIs_italic:(_SFPBRFOptionalBool *)arg1;
- (void)setText:(NSString *)arg1;
- (void)setText_encapsulation:(_SFPBRFTextEncapsulation *)arg1;
- (NSString *)text;
- (_SFPBRFTextEncapsulation *)text_encapsulation;
- (unsigned long long)whichValue;

@end
