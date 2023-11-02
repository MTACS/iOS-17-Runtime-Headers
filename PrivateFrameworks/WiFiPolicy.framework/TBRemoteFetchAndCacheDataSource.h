
@interface TBRemoteFetchAndCacheDataSource : NSObject {
    <TBCacheProvider> * _cacheProvider;
    TBDataSource * _fetchDataSource;
}

@property (nonatomic, retain) <TBCacheProvider> *cacheProvider;
@property (nonatomic, retain) TBDataSource *fetchDataSource;

- (void).cxx_destruct;
- (id)cacheProvider;
- (id)fetchDataSource;
- (id)initWithFetchDataSource:(id)arg1 cacheProvider:(id)arg2;
- (void)setCacheProvider:(id)arg1;
- (void)setFetchDataSource:(id)arg1;

@end
