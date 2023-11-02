
@interface KVSkitWriter : NSObject <KVSkitWriteAccess> {
    NSURL * _directoryURL;
    unsigned long long  _flushThreshold;
    bool  _inTransaction;
    struct unique_ptr<skitbridge::Indexer, std::default_delete<skitbridge::Indexer>> { 
        struct __compressed_pair<skitbridge::Indexer *, std::default_delete<skitbridge::Indexer>> { 
            struct Indexer {} *__value_; 
        } __ptr_; 
    }  _indexer;
    NSMutableDictionary * _info;
    long long  _transactionLocale;
}

@property (nonatomic, readonly) unsigned long long flushThreshold;

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_beginTransactionWithError:(id*)arg1;
- (long long)_indexLocale;
- (bool)_loadLocaleWithError:(id*)arg1;
- (void)_resetTransactionSate;
- (bool)_saveLocaleWithError:(id*)arg1;
- (bool)addVocabularyItemWithBuffer:(id)arg1 originAppId:(id)arg2 recordId:(id)arg3 error:(id*)arg4;
- (bool)cleanup:(id*)arg1;
- (bool)clearWithError:(id*)arg1;
- (bool)commitChanges:(bool*)arg1 error:(id*)arg2;
- (unsigned long long)flushThreshold;
- (long long)indexLocale;
- (id)init;
- (id)initWithSkitDirectoryURL:(id)arg1 dataProtectionClass:(int)arg2 flushThreshold:(unsigned long long)arg3;
- (bool)isSupportedItemType:(long long)arg1;
- (bool)removeVocabularyItemWithRecordId:(id)arg1 error:(id*)arg2;
- (bool)rollbackChanges:(id*)arg1;
- (bool)setTransactionLocale:(long long)arg1 assetPath:(id)arg2 error:(id*)arg3;
- (bool)shouldMerge:(bool*)arg1 error:(id*)arg2;

@end
