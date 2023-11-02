
@protocol _SFPBPlayMediaCommand <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_SFPBMediaMetadata *)mediaMetadata;
- (int)playbackLocation;
- (void)setMediaMetadata:(_SFPBMediaMetadata *)arg1;
- (void)setPlaybackLocation:(int)arg1;

@end
