
@interface CLIndoorXPCProvider : NSObject {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _frameworkQueue;
    NSObject<OS_dispatch_source> * _interruptReconnection;
    struct optional<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> { 
        bool m_initialized; 
        struct aligned_storage<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> { 
            union dummy_u { 
                BOOL data[8]; 
                struct a8 { } aligner_; 
            } dummy_; 
        } m_storage; 
    }  _lastReconnectTime;
}

+ (id)newConnectionFor:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id /* block */)_defaultErrHandler:(id /* block */)arg1 forCaller:(id)arg2;
- (id /* block */)_defaultErrHandlerForCaller:(id)arg1;
- (void)dealloc;
- (id)impl;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (id)initWithEndpoint:(id)arg1;
- (void)invalidate;
- (void)withinQueueHandleReconnect:(struct time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> { struct duration<long long, std::ratio<1, 1000000000>> { long long x_1_1_1; } x1; })arg1;
- (void)withinQueueInitializeConnection;
- (void)withinQueueInterruptionHandler;
- (void)withinQueueInvalidate;
- (void)withinQueueReinitializeRemoteState;
- (void)withinQueueScheduleReconnect:(struct duration<long long, std::ratio<1, 1000000000>> { long long x1; })arg1 reason:(id)arg2;
- (int)withinQueueShouldReinitializeRemote:(struct time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> { struct duration<long long, std::ratio<1, 1000000000>> { long long x_1_1_1; } x1; })arg1;

@end
