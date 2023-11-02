
@interface Core_Audio_Driver_Service_Client : NSObject <Core_Audio_Driver_Service_Client_Protocol, NSXPCListenerDelegate> {
    NSXPCConnection * _connection_from_driver_service;
    NSXPCConnection * _connection_to_driver_service;
    <Core_Audio_Driver_Service_Client_Callback_Delegate> * _delegate;
    struct shared_ptr<Driver_File> { 
        struct Driver_File {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _driver_file;
    struct shared_ptr<std::function<void (std::shared_ptr<Driver_File>)>>="__ptr_"^v"__cntrl_"^{__shared_weak_count {}  _driver_service_undertaker;
    NSXPCListenerEndpoint * _endpoint;
    NSXPCListener * _listener;
    struct Dispatch_Queue { 
        struct object { 
            NSObject<OS_dispatch_object> *fObj; 
        } fObj; 
        struct weak_ptr<AMCP::Utility::Dispatch_Queue> { 
            struct Dispatch_Queue {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } __weak_this_; 
        struct Workloop { 
            struct object { 
                NSObject<OS_dispatch_object> *fObj; 
            } fObj; 
        } m_workloop; 
        struct atomic<bool> { 
            struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
                _Atomic bool __a_value; 
            } __a_; 
        } m_flush_started; 
        struct atomic<bool> { 
            struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
                _Atomic bool __a_value; 
            } __a_; 
        } m_something_dispatched_after_flush; 
        struct vector<AMCP::Utility::Dispatch_Queue::Event_Source, std::allocator<AMCP::Utility::Dispatch_Queue::Event_Source>> { 
            struct Event_Source {} *__begin_; 
            struct Event_Source {} *__end_; 
            struct __compressed_pair<AMCP::Utility::Dispatch_Queue::Event_Source *, std::allocator<AMCP::Utility::Dispatch_Queue::Event_Source>> { 
                struct Event_Source {} *__value_; 
            } __end_cap_; 
        } m_port_death_list; 
        struct mutex { 
            struct _opaque_pthread_mutex_t { 
                long long __sig; 
                BOOL __opaque[56]; 
            } __m_; 
        } m_port_death_list_mutex; 
        struct vector<AMCP::Utility::Dispatch_Queue::Event_Source, std::allocator<AMCP::Utility::Dispatch_Queue::Event_Source>> { 
            struct Event_Source {} *__begin_; 
            struct Event_Source {} *__end_; 
            struct __compressed_pair<AMCP::Utility::Dispatch_Queue::Event_Source *, std::allocator<AMCP::Utility::Dispatch_Queue::Event_Source>> { 
                struct Event_Source {} *__value_; 
            } __end_cap_; 
        } m_mach_port_receiver_list; 
        struct mutex { 
            struct _opaque_pthread_mutex_t { 
                long long __sig; 
                BOOL __opaque[56]; 
            } __m_; 
        } m_mach_port_receiver_list_mutex; 
        struct vector<AMCP::Utility::Dispatch_Queue::Event_Source, std::allocator<AMCP::Utility::Dispatch_Queue::Event_Source>> { 
            struct Event_Source {} *__begin_; 
            struct Event_Source {} *__end_; 
            struct __compressed_pair<AMCP::Utility::Dispatch_Queue::Event_Source *, std::allocator<AMCP::Utility::Dispatch_Queue::Event_Source>> { 
                struct Event_Source {} *__value_; 
            } __end_cap_; 
        } m_mig_server_list; 
        struct mutex { 
            struct _opaque_pthread_mutex_t { 
                long long __sig; 
                BOOL __opaque[56]; 
            } __m_; 
        } m_mig_server_list_mutex; 
        struct atomic<long long> { 
            struct __cxx_atomic_impl<long long, std::__cxx_atomic_base_impl<long long>> { 
                _Atomic long long __a_value; 
            } __a_; 
        } m_after_count; 
        NSObject<OS_dispatch_semaphore> *m_after_count_semaphore; 
    }  _queue;
}

@property (nonatomic, retain) NSXPCConnection *connection_from_driver_service;
@property (nonatomic, retain) NSXPCConnection *connection_to_driver_service;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <Core_Audio_Driver_Service_Client_Callback_Delegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct shared_ptr<Driver_File> { struct Driver_File {} *x1; struct __shared_weak_count {} *x2; } driver_file;
@property (nonatomic) struct shared_ptr<std::function<void (std::shared_ptr<Driver_File>)>>=^v^{__shared_weak_count {} driver_service_undertaker;
@property (nonatomic, retain) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCListener *listener;
@property (nonatomic) struct Dispatch_Queue { struct object { id x_1_1_1; } x1; struct weak_ptr<AMCP::Utility::Dispatch_Queue> { struct Dispatch_Queue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct Workloop { struct object { id x_1_2_1; } x_3_1_1; } x3; /* Warning: unhandled struct encoding: '{atomic<bool>={__cxx_atomic_impl<bool' */ struct x4; } queue; /* unknown property attribute:  std::__cxx_atomic_base_impl<long long>>=Aq}}@} */
@property (readonly) Class superclass;

+ (id)get_driver_name_list:(int)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)connect_to_driver_service:(struct shared_ptr<Driver_File> { struct Driver_File {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (id)connection_from_driver_service;
- (id)connection_to_driver_service;
- (void)dealloc;
- (void)deferred_driver_loaded:(id)arg1 reply:(id /* block */)arg2;
- (id)delegate;
- (struct shared_ptr<Driver_File> { struct Driver_File {} *x1; struct __shared_weak_count {} *x2; })driver_file;
- (struct shared_ptr<std::function<void (std::shared_ptr<Driver_File>)>>=^v^{__shared_weak_count {})driver_service_undertaker;
- (id)endpoint;
- (id)get_lazy_connection:(struct shared_ptr<Driver_File> { struct Driver_File {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (id)init;
- (id)init_with_driver_service_undertaker:(struct shared_ptr<std::function<void (std::shared_ptr<Driver_File>)>>=^v^{__shared_weak_count {})arg1;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (int)load_driver:(struct shared_ptr<Driver_File> { struct Driver_File {} *x1; struct __shared_weak_count {} *x2; })arg1 driver_endpoint:(id*)arg2;
- (struct Dispatch_Queue { struct object { id x_1_1_1; } x1; struct weak_ptr<AMCP::Utility::Dispatch_Queue> { struct Dispatch_Queue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct Workloop { struct object { id x_1_2_1; } x_3_1_1; } x3; struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic bool x_1_2_1; } x_4_1_1; } x4; struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic bool x_1_2_1; } x_5_1_1; } x5; struct vector<AMCP::Utility::Dispatch_Queue::Event_Source, std::allocator<AMCP::Utility::Dispatch_Queue::Event_Source>> { struct Event_Source {} *x_6_1_1; struct Event_Source {} *x_6_1_2; struct __compressed_pair<AMCP::Utility::Dispatch_Queue::Event_Source *, std::allocator<AMCP::Utility::Dispatch_Queue::Event_Source>> { struct Event_Source {} *x_3_2_1; } x_6_1_3; } x6; struct mutex { struct _opaque_pthread_mutex_t { long long x_1_2_1; BOOL x_1_2_2[56]; } x_7_1_1; } x7; struct vector<AMCP::Utility::Dispatch_Queue::Event_Source, std::allocator<AMCP::Utility::Dispatch_Queue::Event_Source>> { struct Event_Source {} *x_8_1_1; struct Event_Source {} *x_8_1_2; struct __compressed_pair<AMCP::Utility::Dispatch_Queue::Event_Source *, std::allocator<AMCP::Utility::Dispatch_Queue::Event_Source>> { struct Event_Source {} *x_3_2_1; } x_8_1_3; } x8; })queue;
- (void)send_endpoint_to_driver_service;
- (void)setConnection_from_driver_service:(id)arg1;
- (void)setConnection_to_driver_service:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDriver_file:(struct shared_ptr<Driver_File> { struct Driver_File {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setDriver_service_undertaker:(struct shared_ptr<std::function<void (std::shared_ptr<Driver_File>)>>=^v^{__shared_weak_count {})arg1;
- (void)setEndpoint:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setQueue:(struct Dispatch_Queue { struct object { id x_1_1_1; } x1; struct weak_ptr<AMCP::Utility::Dispatch_Queue> { struct Dispatch_Queue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct Workloop { struct object { id x_1_2_1; } x_3_1_1; } x3; struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic bool x_1_2_1; } x_4_1_1; } x4; struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic bool x_1_2_1; } x_5_1_1; } x5; struct vector<AMCP::Utility::Dispatch_Queue::Event_Source, std::allocator<AMCP::Utility::Dispatch_Queue::Event_Source>> { struct Event_Source {} *x_6_1_1; struct Event_Source {} *x_6_1_2; struct __compressed_pair<AMCP::Utility::Dispatch_Queue::Event_Source *, std::allocator<AMCP::Utility::Dispatch_Queue::Event_Source>> { struct Event_Source {} *x_3_2_1; } x_6_1_3; } x6; struct mutex { struct _opaque_pthread_mutex_t { long long x_1_2_1; BOOL x_1_2_2[56]; } x_7_1_1; } x7; struct vector<AMCP::Utility::Dispatch_Queue::Event_Source, std::allocator<AMCP::Utility::Dispatch_Queue::Event_Source>> { struct Event_Source {} *x_8_1_1; struct Event_Source {} *x_8_1_2; struct __compressed_pair<AMCP::Utility::Dispatch_Queue::Event_Source *, std::allocator<AMCP::Utility::Dispatch_Queue::Event_Source>> { struct Event_Source {} *x_3_2_1; } x_8_1_3; } x8; })arg1;
- (void)teardown_connection;
- (void)tell_driver_service_to_exit;

@end
