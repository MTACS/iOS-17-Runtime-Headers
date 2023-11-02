
@interface CKLogicalDeviceContext : NSObject {
    CKLogicalDeviceScopedDaemonProxy * _deviceScopedDaemonProxy;
    CKLogicalDeviceScopedStateManager * _deviceScopedStateManager;
    <CKTestDeviceProtocol> * _testDeviceProtocol;
    <CKTestDeviceReferenceProtocol> * _testDeviceReferenceProtocol;
    CKThrottleManager * _throttleManager;
    bool  _useLiveServer;
}

@property (nonatomic, readonly) CKLogicalDeviceScopedDaemonProxy *deviceScopedDaemonProxy;
@property (nonatomic, readonly) CKLogicalDeviceScopedStateManager *deviceScopedStateManager;
@property (nonatomic, readonly) long long pushBehavior;
@property (nonatomic, readonly) <CKTestDeviceProtocol> *testDeviceProtocol;
@property (nonatomic, readonly) <CKTestDeviceReferenceProtocol> *testDeviceReferenceProtocol;
@property (nonatomic, readonly) CKThrottleManager *throttleManager;
@property (nonatomic, readonly) bool useLiveServer;

+ (id)defaultContext;
+ (id)deviceContextForTestDeviceReferenceProtocol:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithTestDeviceReferenceProtocol:(id)arg1 useLiveServer:(bool)arg2;
- (id)deviceScopedDaemonProxy;
- (id)deviceScopedPushTopic:(id)arg1;
- (id)deviceScopedStateManager;
- (long long)pushBehavior;
- (id)testDeviceProtocol;
- (id)testDeviceReferenceProtocol;
- (id)throttleManager;
- (bool)useLiveServer;

@end
