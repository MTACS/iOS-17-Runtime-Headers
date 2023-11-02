
@protocol RFMonogramImage <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (int)image_style;
- (NSData *)jsonData;
- (NSString *)letters;
- (void)setImage_style:(int)arg1;
- (void)setLetters:(NSString *)arg1;

@end
