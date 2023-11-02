
@interface TPSSecureArchivingUtilities : NSObject

+ (void)archivedDataWithRootObject:(id)arg1 forKey:(id)arg2;
+ (void)archivedDataWithRootObject:(id)arg1 forKey:(id)arg2 userDefaults:(id)arg3;
+ (id)syncQueue;
+ (id)unarchivedObjectOfClass:(Class)arg1 forKey:(id)arg2;
+ (id)unarchivedObjectOfClass:(Class)arg1 forKey:(id)arg2 userDefaults:(id)arg3;
+ (id)unarchivedObjectOfClasses:(id)arg1 forKey:(id)arg2;
+ (id)unarchivedObjectOfClasses:(id)arg1 forKey:(id)arg2 userDefaults:(id)arg3;

@end
