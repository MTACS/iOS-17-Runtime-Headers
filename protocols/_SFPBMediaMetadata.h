
@protocol _SFPBMediaMetadata <NSObject>

@required

- (void)addBundleIdentifiersToExclude:(NSString *)arg1;
- (void)addMediaPunchouts:(_SFPBPunchout *)arg1;
- (NSString *)albumName;
- (NSString *)artistName;
- (NSString *)bundleIdentifiersToExcludeAtIndex:(unsigned long long)arg1;
- (unsigned long long)bundleIdentifiersToExcludeCount;
- (NSArray *)bundleIdentifiersToExcludes;
- (void)clearBundleIdentifiersToExclude;
- (void)clearMediaPunchouts;
- (NSString *)disambiguationTitle;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)mediaName;
- (NSArray *)mediaPunchouts;
- (_SFPBPunchout *)mediaPunchoutsAtIndex:(unsigned long long)arg1;
- (unsigned long long)mediaPunchoutsCount;
- (int)mediaType;
- (void)setAlbumName:(NSString *)arg1;
- (void)setArtistName:(NSString *)arg1;
- (void)setBundleIdentifiersToExcludes:(NSArray *)arg1;
- (void)setDisambiguationTitle:(NSString *)arg1;
- (void)setMediaName:(NSString *)arg1;
- (void)setMediaPunchouts:(NSArray *)arg1;
- (void)setMediaType:(int)arg1;

@end
