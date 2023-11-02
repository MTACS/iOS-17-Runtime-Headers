
@protocol _INPBSearchForPhotosIntentResponse <NSObject>

@required

- (NSString *)albumName;
- (bool)hasAlbumName;
- (bool)hasLocationCreated;
- (bool)hasSearchResultsCount;
- (_INPBLocation *)locationCreated;
- (int)searchResultsCount;
- (void)setAlbumName:(NSString *)arg1;
- (void)setHasSearchResultsCount:(bool)arg1;
- (void)setLocationCreated:(_INPBLocation *)arg1;
- (void)setSearchResultsCount:(int)arg1;

@end
