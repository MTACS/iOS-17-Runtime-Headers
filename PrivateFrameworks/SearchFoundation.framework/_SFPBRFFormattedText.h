
@interface _SFPBRFFormattedText : PBCodable <NSSecureCoding, _SFPBRFFormattedText> {
    _SFPBRFColor * _background_color;
    _SFPBRFColor * _color;
    _SFPBRFImageElement * _inline_image_element;
    _SFPBRFOptionalBool * _is_bold;
    _SFPBRFOptionalBool * _is_highlighted;
    _SFPBRFOptionalBool * _is_italic;
    NSString * _text;
    _SFPBRFTextEncapsulation * _text_encapsulation;
    unsigned long long  _whichValue;
}

@property (nonatomic, retain) _SFPBRFColor *background_color;
@property (nonatomic, retain) _SFPBRFColor *color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _SFPBRFImageElement *inline_image_element;
@property (nonatomic, retain) _SFPBRFOptionalBool *is_bold;
@property (nonatomic, retain) _SFPBRFOptionalBool *is_highlighted;
@property (nonatomic, retain) _SFPBRFOptionalBool *is_italic;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) _SFPBRFTextEncapsulation *text_encapsulation;
@property (nonatomic, readonly) unsigned long long whichValue;

- (void).cxx_destruct;
- (id)background_color;
- (id)color;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)inline_image_element;
- (bool)isEqual:(id)arg1;
- (id)is_bold;
- (id)is_highlighted;
- (id)is_italic;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
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
- (unsigned long long)whichValue;
- (void)writeTo:(id)arg1;

@end
