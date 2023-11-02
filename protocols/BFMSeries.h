
@protocol BFMSeries <BFMResource>

@required

- (NSArray *)assets;
- (NSNumber *)authorCount;
- (NSArray *)authorNames;
- (NSArray *)genres;
- (bool)hasUniqueAuthors;
- (bool)isAudiobookSeries;
- (bool)isBookSeries;
- (bool)isExplicit;
- (bool)isOrdered;
- (NSString *)name;
- (NSURL *)url;

@end
