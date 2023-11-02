
@interface CKVIndexUpdater : NSObject {
    unsigned int  _addOrUpdateCount;
    id /* block */  _completion;
    CKVDatabaseUpdater * _databaseUpdater;
    CKVDiffUpdateCache * _diffUpdateCache;
    CKVFTSIndexUpdater * _ftsUpdater;
    unsigned short  _incrementalErrorCode;
    CKVInstanceInfoLog * _instanceLog;
    long long  _itemType;
    unsigned short  _options;
    unsigned long long  _rankCounter;
    unsigned int  _removeCount;
    CKVSkitUpdater * _skitUpdater;
    unsigned int  _storedItemCount;
    bool  _updateStatus;
    unsigned short  _updaterOptions;
}

@property (nonatomic, readonly) unsigned short incrementalErrorCode;
@property (nonatomic) bool updateStatus;
@property (nonatomic, readonly) unsigned short updaterOptions;

+ (bool)_rebuildSkitWithAllVocabularyForUser:(id)arg1 indexManager:(id)arg2 settings:(id)arg3;
+ (id)updaterForRequest:(id)arg1 indexManager:(id)arg2 settings:(id)arg3 timeout:(double)arg4;

- (void).cxx_destruct;
- (void)_complete;
- (void)_deleteAllItems;
- (void)_deleteStaleItems;
- (void)_diffUpdateItems:(id)arg1;
- (unsigned long long)_incrementOrdinal;
- (void)_logSkitUpdate;
- (void)abort;
- (bool)addOrUpdateItems:(id)arg1;
- (bool)finish:(unsigned short*)arg1;
- (unsigned short)incrementalErrorCode;
- (id)initWithRequest:(id)arg1 settings:(id)arg2 instanceLog:(id)arg3 database:(id)arg4 skit:(id)arg5 completion:(id /* block */)arg6;
- (id)initWithRequest:(id)arg1 updaterOptions:(unsigned short)arg2 errorCode:(unsigned short)arg3 instanceLog:(id)arg4 databaseUpdater:(id)arg5 ftsUpdater:(id)arg6 skitUpdater:(id)arg7 options:(unsigned short)arg8 completion:(id /* block */)arg9;
- (bool)isIncremental;
- (bool)isOrdered;
- (bool)isPriorDatasetOrdered;
- (id)modifiedFieldTypes;
- (unsigned long long)priorVersion;
- (bool)removeItemId:(id)arg1;
- (void)setUpdateStatus:(bool)arg1;
- (bool)updateStatus;
- (unsigned short)updaterOptions;

@end
