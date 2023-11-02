
@interface TPSSearchItemIndexer : NSObject {
    void $__lazy_storage_$_legacyIndexer;
    void $__lazy_storage_$_tipsIndexer;
    void $__lazy_storage_$_userGuideIndexer;
    void name;
    void queue;
}

+ (id)default;

- (void).cxx_destruct;
- (void)deleteAllItemsWithQualityOfService:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)indexTips:(id)arg1 qualityOfService:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)indexUserGuides:(id)arg1 qualityOfService:(long long)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (id)initWithName:(id)arg1;
- (void)reindexTips:(id)arg1 qualityOfService:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)reindexUserGuides:(id)arg1 qualityOfService:(long long)arg2 completionHandler:(id /* block */)arg3;

@end
