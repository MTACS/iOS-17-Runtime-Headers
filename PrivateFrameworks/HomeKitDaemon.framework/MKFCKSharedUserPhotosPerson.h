
@interface MKFCKSharedUserPhotosPerson : MKFCKSharedUserData <MKFPersonHMPersonTransformable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSUUID *photoLibraryPersonUUID;
@property (nonatomic, retain) MKFCKSharedUserDataRoot *root;
@property (readonly) Class superclass;

+ (id)fetchRequest;

- (id)createHMPerson;
- (void)updateWithHMPerson:(id)arg1;

@end
