
@protocol SFMonogramImage <SFImage>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (NSString *)monogramLetters;
- (int)monogramStyle;
- (void)setMonogramLetters:(NSString *)arg1;
- (void)setMonogramStyle:(int)arg1;

@end
