
@interface SHClusterLoader : NSObject {
    <SHDataFetcher> * _dataFetcher;
    SHClusterSQLiteDataStore * _dataStore;
}

@property (nonatomic, readonly) <SHDataFetcher> *dataFetcher;
@property (nonatomic, readonly) SHClusterSQLiteDataStore *dataStore;

+ (void)loadDataForRequest:(id)arg1 completionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)dataFetcher;
- (id)dataStore;
- (id)initWithDataFetcher:(id)arg1 dataStore:(id)arg2;
- (void)loadFromURL:(id)arg1 type:(long long)arg2 storefront:(id)arg3 reuseExistingData:(bool)arg4 completion:(id /* block */)arg5;

@end
