
@interface PUPXAssetsDataSourceManager : PUAssetsDataSourceManager <PXAssetsDataSourceManagerObserver> {
    long long  __currentUpdateID;
    PXAssetsDataSourceManager * _underlyingDataSourceManager;
}

@property (setter=_setCurrentUpdateId:, nonatomic) long long _currentUpdateID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXAssetsDataSourceManager *underlyingDataSourceManager;

- (void).cxx_destruct;
- (long long)_currentUpdateID;
- (void)_handleScheduledUpdateWithID:(long long)arg1;
- (void)_scheduleUpdate;
- (void)_setCurrentUpdateId:(long long)arg1;
- (void)_update;
- (id)init;
- (id)initWithUnderlyingDataSourceManager:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)photosDataSource;
- (id)underlyingDataSourceManager;

@end
