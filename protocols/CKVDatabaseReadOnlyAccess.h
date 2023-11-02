
@protocol CKVDatabaseReadOnlyAccess <NSObject>

@required

- (bool)enumerateRecordResultsOfSelect:(void *)arg1 recordClass:(void *)arg2 batchSize:(void *)arg3 offset:(void *)arg4 enumerateAll:(void *)arg5 error:(void *)arg6 usingBlock:(void *)arg7; // needs 7 arg types, found 14: CKVDatabaseSelect *, Class, unsigned long long, unsigned long long, bool, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, NSObject<CKVDatabaseRecord> *, id*, bool*, void*
- (bool)enumerateRecordResultsOfSelect:(void *)arg1 recordClass:(void *)arg2 error:(void *)arg3 usingBlock:(void *)arg4; // needs 4 arg types, found 11: CKVDatabaseSelect *, Class, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, NSObject<CKVDatabaseRecord> *, id*, bool*, void*
- (bool)enumerateRowResultsOfSelect:(void *)arg1 batchSize:(void *)arg2 offset:(void *)arg3 enumerateAll:(void *)arg4 error:(void *)arg5 usingBlock:(void *)arg6; // needs 6 arg types, found 13: CKVDatabaseSelect *, unsigned long long, unsigned long long, bool, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, CKVDatabaseValueRow *, id*, bool*, void*
- (bool)enumerateRowResultsOfSelect:(void *)arg1 error:(void *)arg2 usingBlock:(void *)arg3; // needs 3 arg types, found 10: CKVDatabaseSelect *, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, CKVDatabaseValueRow *, id*, bool*, void*
- (int)rowsModified:(id*)arg1;

@end
