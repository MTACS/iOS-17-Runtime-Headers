
@interface NTKBundleComplicationIdentifierCache : NSObject {
    NTKBundleComplicationIdentifierCacheModel * _model;
    NSString * _overrideIdentifier;
    NSURL * _overrideUrl;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NTKBundleComplicationIdentifierCacheModel *model;
@property (nonatomic, retain) NSString *overrideIdentifier;
@property (nonatomic, retain) NSURL *overrideUrl;

- (void).cxx_destruct;
- (id)_cacheURL;
- (void)_enumerateBundles:(id /* block */)arg1;
- (id)_expectedCacheIdentifier;
- (void)_load;
- (void)_loadCachedModel;
- (void)_queue_fetchIdentifiersForComplication:(id)arg1 completion:(id /* block */)arg2;
- (void)_updateCacheModel:(id)arg1;
- (void)fetchIdentifiersForComplication:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)model;
- (id)overrideIdentifier;
- (id)overrideUrl;
- (void)setOverrideIdentifier:(id)arg1;
- (void)setOverrideUrl:(id)arg1;

@end
