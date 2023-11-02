
@interface _LTHotfixManager : NSObject {
    NSURL * _hotfixURL;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSURL *hotfixURL;

+ (void)_enableTestFixture:(bool)arg1;
+ (void)initialize;
+ (id)shared;

- (void).cxx_destruct;
- (id)_CDNURL:(id)arg1;
- (void)_decompressArchive:(id)arg1 to:(id)arg2 error:(id*)arg3;
- (void)_downloadHotfix:(id)arg1 completion:(id /* block */)arg2;
- (void)_downloadMappingPlist:(id /* block */)arg1;
- (void)_downloadWithURL:(id)arg1 completion:(id /* block */)arg2;
- (void)_replaceHotfix:(long long)arg1 completion:(id /* block */)arg2;
- (void)_updateHotfixInternal:(id /* block */)arg1;
- (void)deleteHotfix:(id /* block */)arg1;
- (id)hotfixURL;
- (id)init;
- (void)refreshHotfix:(id /* block */)arg1;
- (void)updateHotfix:(id /* block */)arg1;

@end
