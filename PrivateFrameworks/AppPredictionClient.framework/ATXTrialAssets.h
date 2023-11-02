
@interface ATXTrialAssets : NSObject {
    _PASLock * _lock;
}

- (void).cxx_destruct;
- (bool)_cleanModelDirectory;
- (id)_treatmentId;
- (id)_unarchiveResource:(id)arg1;
- (id)_unarchivedResourcePath;
- (void)addUpdateHandlerWithBlock:(id /* block */)arg1;
- (bool)clearStaleUnarchivedLevels;
- (id)client;
- (id)dictionaryForClass:(Class)arg1;
- (id)dictionaryForClassName:(id)arg1;
- (id)dictionaryForResource:(id)arg1;
- (id)filePathForClass:(Class)arg1;
- (id)filePathForClassName:(id)arg1;
- (id)filePathForResource:(id)arg1;
- (id)init;
- (id)pathForLegacyResourcePath:(id)arg1;

@end
