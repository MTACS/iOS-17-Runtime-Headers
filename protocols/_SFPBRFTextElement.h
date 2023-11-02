
@protocol _SFPBRFTextElement <NSObject>

@required

- (void)addFormatted_text:(_SFPBRFFormattedText *)arg1;
- (void)clearFormatted_text;
- (_SFPBRFFormattedText *)formatted_textAtIndex:(unsigned long long)arg1;
- (unsigned long long)formatted_textCount;
- (NSArray *)formatted_texts;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (int)line_limit;
- (void)setFormatted_texts:(NSArray *)arg1;
- (void)setLine_limit:(int)arg1;

@end
