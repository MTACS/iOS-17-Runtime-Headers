
@interface AVAudioSessionXPCClientRelay : NSObject {
    NSXPCConnection * connection;
    struct synchronized<as::server::DeferredMessageState, caulk::mach::unfair_lock, caulk::empty_atomic_interface<as::server::DeferredMessageState>> { 
        struct unfair_lock { 
            struct os_unfair_lock_s { 
                unsigned int _os_unfair_lock_opaque; 
            } m_lock; 
        } mMutex; 
        struct DeferredMessageState { 
            bool mMessagePending; 
            unsigned int mDeferredMessageCount; 
            <SessionManagerXPCServerCallbackProtocol> *proxy; 
            struct ProcessToken { 
                unsigned int mValue; 
            } mToken; 
            struct vector<as::server::DeferredMessageState::EventType, std::allocator<as::server::DeferredMessageState::EventType>> { 
                int *__begin_; 
                int *__end_; 
                struct __compressed_pair<as::server::DeferredMessageState::EventType *, std::allocator<as::server::DeferredMessageState::EventType>> { 
                    int *__value_; 
                } __end_cap_; 
            } mFIFO; 
            struct optional<as::server::ConfigChangeSummary> { 
                union { 
                    BOOL __null_state_; 
                    struct ConfigChangeSummary { 
                        int (**_vptr$Base)(); 
                        struct vector<std::unique_ptr<as::server::SessionUpdateSummary>, std::allocator<std::unique_ptr<as::server::SessionUpdateSummary>>> { 
                            void *__begin_; 
                            void *__end_; 
                            struct __compressed_pair<std::unique_ptr<as::server::SessionUpdateSummary> *, std::allocator<std::unique_ptr<as::server::SessionUpdateSummary>>> { 
                                void *__value_; 
                            } __end_cap_; 
                        } _sessionChanges; 
                        struct unique_ptr<as::server::ChangedObject, std::default_delete<as::server::ChangedObject>> { 
                            struct __compressed_pair<as::server::ChangedObject *, std::default_delete<as::server::ChangedObject>> { 
                                struct ChangedObject {} *__value_; 
                            } __ptr_; 
                        } _hardwareSystemChange; 
                    } __val_; 
                } ; 
                bool __engaged_; 
            } mDeferredConfigChange; 
            struct vector<as::RouteIdentifier, std::allocator<as::RouteIdentifier>> { 
                struct RouteIdentifier {} *__begin_; 
                struct RouteIdentifier {} *__end_; 
                struct __compressed_pair<as::RouteIdentifier *, std::allocator<as::RouteIdentifier>> { 
                    struct RouteIdentifier {} *__value_; 
                } __end_cap_; 
            } mDeferredDefaultRouteChanges; 
            struct vector<unsigned int, std::allocator<unsigned int>> { 
                unsigned int *__begin_; 
                unsigned int *__end_; 
                struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { 
                    unsigned int *__value_; 
                } __end_cap_; 
            } mDeferredStopForAppStateChange; 
            struct vector<unsigned int, std::allocator<unsigned int>> { 
                unsigned int *__begin_; 
                unsigned int *__end_; 
                struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { 
                    unsigned int *__value_; 
                } __end_cap_; 
            } mDeferredNeedsStateSync; 
            struct vector<std::pair<unsigned int, NSDictionary *>, std::allocator<std::pair<unsigned int, NSDictionary *>>> { 
                void *__begin_; 
                void *__end_; 
                struct __compressed_pair<std::pair<unsigned int, NSDictionary *> *, std::allocator<std::pair<unsigned int, NSDictionary *>>> { 
                    void *__value_; 
                } __end_cap_; 
            } mDeferredInterruptions; 
            struct vector<std::pair<unsigned int, bool>, std::allocator<std::pair<unsigned int, bool>>> { 
                void *__begin_; 
                void *__end_; 
                struct __compressed_pair<std::pair<unsigned int, bool> *, std::allocator<std::pair<unsigned int, bool>>> { 
                    void *__value_; 
                } __end_cap_; 
            } mDeferredHasProxies; 
            struct vector<as::server::ControlValue, std::allocator<as::server::ControlValue>> { 
                struct ControlValue {} *__begin_; 
                struct ControlValue {} *__end_; 
                struct __compressed_pair<as::server::ControlValue *, std::allocator<as::server::ControlValue>> { 
                    struct ControlValue {} *__value_; 
                } __end_cap_; 
            } mDeferredControlValueChanges; 
        } mObject; 
    }  guarded_impl;
    struct ProcessToken { 
        unsigned int mValue; 
    }  token;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithConnection:(id)arg1 token:(struct ProcessToken { unsigned int x1; })arg2;
- (void)sendControlValueChanged:(const void*)arg1;
- (void)sendDeferredMessages;
- (void)sendInterruptionMessageForSession:(unsigned int)arg1 userInfo:(id)arg2;
- (void)sendServerConfigurationChange:(const void*)arg1;
- (void)sendServerDefaultRouteChange:(const void*)arg1;
- (void)sendSession:(unsigned int)arg1 hasProxies:(bool)arg2;
- (void)sendSessionNeedsStateSync:(unsigned int)arg1;
- (void)sendSessionStoppedForAppStateChange:(unsigned int)arg1;
- (void)setBarrierBlock;

@end
