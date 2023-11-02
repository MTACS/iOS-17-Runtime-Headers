
@protocol RFFormattedText <NSObject>

@required

- (RFColor *)background_color;
- (RFColor *)color;
- (NSDictionary *)dictionaryRepresentation;
- (RFImageElement *)inline_image_element;
- (RFOptionalBool *)is_bold;
- (RFOptionalBool *)is_highlighted;
- (RFOptionalBool *)is_italic;
- (NSData *)jsonData;
- (void)setBackground_color:(RFColor *)arg1;
- (void)setColor:(RFColor *)arg1;
- (void)setInline_image_element:(RFImageElement *)arg1;
- (void)setIs_bold:(RFOptionalBool *)arg1;
- (void)setIs_highlighted:(RFOptionalBool *)arg1;
- (void)setIs_italic:(RFOptionalBool *)arg1;
- (void)setText:(NSString *)arg1;
- (void)setText_encapsulation:(RFTextEncapsulation *)arg1;
- (NSString *)text;
- (RFTextEncapsulation *)text_encapsulation;

@end
