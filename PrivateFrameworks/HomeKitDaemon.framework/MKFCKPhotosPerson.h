
@interface MKFCKPhotosPerson : MKFCKPerson

@property (nonatomic, retain) MKFCKHomePerson *linkedHomePerson;
@property (nonatomic, copy) NSUUID *photoLibraryPersonUUID;
@property (nonatomic, retain) MKFCKUser *user;

+ (id)fetchRequest;
+ (id)rootKeyPath;

- (bool)exportFromLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;
- (id)home;
- (bool)importIntoLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;
- (void)setHome:(id)arg1;
- (bool)validateUser:(id*)arg1 error:(id*)arg2;

@end
