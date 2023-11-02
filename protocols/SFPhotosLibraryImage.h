
@protocol SFPhotosLibraryImage <SFImage>

@required

- (NSString *)applicationBundleIdentifier;
- (NSDictionary *)dictionaryRepresentation;
- (bool)isSyndicated;
- (NSData *)jsonData;
- (NSArray *)peopleInPhoto;
- (NSString *)photoIdentifier;
- (void)setApplicationBundleIdentifier:(NSString *)arg1;
- (void)setIsSyndicated:(bool)arg1;
- (void)setPeopleInPhoto:(NSArray *)arg1;
- (void)setPhotoIdentifier:(NSString *)arg1;

@end
