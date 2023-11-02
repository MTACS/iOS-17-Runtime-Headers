
@interface TBPreferLocalFetchDataSource : NSObject {
    <TBCacheProvider> * _cacheProvider;
    TBDataSource * _localDataSource;
    TBDataSource * _remoteDataSource;
}

@property (nonatomic, retain) <TBCacheProvider> *cacheProvider;
@property (nonatomic, retain) TBDataSource *localDataSource;
@property (nonatomic, retain) TBDataSource *remoteDataSource;

- (void).cxx_destruct;
- (id)cacheProvider;
- (id)initWithLocalDataSource:(id)arg1 remoteDataSource:(id)arg2 cacheProvider:(id)arg3;
- (id)localDataSource;
- (id)remoteDataSource;
- (void)setCacheProvider:(id)arg1;
- (void)setLocalDataSource:(id)arg1;
- (void)setRemoteDataSource:(id)arg1;

@end
