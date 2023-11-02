
@interface MKFCKHomePerson : MKFCKPerson

@property (nonatomic, retain) MKFCKHome *home;
@property (nonatomic, retain) MKFCKPhotosPerson *linkedPhotosPerson;
@property (nonatomic, copy) NSUUID *linkedSharedPhotosPersonModelID;

+ (id)fetchRequest;

- (bool)exportFromLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;
- (bool)importIntoLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;

@end
