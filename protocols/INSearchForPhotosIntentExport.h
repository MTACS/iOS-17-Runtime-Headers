
@protocol INSearchForPhotosIntentExport <NSObject, JSExport>

@required

- (NSArray *)activities;
- (long long)activitiesOperator;
- (NSString *)albumName;
- (INDateComponentsRange *)dateCreated;
- (NSArray *)events;
- (long long)eventsOperator;
- (unsigned long long)excludedAttributes;
- (NSArray *)geographicalFeatures;
- (long long)geographicalFeaturesOperator;
- (unsigned long long)includedAttributes;
- (id)init;
- (CLPlacemark *)locationCreated;
- (NSString *)memoryName;
- (NSArray *)peopleInPhoto;
- (NSArray *)places;
- (long long)placesOperator;
- (NSArray *)searchTerms;
- (void)setActivities:(NSArray *)arg1;
- (void)setAlbumName:(NSString *)arg1;
- (void)setDateCreated:(INDateComponentsRange *)arg1;
- (void)setEvents:(NSArray *)arg1;
- (void)setExcludedAttributes:(unsigned long long)arg1;
- (void)setGeographicalFeatures:(NSArray *)arg1;
- (void)setIncludedAttributes:(unsigned long long)arg1;
- (void)setLocationCreated:(CLPlacemark *)arg1;
- (void)setMemoryName:(NSString *)arg1;
- (void)setPeopleInPhoto:(NSArray *)arg1;
- (void)setPlaces:(NSArray *)arg1;
- (void)setSearchTerms:(NSArray *)arg1;

@end
