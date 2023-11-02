
@interface PLClientChangePublisher : NSObject <PLChangePublisher> {
    PLAssetsdClient * _assetsdClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithAssetsdClient:(id)arg1;
- (void)pauseLaunchEventNotifications;
- (id)publishChangeEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 transaction:(id)arg3;
- (void)unpauseLaunchEventNotifications;

@end
