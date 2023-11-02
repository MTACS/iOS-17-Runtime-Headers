
@protocol _SFPBRFTextProperty <NSObject>

@required

- (void)addText_elements:(_SFPBRFTextElement *)arg1;
- (void)clearText_elements;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (bool)is_safe_for_logging;
- (NSData *)jsonData;
- (void)setIs_safe_for_logging:(bool)arg1;
- (void)setText_elements:(NSArray *)arg1;
- (NSArray *)text_elements;
- (_SFPBRFTextElement *)text_elementsAtIndex:(unsigned long long)arg1;
- (unsigned long long)text_elementsCount;

@end
