
@protocol _SFPBRFMonogramImage <NSObject>

@required

- (int)image_style;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)letters;
- (void)setImage_style:(int)arg1;
- (void)setLetters:(NSString *)arg1;

@end
