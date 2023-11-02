
@protocol _SFPBRFFactItemStandardCardSection <NSObject>

@required

- (void)addText_4:(_SFPBRFTextProperty *)arg1;
- (void)addText_5:(_SFPBRFTextProperty *)arg1;
- (void)clearText_4;
- (void)clearText_5;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setText_1:(_SFPBRFTextProperty *)arg1;
- (void)setText_2:(_SFPBRFTextProperty *)arg1;
- (void)setText_3:(_SFPBRFTextProperty *)arg1;
- (void)setText_4s:(NSArray *)arg1;
- (void)setText_5s:(NSArray *)arg1;
- (void)setThumbnail:(_SFPBRFVisualProperty *)arg1;
- (_SFPBRFTextProperty *)text_1;
- (_SFPBRFTextProperty *)text_2;
- (_SFPBRFTextProperty *)text_3;
- (_SFPBRFTextProperty *)text_4AtIndex:(unsigned long long)arg1;
- (unsigned long long)text_4Count;
- (NSArray *)text_4s;
- (_SFPBRFTextProperty *)text_5AtIndex:(unsigned long long)arg1;
- (unsigned long long)text_5Count;
- (NSArray *)text_5s;
- (_SFPBRFVisualProperty *)thumbnail;

@end
