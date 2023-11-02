
@protocol SFShowPhotosOneUpViewCommand <SFCommand>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (NSArray *)matchedPeople;
- (SFPerson *)matchedPerson;
- (NSArray *)matchedScenes;
- (SFPunchout *)photoFilePunchout;
- (SFPhotosLibraryImage *)photosLibraryImage;
- (void)setMatchedPeople:(NSArray *)arg1;
- (void)setMatchedPerson:(SFPerson *)arg1;
- (void)setMatchedScenes:(NSArray *)arg1;
- (void)setPhotoFilePunchout:(SFPunchout *)arg1;
- (void)setPhotosLibraryImage:(SFPhotosLibraryImage *)arg1;

@end
