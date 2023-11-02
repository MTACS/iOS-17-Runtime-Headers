
@interface TRIKVStore : NSObject {
    TRIDatabase * _db;
}

- (void).cxx_destruct;
- (id)blobForKey:(id)arg1 usingTransaction:(id)arg2;
- (id)init;
- (id)initWithDatabase:(id)arg1;
- (struct _PASDBTransactionCompletion_ { bool x1; })readTransactionWithFailableBlock:(id /* block */)arg1;
- (void)removeBlobForKey:(id)arg1 usingTransaction:(id)arg2;
- (void)setBlob:(id)arg1 forKey:(id)arg2 usingTransaction:(id)arg3;
- (struct _PASDBTransactionCompletion_ { bool x1; })writeTransactionWithFailableBlock:(id /* block */)arg1;

@end
