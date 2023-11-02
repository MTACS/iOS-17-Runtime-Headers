
@interface PLLegacyChangeEvent : NSObject

+ (id)_descriptionForEvent:(id)arg1;
+ (id)_descriptionForEvent:(id)arg1 withPersistentStoreCoordinator:(id)arg2;
+ (bool)isEmptyEvent:(id)arg1;
+ (id)localChangeEventFromChangeHubEvent:(id)arg1 withLibraryBundle:(id)arg2;

@end
