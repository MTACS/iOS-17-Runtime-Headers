
@protocol _SFPBPhotosLibraryImage <NSObject>

@required

- (void)addPeopleInPhoto:(_SFPBPerson *)arg1;
- (NSString *)applicationBundleIdentifier;
- (void)clearPeopleInPhoto;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (bool)isSyndicated;
- (NSData *)jsonData;
- (_SFPBPerson *)peopleInPhotoAtIndex:(unsigned long long)arg1;
- (unsigned long long)peopleInPhotoCount;
- (NSArray *)peopleInPhotos;
- (NSString *)photoIdentifier;
- (void)setApplicationBundleIdentifier:(NSString *)arg1;
- (void)setIsSyndicated:(bool)arg1;
- (void)setPeopleInPhotos:(NSArray *)arg1;
- (void)setPhotoIdentifier:(NSString *)arg1;

@end
