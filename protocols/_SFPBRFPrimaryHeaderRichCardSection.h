
@protocol _SFPBRFPrimaryHeaderRichCardSection <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setText_1:(_SFPBRFTextProperty *)arg1;
- (void)setText_2:(_SFPBRFTextProperty *)arg1;
- (void)setText_3:(_SFPBRFTextProperty *)arg1;
- (void)setText_4:(_SFPBRFTextProperty *)arg1;
- (void)setThumbnail:(_SFPBRFVisualProperty *)arg1;
- (_SFPBRFTextProperty *)text_1;
- (_SFPBRFTextProperty *)text_2;
- (_SFPBRFTextProperty *)text_3;
- (_SFPBRFTextProperty *)text_4;
- (_SFPBRFVisualProperty *)thumbnail;

@end
