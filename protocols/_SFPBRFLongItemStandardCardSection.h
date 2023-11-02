
@protocol _SFPBRFLongItemStandardCardSection <NSObject>

@required

- (bool)has_background_platter;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (bool)is_quote;
- (NSData *)jsonData;
- (void)setHas_background_platter:(bool)arg1;
- (void)setIs_quote:(bool)arg1;
- (void)setText_1:(_SFPBRFTextProperty *)arg1;
- (_SFPBRFTextProperty *)text_1;

@end
