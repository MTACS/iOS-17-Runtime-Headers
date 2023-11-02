
@interface RFFormattedText : NSObject <NSCopying, NSSecureCoding, RFFormattedText> {
    RFColor * _background_color;
    RFColor * _color;
    struct { 
        unsigned int text : 1; 
        unsigned int inline_image_element : 1; 
    }  _has;
    RFImageElement * _inline_image_element;
    RFOptionalBool * _is_bold;
    RFOptionalBool * _is_highlighted;
    RFOptionalBool * _is_italic;
    NSString * _text;
    RFTextEncapsulation * _text_encapsulation;
}

@property (nonatomic, retain) RFColor *background_color;
@property (nonatomic, retain) RFColor *color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) RFImageElement *inline_image_element;
@property (nonatomic, retain) RFOptionalBool *is_bold;
@property (nonatomic, retain) RFOptionalBool *is_highlighted;
@property (nonatomic, retain) RFOptionalBool *is_italic;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) RFTextEncapsulation *text_encapsulation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)background_color;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasInline_image_element;
- (bool)hasText;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)inline_image_element;
- (bool)isEqual:(id)arg1;
- (id)is_bold;
- (id)is_highlighted;
- (id)is_italic;
- (id)jsonData;
- (void)setBackground_color:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setInline_image_element:(id)arg1;
- (void)setIs_bold:(id)arg1;
- (void)setIs_highlighted:(id)arg1;
- (void)setIs_italic:(id)arg1;
- (void)setText:(id)arg1;
- (void)setText_encapsulation:(id)arg1;
- (id)text;
- (id)text_encapsulation;

@end
