
@interface CSAudioPowerServiceClient : NSObject {
    <CSAudioPowerServiceClientDelegate> * _delegate;
    long long  _frequency;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _timer;
    NSXPCConnection * _xpcConnection;
}

+ (unsigned long long)_getTimeIntervalFromFrequency:(long long)arg1;

- (void).cxx_destruct;
- (void)_beginUpdate;
- (id)_connection;
- (void)_endUpdate;
- (void)_fetchPowerLevels;
- (void)_invalidate;
- (id)_newConnection;
- (id)_service;
- (void)_timerFired;
- (void)beginUpdate;
- (void)endUpdate;
- (id)initWithQueue:(id)arg1 frequency:(long long)arg2 delegate:(id)arg3;
- (void)invalidate;

@end
