
@interface BWFigCaptureAttachedAccessoriesMonitor : NSObject <ACCConnectionInfoDelegateProtocol> {
    NSString * _batteryPackAccessoryUUID;
    ACCConnectionInfo * _connectionInfoProvider;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSString * _walletAccessoryUUID;
}

@property (nonatomic, readonly) bool batteryPackAccessoryConnected;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool walletAccessoryConnected;

+ (void)initialize;
+ (id)sharedAttachedAccessoriesMonitor;

- (void)accessoryConnectionDetached:(id)arg1;
- (void)accessoryEndpointAttached:(id)arg1 transportType:(int)arg2 protocol:(int)arg3 forConnection:(id)arg4;
- (bool)batteryPackAccessoryConnected;
- (void)dealloc;
- (id)init;
- (bool)walletAccessoryConnected;

@end
