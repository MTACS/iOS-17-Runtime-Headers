
@protocol RFColor <NSObject>

@required

- (RFOptionalFloat *)alpha;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (int)name;
- (RFRGBValue *)rgb_value;
- (void)setAlpha:(RFOptionalFloat *)arg1;
- (void)setName:(int)arg1;
- (void)setRgb_value:(RFRGBValue *)arg1;

@end
