
@interface NSBatchUpdateResult : NSPersistentStoreResult {
    id  _aggregatedResult;
    unsigned long long  _resultType;
}

@property (readonly) id result;
@property (readonly) unsigned long long resultType;

- (void)dealloc;
- (id)initWithResultType:(unsigned long long)arg1 andObject:(id)arg2;
- (id)initWithSubresults:(id)arg1;
- (id)result;
- (unsigned long long)resultType;

@end
