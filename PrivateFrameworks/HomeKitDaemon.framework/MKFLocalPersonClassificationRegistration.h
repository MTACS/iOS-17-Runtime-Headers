
@interface MKFLocalPersonClassificationRegistration : HMDManagedObject

@property (nonatomic) bool enabled;
@property (nonatomic, copy) NSUUID *personUUID;
@property (nonatomic, retain) MKFLocalPersonClassificationSettings *settings;

+ (id)fetchPersonClassificationRegistrationForPersonUUID:(id)arg1 settingsModelUUID:(id)arg2 managedObjectContext:(id)arg3;
+ (id)fetchRequest;

@end
