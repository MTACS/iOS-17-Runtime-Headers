
@protocol _INPBStartPhotoPlaybackIntent <NSObject>

@required

- (int)StringAsExcludedAttributes:(NSString *)arg1;
- (int)StringAsIncludedAttributes:(NSString *)arg1;
- (void)addExcludedAttribute:(int)arg1;
- (void)addIncludedAttribute:(int)arg1;
- (_INPBString *)albumName;
- (void)clearExcludedAttributes;
- (void)clearIncludedAttributes;
- (_INPBDateTimeRange *)dateCreated;
- (int)excludedAttributeAtIndex:(unsigned long long)arg1;
- (int*)excludedAttributes;
- (NSString *)excludedAttributesAsString:(int)arg1;
- (unsigned long long)excludedAttributesCount;
- (bool)hasAlbumName;
- (bool)hasDateCreated;
- (bool)hasIntentMetadata;
- (bool)hasLocationCreated;
- (bool)hasPeopleInPhoto;
- (bool)hasSearchTerm;
- (int)includedAttributeAtIndex:(unsigned long long)arg1;
- (int*)includedAttributes;
- (NSString *)includedAttributesAsString:(int)arg1;
- (unsigned long long)includedAttributesCount;
- (_INPBIntentMetadata *)intentMetadata;
- (_INPBLocation *)locationCreated;
- (_INPBContactList *)peopleInPhoto;
- (_INPBStringList *)searchTerm;
- (void)setAlbumName:(_INPBString *)arg1;
- (void)setDateCreated:(_INPBDateTimeRange *)arg1;
- (void)setExcludedAttributes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setIncludedAttributes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setLocationCreated:(_INPBLocation *)arg1;
- (void)setPeopleInPhoto:(_INPBContactList *)arg1;
- (void)setSearchTerm:(_INPBStringList *)arg1;

@end
