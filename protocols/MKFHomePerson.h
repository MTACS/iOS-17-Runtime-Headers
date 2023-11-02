
@protocol MKFHomePerson <MKFPerson, MKFHomePersonPublicExtensions>

@required

- (MKFHomePersonDatabaseID *)databaseID;
- (<MKFHome> *)home;
- (<MKFPhotosPerson> *)linkedPhotosPerson;
- (void)setLinkedPhotosPerson:(id <MKFPhotosPerson>)arg1;

@end
