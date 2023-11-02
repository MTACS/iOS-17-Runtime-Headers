
@protocol SFMediaPlayerCardSection <SFCardSection>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (NSArray *)mediaItems;
- (void)setMediaItems:(NSArray *)arg1;
- (void)setSubtitle:(NSString *)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setType:(NSString *)arg1;
- (NSString *)subtitle;
- (NSString *)title;
- (NSString *)type;

@end
