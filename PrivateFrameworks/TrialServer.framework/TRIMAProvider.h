
@interface TRIMAProvider : NSObject <TRIMAProviding> {
    TRISQLiteMADatabase * _db;
}

+ (id)fetchRetryDateFromAttribution:(id)arg1 isDeferral:(bool)arg2;

- (void).cxx_destruct;
- (bool)_shouldMockMobileAssets;
- (id)_sqliteMADatabase;
- (id)createAutoAssetWithId:(id)arg1 decryptionKey:(id)arg2 error:(id*)arg3;
- (id)downloadAssets:(id)arg1 attribution:(id)arg2 aggregateProgress:(id)arg3 group:(id)arg4 completion:(id /* block */)arg5;
- (void)eliminateAllForSelector:(id)arg1 completion:(id /* block */)arg2;
- (void)eliminatePromotedNeverLockedForSelector:(id)arg1 completion:(id /* block */)arg2;
- (id)endAllPreviousLocksOfReasonSync:(id)arg1 forClientName:(id)arg2 forAssetSelector:(id)arg3;
- (id)endAllPreviousLocksOfSelectorSync:(id)arg1 forClientName:(id)arg2;
- (id)installedAssetsMatchingFullAssetIds:(id)arg1;

@end
