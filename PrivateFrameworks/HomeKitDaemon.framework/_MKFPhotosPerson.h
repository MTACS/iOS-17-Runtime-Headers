
@interface _MKFPhotosPerson : _MKFPerson <MKFPhotosPerson, MKFPhotosPersonPrivateExtensions>

@property (nonatomic, readonly, copy) MKFPhotosPersonDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <MKFHome> *home;
@property (nonatomic, retain) _MKFHomePerson *linkedHomePerson;
@property (nonatomic, retain) <MKFHomePerson> *linkedHomePerson;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSUUID *photoLibraryPersonUUID;
@property (readonly) Class superclass;
@property (nonatomic, retain) _MKFUser *user;
@property (nonatomic, readonly, retain) <MKFUser> *user;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (id)fetchRequest;
+ (id)homeRelation;

- (id)castIfPhotosPerson;
- (id)createHMPerson;
- (id)databaseID;
- (id)home;
- (void)updateWithHMPerson:(id)arg1;

@end
