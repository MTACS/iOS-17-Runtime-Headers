
@interface PHPersistentChangeFetchResult : NSObject {
    unsigned long long  _changeCount;
    PHPersistentChangeEnumerationContext * _enumerationContext;
    PHPhotoLibrary * _library;
    PHPersistentChangeFetchOptions * _options;
    NSArray * _transactions;
}

+ (id)fetchResultWithToken:(id)arg1 options:(id)arg2 photoLibrary:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (id)_managedObjectContext;
- (unsigned long long)changeCount;
- (void)enumerateChangesWithBlock:(id /* block */)arg1;
- (void)enumeratePHChangesWithBlock:(id /* block */)arg1;
- (id)initWithTransactions:(id)arg1 options:(id)arg2 photoLibrary:(id)arg3;
- (id)iteratorForPersistentChangeEnumeration;
- (id)nextPersistentChangeWithIterator:(id)arg1;

@end
