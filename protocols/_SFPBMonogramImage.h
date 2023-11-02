
@protocol _SFPBMonogramImage <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)monogramLetters;
- (int)monogramStyle;
- (void)setMonogramLetters:(NSString *)arg1;
- (void)setMonogramStyle:(int)arg1;

@end
