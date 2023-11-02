
@interface GTMTLTelemetryService : NSObject <GTMTLTelemetryService, GTMTLTelemetryServiceObserver> {
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    NSObject<OS_os_log> * _log;
    GTObservableService * _observers;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _timer;
}

- (void).cxx_destruct;
- (void)deregisterObserver:(unsigned long long)arg1;
- (void)deregisterObserversForConnection:(id)arg1 path:(id)arg2;
- (id)initWithGuestApp:(struct GTMTLGuestAppClient { id x1; id x2; id x3; id x4; struct os_unfair_lock_s { unsigned int x_5_1_1; } x5; unsigned int x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; _Atomic long long x10; id x11; id x12; id x13; id x14; int x15; int x16; unsigned long long x17; double x18; bool x19; BOOL x20[7]; }*)arg1;
- (void)notifyStatistics:(id)arg1;
- (id)query:(id)arg1;
- (unsigned long long)registerObserver:(id)arg1;
- (id)update:(id)arg1;

@end
