
@protocol SFText <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (unsigned long long)maxLines;
- (void)setMaxLines:(unsigned long long)arg1;
- (void)setText:(NSString *)arg1;
- (NSString *)text;

@end
