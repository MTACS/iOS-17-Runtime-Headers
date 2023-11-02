
@protocol _SFPBRFColor <NSObject>

@required

- (_SFPBRFOptionalFloat *)alpha;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (int)name;
- (_SFPBRFRGBValue *)rgb_value;
- (void)setAlpha:(_SFPBRFOptionalFloat *)arg1;
- (void)setName:(int)arg1;
- (void)setRgb_value:(_SFPBRFRGBValue *)arg1;
- (unsigned long long)whichValue;

@end
