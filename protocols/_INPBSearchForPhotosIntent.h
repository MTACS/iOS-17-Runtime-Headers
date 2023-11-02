
@protocol _INPBSearchForPhotosIntent <NSObject>

@required

- (int)StringAsExcludedAttributes:(NSString *)arg1;
- (int)StringAsIncludedAttributes:(NSString *)arg1;
- (_INPBActivityList *)activities;
- (void)addExcludedAttribute:(int)arg1;
- (void)addIncludedAttribute:(int)arg1;
- (_INPBString *)albumName;
- (void)clearExcludedAttributes;
- (void)clearIncludedAttributes;
- (_INPBDateTimeRange *)dateCreated;
- (_INPBEventList *)events;
- (int)excludedAttributeAtIndex:(unsigned long long)arg1;
- (int*)excludedAttributes;
- (NSString *)excludedAttributesAsString:(int)arg1;
- (unsigned long long)excludedAttributesCount;
- (_INPBGeographicalFeatureList *)geographicalFeatures;
- (bool)hasActivities;
- (bool)hasAlbumName;
- (bool)hasDateCreated;
- (bool)hasEvents;
- (bool)hasGeographicalFeatures;
- (bool)hasIntentMetadata;
- (bool)hasLocationCreated;
- (bool)hasMemoryName;
- (bool)hasPeopleInPhoto;
- (bool)hasPlaces;
- (bool)hasSearchTerm;
- (int)includedAttributeAtIndex:(unsigned long long)arg1;
- (int*)includedAttributes;
- (NSString *)includedAttributesAsString:(int)arg1;
- (unsigned long long)includedAttributesCount;
- (_INPBIntentMetadata *)intentMetadata;
- (_INPBLocation *)locationCreated;
- (_INPBString *)memoryName;
- (_INPBContactList *)peopleInPhoto;
- (_INPBPlaceList *)places;
- (_INPBStringList *)searchTerm;
- (void)setActivities:(_INPBActivityList *)arg1;
- (void)setAlbumName:(_INPBString *)arg1;
- (void)setDateCreated:(_INPBDateTimeRange *)arg1;
- (void)setEvents:(_INPBEventList *)arg1;
- (void)setExcludedAttributes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setGeographicalFeatures:(_INPBGeographicalFeatureList *)arg1;
- (void)setIncludedAttributes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setLocationCreated:(_INPBLocation *)arg1;
- (void)setMemoryName:(_INPBString *)arg1;
- (void)setPeopleInPhoto:(_INPBContactList *)arg1;
- (void)setPlaces:(_INPBPlaceList *)arg1;
- (void)setSearchTerm:(_INPBStringList *)arg1;

@end
