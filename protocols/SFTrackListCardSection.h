
@protocol SFTrackListCardSection <SFTitleCardSection>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setTracks:(NSArray *)arg1;
- (NSArray *)tracks;

@end
