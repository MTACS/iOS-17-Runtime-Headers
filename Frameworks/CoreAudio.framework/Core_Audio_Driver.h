
@interface Core_Audio_Driver : NSObject <Core_Audio_Driver_Protocol, NSXPCListenerDelegate> {
    struct AudioServerPlugInDriverInterface {} ** _asp_interface;
    NSObject<OS_dispatch_queue> * _concurrent_queue;
    struct shared_ptr<caulk::mach::unfair_lock> { 
        struct unfair_lock {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _config_change_info_lock;
    struct shared_ptr<std::map<unsigned long long, void *>> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _config_change_info_map;
    Core_Audio_Driver_Host_Proxy * _driver_host_proxy;
    NSXPCListenerEndpoint * _endpoint;
    struct AudioServerPlugInHostInterface { int (*x1)(); int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); } * _host_interface;
    struct shared_ptr<std::vector<std::pair<AMCP::Portal::IPC::shared_buffer_info_t, applesauce::xpc::dict>>> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _io_buffer_list;
    struct shared_ptr<caulk::mach::unfair_lock> { 
        struct unfair_lock {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _io_receiver_lock;
    struct shared_ptr<std::unordered_map<AMCP::Portal::IPC::io_messenger_id_t, std::shared_ptr<AMCP::Portal::IPC::IO_Receiver>>> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _io_receivers;
    NSXPCListener * _listener;
    struct shared_ptr<Property_Type_Info> { 
        struct Property_Type_Info {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _m_custom_property_type_cache;
    id /* block */  _process_boost_reply;
}

@property (nonatomic) struct AudioServerPlugInDriverInterface {}**asp_interface;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *concurrent_queue;
@property (nonatomic, readonly) struct shared_ptr<caulk::mach::unfair_lock> { struct unfair_lock {} *x1; struct __shared_weak_count {} *x2; } config_change_info_lock;
@property (nonatomic) /* Warning: unhandled struct encoding: '{shared_ptr<std::map<unsigned long long' */ struct  config_change_info_map; /* unknown property attribute:  void *>>=^v^{__shared_weak_count}} */
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) Core_Audio_Driver_Host_Proxy *driver_host_proxy;
@property (nonatomic, retain) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct AudioServerPlugInHostInterface { int (*x1)(); int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); }*host_interface;
@property (nonatomic) /* Warning: unhandled struct encoding: '{shared_ptr<std::vector<std::pair<AMCP::Portal::IPC::shared_buffer_info_t' */ struct  io_buffer_list; /* unknown property attribute:  applesauce::xpc::dict>>>=^v^{__shared_weak_count}} */
@property (nonatomic) struct shared_ptr<caulk::mach::unfair_lock> { struct unfair_lock {} *x1; struct __shared_weak_count {} *x2; } io_receiver_lock;
@property (nonatomic) /* Warning: unhandled struct encoding: '{shared_ptr<std::unordered_map<AMCP::Portal::IPC::io_messenger_id_t' */ struct  io_receivers; /* unknown property attribute:  std::shared_ptr<AMCP::Portal::IPC::IO_Receiver>>>=^v^{__shared_weak_count}} */
@property (nonatomic, retain) NSXPCListener *listener;
@property (nonatomic) struct shared_ptr<Property_Type_Info> { struct Property_Type_Info {} *x1; struct __shared_weak_count {} *x2; } m_property_type_info;
@property (nonatomic, copy) id /* block */ process_boost_reply;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)abort_device_configuration_change:(unsigned int)arg1 action:(unsigned long long)arg2 change:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)add_device_client:(unsigned int)arg1 client_info:(id)arg2 reply:(id /* block */)arg3;
- (struct AudioServerPlugInDriverInterface {}**)asp_interface;
- (id)concurrent_queue;
- (struct shared_ptr<caulk::mach::unfair_lock> { struct unfair_lock {} *x1; struct __shared_weak_count {} *x2; })config_change_info_lock;
- (struct shared_ptr<std::map<unsigned long long, void *>> { void *x1; struct __shared_weak_count {} *x2; })config_change_info_map;
- (int)create_and_start_io_receiver:(unsigned int)arg1 client_id:(unsigned int)arg2 nominal_sample_rate:(double)arg3 io_buffer_frame_size:(unsigned int)arg4 work_group_port:(id)arg5 io_messenger:(id)arg6;
- (void)create_device:(id)arg1 client_info:(id)arg2 reply:(id /* block */)arg3;
- (void)dealloc;
- (void)destroy_device:(unsigned int)arg1 reply:(id /* block */)arg2;
- (int)destroy_io_receiver:(unsigned int)arg1;
- (int)destroy_io_receiver:(unsigned int)arg1 client_id:(unsigned int)arg2;
- (id)driver_host_proxy;
- (id)endpoint;
- (void)get_property_data:(struct Driver_Property_Identity { unsigned int x1; int x2; struct AudioObjectPropertyAddress { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; } x3; })arg1 qualifier:(id)arg2 data_size:(unsigned int)arg3 reply:(id /* block */)arg4;
- (void)get_property_data_size:(struct Driver_Property_Identity { unsigned int x1; int x2; struct AudioObjectPropertyAddress { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; } x3; })arg1 qualifier:(id)arg2 reply:(id /* block */)arg3;
- (int)handle_register_buffer:(struct dict { struct object { id x_1_1_1; } x1; })arg1;
- (int)handle_unregister_buffer:(struct dict { struct object { id x_1_1_1; } x1; })arg1;
- (void)has_property:(struct Driver_Property_Identity { unsigned int x1; int x2; struct AudioObjectPropertyAddress { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; } x3; })arg1 reply:(id /* block */)arg2;
- (struct AudioServerPlugInHostInterface { int (*x1)(); int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); }*)host_interface;
- (id)init;
- (id)init_driver_interface:(struct AudioServerPlugInDriverInterface {}**)arg1;
- (void)initialize:(id)arg1 reply:(id /* block */)arg2;
- (struct shared_ptr<std::vector<std::pair<AMCP::Portal::IPC::shared_buffer_info_t, applesauce::xpc::dict>>> { void *x1; struct __shared_weak_count {} *x2; })io_buffer_list;
- (struct shared_ptr<caulk::mach::unfair_lock> { struct unfair_lock {} *x1; struct __shared_weak_count {} *x2; })io_receiver_lock;
- (struct shared_ptr<std::unordered_map<AMCP::Portal::IPC::io_messenger_id_t, std::shared_ptr<AMCP::Portal::IPC::IO_Receiver>>> { void *x1; struct __shared_weak_count {} *x2; })io_receivers;
- (void)is_property_settable:(struct Driver_Property_Identity { unsigned int x1; int x2; struct AudioObjectPropertyAddress { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; } x3; })arg1 reply:(id /* block */)arg2;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (struct shared_ptr<Property_Type_Info> { struct Property_Type_Info {} *x1; struct __shared_weak_count {} *x2; })m_property_type_info;
- (void)object_was_destroyed:(unsigned int)arg1 reply:(id /* block */)arg2;
- (void)perform_device_configuration_change:(unsigned int)arg1 action:(unsigned long long)arg2 change:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (id /* block */)process_boost_reply;
- (void)register_io_buffer:(id)arg1 reply:(id /* block */)arg2;
- (void)release_unpacked_cf_objects:(unsigned int)arg1 qualifier_data:(id)arg2 data_type:(unsigned int)arg3 data:(id)arg4;
- (void)remove_device_client:(unsigned int)arg1 client_info:(id)arg2 reply:(id /* block */)arg3;
- (void)retain_reply_for_process_boost:(id /* block */)arg1;
- (void)setAsp_interface:(struct AudioServerPlugInDriverInterface {}**)arg1;
- (void)setConcurrent_queue:(id)arg1;
- (void)setConfig_change_info_map:(struct shared_ptr<std::map<unsigned long long, void *>> { void *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setDriver_host_proxy:(id)arg1;
- (void)setEndpoint:(id)arg1;
- (void)setHost_interface:(struct AudioServerPlugInHostInterface { int (*x1)(); int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); }*)arg1;
- (void)setIo_buffer_list:(struct shared_ptr<std::vector<std::pair<AMCP::Portal::IPC::shared_buffer_info_t, applesauce::xpc::dict>>> { void *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setIo_receiver_lock:(struct shared_ptr<caulk::mach::unfair_lock> { struct unfair_lock {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setIo_receivers:(struct shared_ptr<std::unordered_map<AMCP::Portal::IPC::io_messenger_id_t, std::shared_ptr<AMCP::Portal::IPC::IO_Receiver>>> { void *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setListener:(id)arg1;
- (void)setM_property_type_info:(struct shared_ptr<Property_Type_Info> { struct Property_Type_Info {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setProcess_boost_reply:(id /* block */)arg1;
- (void)set_property_data:(struct Driver_Property_Identity { unsigned int x1; int x2; struct AudioObjectPropertyAddress { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; } x3; })arg1 qualifier:(id)arg2 data:(id)arg3 reply:(id /* block */)arg4;
- (void)start_io:(unsigned int)arg1 client_id:(unsigned int)arg2 reply:(id /* block */)arg3;
- (void)start_synchronous_messenger:(unsigned int)arg1 client_id:(unsigned int)arg2 nominal_sample_rate:(double)arg3 io_buffer_frame_size:(unsigned int)arg4 work_group_port:(id)arg5 io_messenger:(id)arg6 reply:(id /* block */)arg7;
- (void)stop_io:(unsigned int)arg1 client_id:(unsigned int)arg2 reply:(id /* block */)arg3;
- (void)stop_synchronous_messenger:(unsigned int)arg1 client_id:(unsigned int)arg2 reply:(id /* block */)arg3;
- (void)store_change_info:(void*)arg1 for_token:(unsigned long long)arg2;
- (struct tuple<NSData *, unsigned int, AMCP::HAL::HAL_Property_Type_Code> { struct __tuple_impl<std::__tuple_indices<0, 1, 2>, NSData *, unsigned int, AMCP::HAL::HAL_Property_Type_Code> { id x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; })unpack_data_from_qualifier:(struct Driver_Property_Identity { unsigned int x1; int x2; struct AudioObjectPropertyAddress { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; } x3; })arg1 qualifier:(id)arg2;
- (struct tuple<NSData *, unsigned int, AMCP::HAL::HAL_Property_Type_Code> { struct __tuple_impl<std::__tuple_indices<0, 1, 2>, NSData *, unsigned int, AMCP::HAL::HAL_Property_Type_Code> { id x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; })unpack_data_from_value:(struct Driver_Property_Identity { unsigned int x1; int x2; struct AudioObjectPropertyAddress { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; } x3; })arg1 value:(id)arg2;
- (void)unregister_io_buffer:(id)arg1 reply:(id /* block */)arg2;

@end
