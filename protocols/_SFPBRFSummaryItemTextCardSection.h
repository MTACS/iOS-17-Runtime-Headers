
@protocol _SFPBRFSummaryItemTextCardSection <NSObject>

@required

- (void)addText_3:(_SFPBRFTextProperty *)arg1;
- (void)clearText_3;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setText_1:(_SFPBRFTextProperty *)arg1;
- (void)setText_2:(_SFPBRFTextProperty *)arg1;
- (void)setText_3s:(NSArray *)arg1;
- (void)setText_4:(_SFPBRFTextProperty *)arg1;
- (void)setText_5:(_SFPBRFTextProperty *)arg1;
- (_SFPBRFTextProperty *)text_1;
- (_SFPBRFTextProperty *)text_2;
- (_SFPBRFTextProperty *)text_3AtIndex:(unsigned long long)arg1;
- (unsigned long long)text_3Count;
- (NSArray *)text_3s;
- (_SFPBRFTextProperty *)text_4;
- (_SFPBRFTextProperty *)text_5;

@end
