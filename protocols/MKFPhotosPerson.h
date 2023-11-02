
@protocol MKFPhotosPerson <MKFPerson, MKFPhotosPersonPublicExtensions>

@required

- (MKFPhotosPersonDatabaseID *)databaseID;
- (<MKFHome> *)home;
- (<MKFHomePerson> *)linkedHomePerson;
- (NSUUID *)photoLibraryPersonUUID;
- (void)setLinkedHomePerson:(id <MKFHomePerson>)arg1;
- (void)setPhotoLibraryPersonUUID:(NSUUID *)arg1;
- (<MKFUser> *)user;

@end
