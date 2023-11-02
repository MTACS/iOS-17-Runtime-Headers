
@interface PLPersonReference : PLManagedObject

@property (nonatomic, retain) PLAdditionalAssetAttributes *assetAttributes;
@property (nonatomic, retain) PLPerson *person;
@property (nonatomic, retain) NSData *personData;
@property (nonatomic, retain) NSString *personUUID;

+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)arg1 personUUID:(id)arg2 personData:(id)arg3;

@end
