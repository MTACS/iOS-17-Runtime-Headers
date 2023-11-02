
@protocol _SFPBRFFactItemShortNumberCardSection <NSObject>

@required

- (void)addText_2:(_SFPBRFTextProperty *)arg1;
- (void)addText_3:(_SFPBRFTextProperty *)arg1;
- (void)clearText_2;
- (void)clearText_3;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_SFPBRFTextProperty *)number;
- (void)setNumber:(_SFPBRFTextProperty *)arg1;
- (void)setText_1:(_SFPBRFTextProperty *)arg1;
- (void)setText_2s:(NSArray *)arg1;
- (void)setText_3s:(NSArray *)arg1;
- (void)setText_4:(_SFPBRFTextProperty *)arg1;
- (void)setThumbnail:(_SFPBRFVisualProperty *)arg1;
- (void)setUnit:(_SFPBRFTextProperty *)arg1;
- (_SFPBRFTextProperty *)text_1;
- (_SFPBRFTextProperty *)text_2AtIndex:(unsigned long long)arg1;
- (unsigned long long)text_2Count;
- (NSArray *)text_2s;
- (_SFPBRFTextProperty *)text_3AtIndex:(unsigned long long)arg1;
- (unsigned long long)text_3Count;
- (NSArray *)text_3s;
- (_SFPBRFTextProperty *)text_4;
- (_SFPBRFVisualProperty *)thumbnail;
- (_SFPBRFTextProperty *)unit;

@end
