
@interface _MKFHomePerson : _MKFPerson <MKFHomePerson, MKFHomePersonPrivateExtensions>

@property (nonatomic, readonly, copy) MKFHomePersonDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) <MKFHome> *home;
@property (nonatomic, retain) _MKFHome *home;
@property (nonatomic, retain) _MKFPhotosPerson *linkedPhotosPerson;
@property (nonatomic, retain) <MKFPhotosPerson> *linkedPhotosPerson;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (id)fetchRequest;
+ (id)homeRelation;

- (id)castIfHomePerson;
- (id)createHMPerson;
- (id)databaseID;
- (id)photosPersonForPersonLink:(id)arg1;
- (void)updateWithHMPerson:(id)arg1;

@end
