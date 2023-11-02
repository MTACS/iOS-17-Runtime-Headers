
@interface _HKWatchAppInstallationManagerObserverBridge : NSObject <HKWatchAppInstallationManagerObserver> {
    HKObserverBridgeHandle * _handle;
}

@property (nonatomic, readonly) HKObserverBridgeHandle *handle;

- (void).cxx_destruct;
- (id)handle;
- (id)initWithHandle:(id)arg1;
- (void)watchAppInstallationManagerDidObserveChange:(id)arg1;

@end
