
@protocol SFMediaMetadata <NSObject>

@required

- (NSString *)albumName;
- (NSString *)artistName;
- (NSArray *)bundleIdentifiersToExclude;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)disambiguationTitle;
- (NSData *)jsonData;
- (NSString *)mediaName;
- (NSArray *)mediaPunchouts;
- (int)mediaType;
- (void)setAlbumName:(NSString *)arg1;
- (void)setArtistName:(NSString *)arg1;
- (void)setBundleIdentifiersToExclude:(NSArray *)arg1;
- (void)setDisambiguationTitle:(NSString *)arg1;
- (void)setMediaName:(NSString *)arg1;
- (void)setMediaPunchouts:(NSArray *)arg1;
- (void)setMediaType:(int)arg1;

@end
