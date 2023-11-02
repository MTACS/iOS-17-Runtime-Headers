
@protocol _SFPBRFSummaryItemStandardCardSection <NSObject>

@required

- (void)addText_2:(_SFPBRFTextProperty *)arg1;
- (void)addText_3:(_SFPBRFTextProperty *)arg1;
- (void)clearText_2;
- (void)clearText_3;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setSuppress_text_2_if_text_1_exceeds_a_single_line:(bool)arg1;
- (void)setText_1:(_SFPBRFTextProperty *)arg1;
- (void)setText_2s:(NSArray *)arg1;
- (void)setText_3s:(NSArray *)arg1;
- (void)setText_4:(_SFPBRFTextProperty *)arg1;
- (void)setThumbnail:(_SFPBRFVisualProperty *)arg1;
- (bool)suppress_text_2_if_text_1_exceeds_a_single_line;
- (_SFPBRFTextProperty *)text_1;
- (_SFPBRFTextProperty *)text_2AtIndex:(unsigned long long)arg1;
- (unsigned long long)text_2Count;
- (NSArray *)text_2s;
- (_SFPBRFTextProperty *)text_3AtIndex:(unsigned long long)arg1;
- (unsigned long long)text_3Count;
- (NSArray *)text_3s;
- (_SFPBRFTextProperty *)text_4;
- (_SFPBRFVisualProperty *)thumbnail;

@end
