
@protocol _SFPBRFSimpleItemRichCardSection <NSObject>

@required

- (void)addText_3:(_SFPBRFTextProperty *)arg1;
- (void)addText_5:(_SFPBRFTextProperty *)arg1;
- (void)clearText_3;
- (void)clearText_5;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setText_1:(_SFPBRFTextProperty *)arg1;
- (void)setText_2:(_SFPBRFTextProperty *)arg1;
- (void)setText_3s:(NSArray *)arg1;
- (void)setText_4:(_SFPBRFTextProperty *)arg1;
- (void)setText_5s:(NSArray *)arg1;
- (void)setText_6:(_SFPBRFTextProperty *)arg1;
- (void)setText_7:(_SFPBRFTextProperty *)arg1;
- (void)setText_8:(_SFPBRFTextProperty *)arg1;
- (void)setThumbnail:(_SFPBRFVisualProperty *)arg1;
- (_SFPBRFTextProperty *)text_1;
- (_SFPBRFTextProperty *)text_2;
- (_SFPBRFTextProperty *)text_3AtIndex:(unsigned long long)arg1;
- (unsigned long long)text_3Count;
- (NSArray *)text_3s;
- (_SFPBRFTextProperty *)text_4;
- (_SFPBRFTextProperty *)text_5AtIndex:(unsigned long long)arg1;
- (unsigned long long)text_5Count;
- (NSArray *)text_5s;
- (_SFPBRFTextProperty *)text_6;
- (_SFPBRFTextProperty *)text_7;
- (_SFPBRFTextProperty *)text_8;
- (_SFPBRFVisualProperty *)thumbnail;

@end
