
@interface CNDonatedMeCardPersistenceHelper : NSObject

+ (bool)createNewMeContact:(id)arg1 inStore:(id)arg2;
+ (id)defaultKeysForValuesToPersist;
+ (id)mutableCopyOfContact:(id)arg1 byCopyingModificationsAndValuesForKeysOnly:(id)arg2;
+ (id)mutableCopyOfContact:(id)arg1 byCopyingValuesForKeysOnly:(id)arg2;
+ (id)propertyGroupItemLog;

@end
