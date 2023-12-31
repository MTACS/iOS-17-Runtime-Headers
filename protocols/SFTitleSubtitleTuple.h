
@protocol SFTitleSubtitleTuple <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setSubtitle:(NSString *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)subtitle;
- (NSString *)title;

@end
