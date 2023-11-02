
@interface SMCloudKitFunction : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    _TtC13SafetyMonitor23SMCloudKitFunctionSwift * _swiftCKF;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) _TtC13SafetyMonitor23SMCloudKitFunctionSwift *swiftCKF;

- (void).cxx_destruct;
- (id)initWithEnvironment:(unsigned long long)arg1 version:(id)arg2 queue:(id)arg3;
- (id)queue;
- (void)requestSafetyCacheRecordFromZone:(id)arg1 withToken:(id)arg2 completion:(id /* block */)arg3;
- (void)setQueue:(id)arg1;
- (void)setSwiftCKF:(id)arg1;
- (id)swiftCKF;

@end
