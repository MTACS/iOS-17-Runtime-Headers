
@interface PLManagedObjectValidator : NSObject

+ (id)_entityClassesToValidate;
+ (bool)validateAllObjectsUsingManagedObjectContext:(id)arg1 resultHandler:(id /* block */)arg2;
+ (bool)validateAllObjectsWithEntityClass:(Class)arg1 inManagedObjectContext:(id)arg2 resultHandler:(id /* block */)arg3;
+ (id)validateManagedObject:(id)arg1;

@end
