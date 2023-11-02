
@protocol SFMetaInfoCardSection <SFCardSection>

@required

- (SFImage *)badge;
- (NSURL *)contentURL;
- (NSDictionary *)dictionaryRepresentation;
- (NSURL *)hostPageURL;
- (NSData *)jsonData;
- (void)setBadge:(SFImage *)arg1;
- (void)setContentURL:(NSURL *)arg1;
- (void)setHostPageURL:(NSURL *)arg1;
- (void)setTrending:(bool)arg1;
- (void)setType:(NSString *)arg1;
- (bool)trending;
- (NSString *)type;

@end
