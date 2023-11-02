
@protocol _SFPBRFRGBValue <NSObject>

@required

- (float)blue;
- (float)green;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (float)red;
- (void)setBlue:(float)arg1;
- (void)setGreen:(float)arg1;
- (void)setRed:(float)arg1;

@end
