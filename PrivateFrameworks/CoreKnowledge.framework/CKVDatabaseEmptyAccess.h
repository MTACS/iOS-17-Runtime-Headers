
@interface CKVDatabaseEmptyAccess : NSObject <CKVDatabaseReadOnlyAccess>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)enumerateRecordResultsOfSelect:(id)arg1 recordClass:(Class)arg2 batchSize:(unsigned long long)arg3 offset:(unsigned long long)arg4 enumerateAll:(bool)arg5 error:(id*)arg6 usingBlock:(id /* block */)arg7;
- (bool)enumerateRecordResultsOfSelect:(id)arg1 recordClass:(Class)arg2 error:(id*)arg3 usingBlock:(id /* block */)arg4;
- (bool)enumerateRowResultsOfSelect:(id)arg1 batchSize:(unsigned long long)arg2 offset:(unsigned long long)arg3 enumerateAll:(bool)arg4 error:(id*)arg5 usingBlock:(id /* block */)arg6;
- (bool)enumerateRowResultsOfSelect:(id)arg1 error:(id*)arg2 usingBlock:(id /* block */)arg3;
- (bool)enumerateRowResultsOfSelect:(id)arg1 recordClass:(Class)arg2 error:(id*)arg3 usingBlock:(id /* block */)arg4;

@end
