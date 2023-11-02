
@protocol _SFPBRFFactItemButtonCardSection <NSObject>

@required

- (void)addText_4:(_SFPBRFTextProperty *)arg1;
- (_SFPBButtonItem *)button_1;
- (_SFPBButtonItem *)button_2;
- (_SFPBButtonItem *)button_3;
- (void)clearText_4;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setButton_1:(_SFPBButtonItem *)arg1;
- (void)setButton_2:(_SFPBButtonItem *)arg1;
- (void)setButton_3:(_SFPBButtonItem *)arg1;
- (void)setText_1:(_SFPBRFTextProperty *)arg1;
- (void)setText_2:(_SFPBRFTextProperty *)arg1;
- (void)setText_3:(_SFPBRFTextProperty *)arg1;
- (void)setText_4s:(NSArray *)arg1;
- (void)setText_5:(_SFPBRFTextProperty *)arg1;
- (void)setThumbnail:(_SFPBRFVisualProperty *)arg1;
- (_SFPBRFTextProperty *)text_1;
- (_SFPBRFTextProperty *)text_2;
- (_SFPBRFTextProperty *)text_3;
- (_SFPBRFTextProperty *)text_4AtIndex:(unsigned long long)arg1;
- (unsigned long long)text_4Count;
- (NSArray *)text_4s;
- (_SFPBRFTextProperty *)text_5;
- (_SFPBRFVisualProperty *)thumbnail;

@end
