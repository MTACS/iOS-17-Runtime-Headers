
@protocol SFPlayMediaCommand <SFCommand>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (SFMediaMetadata *)mediaMetadata;
- (int)playbackLocation;
- (void)setMediaMetadata:(SFMediaMetadata *)arg1;
- (void)setPlaybackLocation:(int)arg1;

@end
