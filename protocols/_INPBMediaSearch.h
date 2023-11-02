
@protocol _INPBMediaSearch <NSObject>

@required

+ (Class)genreNamesType;
+ (Class)moodNamesType;

- (int)StringAsMediaType:(NSString *)arg1;
- (int)StringAsReference:(NSString *)arg1;
- (int)StringAsSortOrder:(NSString *)arg1;
- (void)addGenreNames:(_INPBString *)arg1;
- (void)addMoodNames:(_INPBString *)arg1;
- (_INPBString *)albumName;
- (_INPBString *)artistName;
- (void)clearGenreNames;
- (void)clearMoodNames;
- (NSArray *)genreNames;
- (_INPBString *)genreNamesAtIndex:(unsigned long long)arg1;
- (unsigned long long)genreNamesCount;
- (bool)hasAlbumName;
- (bool)hasArtistName;
- (bool)hasMediaIdentifier;
- (bool)hasMediaName;
- (bool)hasMediaType;
- (bool)hasReference;
- (bool)hasReleaseDate;
- (bool)hasSortOrder;
- (_INPBString *)mediaIdentifier;
- (_INPBString *)mediaName;
- (int)mediaType;
- (NSString *)mediaTypeAsString:(int)arg1;
- (NSArray *)moodNames;
- (_INPBString *)moodNamesAtIndex:(unsigned long long)arg1;
- (unsigned long long)moodNamesCount;
- (int)reference;
- (NSString *)referenceAsString:(int)arg1;
- (_INPBDateTimeRange *)releaseDate;
- (void)setAlbumName:(_INPBString *)arg1;
- (void)setArtistName:(_INPBString *)arg1;
- (void)setGenreNames:(NSArray *)arg1;
- (void)setHasMediaType:(bool)arg1;
- (void)setHasReference:(bool)arg1;
- (void)setHasSortOrder:(bool)arg1;
- (void)setMediaIdentifier:(_INPBString *)arg1;
- (void)setMediaName:(_INPBString *)arg1;
- (void)setMediaType:(int)arg1;
- (void)setMoodNames:(NSArray *)arg1;
- (void)setReference:(int)arg1;
- (void)setReleaseDate:(_INPBDateTimeRange *)arg1;
- (void)setSortOrder:(int)arg1;
- (int)sortOrder;
- (NSString *)sortOrderAsString:(int)arg1;

@end
