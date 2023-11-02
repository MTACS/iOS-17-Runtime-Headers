
@interface HKConceptIndexUtilities : NSObject

+ (bool)applyConcepts:(id)arg1 toIndexableObject:(id)arg2 keyPath:(id)arg3 error:(id*)arg4;
+ (bool)assignError:(id*)arg1 forInvalidKeyPath:(id)arg2 inClass:(Class)arg3;
+ (id)conceptsForIndexedConcepts:(id)arg1 expectedCount:(long long)arg2 context:(id)arg3 error:(id*)arg4;
+ (id)firstComponentForKeyPath:(id)arg1 error:(id*)arg2;
+ (id)indexedCodingsForCodingCollections:(id)arg1 context:(id)arg2 error:(id*)arg3;
+ (id)keyPathRemovingFirstComponentFromKeyPath:(id)arg1 error:(id*)arg2;
+ (id)keyPaths:(id)arg1 prefix:(id)arg2;
+ (id)medicalCodingCollectionForIndexableObject:(id)arg1 keyPath:(id)arg2 error:(id*)arg3;

- (id)init;

@end
