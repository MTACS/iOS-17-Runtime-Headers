
@protocol _SFPBRFSummaryItemShortNumberCardSection <NSObject>

@required

- (void)addText_3:(_SFPBRFTextProperty *)arg1;
- (void)addText_4:(_SFPBRFTextProperty *)arg1;
- (void)clearText_3;
- (void)clearText_4;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_SFPBRFTextProperty *)number;
- (void)setNumber:(_SFPBRFTextProperty *)arg1;
- (void)setText_1:(_SFPBRFTextProperty *)arg1;
- (void)setText_2:(_SFPBRFTextProperty *)arg1;
- (void)setText_3s:(NSArray *)arg1;
- (void)setText_4s:(NSArray *)arg1;
- (void)setText_5:(_SFPBRFTextProperty *)arg1;
- (void)setText_6:(_SFPBRFTextProperty *)arg1;
- (void)setThumbnail:(_SFPBRFVisualProperty *)arg1;
- (_SFPBRFTextProperty *)text_1;
- (_SFPBRFTextProperty *)text_2;
- (_SFPBRFTextProperty *)text_3AtIndex:(unsigned long long)arg1;
- (unsigned long long)text_3Count;
- (NSArray *)text_3s;
- (_SFPBRFTextProperty *)text_4AtIndex:(unsigned long long)arg1;
- (unsigned long long)text_4Count;
- (NSArray *)text_4s;
- (_SFPBRFTextProperty *)text_5;
- (_SFPBRFTextProperty *)text_6;
- (_SFPBRFVisualProperty *)thumbnail;

@end
