
@protocol SFAudioPlaybackCardSection <SFCardSection>

@required

- (SFRichText *)detailText;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (NSArray *)playCommands;
- (void)setDetailText:(SFRichText *)arg1;
- (void)setPlayCommands:(NSArray *)arg1;
- (void)setState:(int)arg1;
- (void)setStopCommands:(NSArray *)arg1;
- (void)setSubtitle:(SFRichText *)arg1;
- (void)setThumbnail:(SFImage *)arg1;
- (void)setTitle:(SFRichText *)arg1;
- (void)setType:(NSString *)arg1;
- (int)state;
- (NSArray *)stopCommands;
- (SFRichText *)subtitle;
- (SFImage *)thumbnail;
- (SFRichText *)title;
- (NSString *)type;

@end
