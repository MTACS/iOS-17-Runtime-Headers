
@interface KMFindMySyncDevicesBridge : NSObject <KMProviderDatasetBridge> {
    _TtC9KoaMapper27KMFindMySyncDevicesProvider * _devicesProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)enumerateItemsWithError:(id*)arg1 usingBlock:(id /* block */)arg2;
- (id)init;
- (id)initWithDevicesProvider:(id)arg1;
- (long long)itemType;
- (id)originAppId;

@end
