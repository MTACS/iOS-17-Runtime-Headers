
@protocol SFNowPlayingCardSection <SFTitleCardSection>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (NSArray *)movies;
- (void)setMovies:(NSArray *)arg1;

@end
