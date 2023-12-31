
@protocol INStartPhotoPlaybackIntentExport <NSObject, JSExport>

@required

- (NSString *)albumName;
- (INDateComponentsRange *)dateCreated;
- (unsigned long long)excludedAttributes;
- (unsigned long long)includedAttributes;
- (id)init;
- (CLPlacemark *)locationCreated;
- (NSArray *)peopleInPhoto;
- (NSArray *)searchTerms;
- (void)setAlbumName:(NSString *)arg1;
- (void)setDateCreated:(INDateComponentsRange *)arg1;
- (void)setExcludedAttributes:(unsigned long long)arg1;
- (void)setIncludedAttributes:(unsigned long long)arg1;
- (void)setLocationCreated:(CLPlacemark *)arg1;
- (void)setPeopleInPhoto:(NSArray *)arg1;
- (void)setSearchTerms:(NSArray *)arg1;

@end
