
@protocol WFCoreDataDatabaseResultFetchOperation <NSObject, NSCopying>

@required

- (long long)countWithContext:(NSManagedObjectContext *)arg1 error:(id*)arg2;
- (NSEntityDescription *)entity;
- (NSSet *)relationshipKeysAffectingDescriptors;
- (NSArray *)resultsWithContext:(NSManagedObjectContext *)arg1 error:(id*)arg2;

@end
