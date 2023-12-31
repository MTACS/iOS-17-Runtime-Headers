
@protocol SFMediaDetail <NSObject>

@required

- (SFText *)content;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setContent:(SFText *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)title;

@end
