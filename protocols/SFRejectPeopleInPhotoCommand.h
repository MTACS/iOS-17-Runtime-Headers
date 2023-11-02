
@protocol SFRejectPeopleInPhotoCommand <SFCommand>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (SFPhotosLibraryImage *)photosLibraryImage;
- (NSArray *)rejectedPeople;
- (void)setPhotosLibraryImage:(SFPhotosLibraryImage *)arg1;
- (void)setRejectedPeople:(NSArray *)arg1;

@end
