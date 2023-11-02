
@interface __HMHomeDataSyncOperation : HMFOperation <HMFLogging> {
    HMHomeManager * _manager;
    bool  _refresh;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMHomeManager *manager;
@property (getter=isRefresh) bool refresh;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithHomeManager:(id)arg1;
- (id)initWithHomeManager:(id)arg1 timeout:(double)arg2;
- (bool)isRefresh;
- (void)main;
- (id)manager;
- (void)setRefresh:(bool)arg1;

@end
