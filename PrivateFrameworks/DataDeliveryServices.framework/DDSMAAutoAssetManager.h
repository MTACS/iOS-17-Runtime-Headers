
@interface DDSMAAutoAssetManager : NSObject <DDSMAAutoAssetManager> {
    <DDSMAAutoAssetManagerDataSource> * _dataSource;
    <DDSMAAutoAssetProvider> * _provider;
}

@property (nonatomic, readonly) <DDSMAAutoAssetManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <DDSMAAutoAssetProvider> *provider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dataSource;
- (void)downloadAssetForQuery:(id)arg1 clientID:(id)arg2;
- (id)init;
- (id)initWithProvider:(id)arg1 dataSource:(id)arg2;
- (id)provider;
- (bool)shouldDownloadAutoAssetForClient:(id)arg1;

@end
