
@interface Core_Audio_Driver_Host : NSObject <Core_Audio_Driver_Host_Protocol, NSXPCListenerDelegate> {
    struct shared_ptr<caulk::mach::unfair_lock> { 
        struct unfair_lock {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _config_change_lock;
    NSXPCConnection * _connection_from_driver;
    NSXPCConnection * _connection_to_driver;
    unsigned long long  _current_config_change_token;
    <Core_Audio_Driver_Host_Callback_Delegate> * _delegate;
    NSXPCListenerEndpoint * _driver_endpoint;
    Protocol * _driver_host_protocol;
    Protocol * _driver_protocol;
    NSXPCListenerEndpoint * _endpoint;
    NSXPCListener * _listener;
    struct shared_ptr<Property_Type_Info> { 
        struct Property_Type_Info {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _m_custom_property_type_cache;
}

@property (nonatomic, readonly) struct shared_ptr<caulk::mach::unfair_lock> { struct unfair_lock {} *x1; struct __shared_weak_count {} *x2; } config_change_lock;
@property (nonatomic, retain) NSXPCConnection *connection_from_driver;
@property (nonatomic, retain) NSXPCConnection *connection_to_driver;
@property (nonatomic) unsigned long long current_config_change_token;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <Core_Audio_Driver_Host_Callback_Delegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSXPCListenerEndpoint *driver_endpoint;
@property (nonatomic, retain) Protocol *driver_host_protocol;
@property (nonatomic, retain) Protocol *driver_protocol;
@property (nonatomic, retain) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCListener *listener;
@property (nonatomic) struct shared_ptr<Property_Type_Info> { struct Property_Type_Info {} *x1; struct __shared_weak_count {} *x2; } m_property_type_info;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)abort_device_configuration_change:(unsigned int)arg1 action:(unsigned long long)arg2 change:(unsigned long long)arg3;
- (int)add_device_client:(unsigned int)arg1 client_info:(const struct AudioServerPlugInClientInfo { unsigned int x1; int x2; unsigned char x3; struct __CFString {} *x4; }*)arg2;
- (struct shared_ptr<caulk::mach::unfair_lock> { struct unfair_lock {} *x1; struct __shared_weak_count {} *x2; })config_change_lock;
- (id)connection_from_driver;
- (id)connection_to_driver;
- (void)copy_storage_settings:(id)arg1 reply:(id /* block */)arg2;
- (int)create_device:(id)arg1 client_info:(const struct AudioServerPlugInClientInfo { unsigned int x1; int x2; unsigned char x3; struct __CFString {} *x4; }*)arg2 out_object_id:(unsigned int*)arg3;
- (unsigned long long)current_config_change_token;
- (id)delegate;
- (void)delete_storage_settings:(id)arg1 reply:(id /* block */)arg2;
- (int)destroy_device:(unsigned int)arg1;
- (id)driver_endpoint;
- (id)driver_host_protocol;
- (id)driver_protocol;
- (id)endpoint;
- (int)get_property_data:(struct Driver_Property_Identity { unsigned int x1; int x2; struct AudioObjectPropertyAddress { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; } x3; })arg1 qualifier_data_size:(unsigned int)arg2 qualifier_data:(const void*)arg3 data_size:(unsigned int)arg4 out_data_size:(unsigned int*)arg5 out_data:(void*)arg6;
- (int)get_property_data_size:(struct Driver_Property_Identity { unsigned int x1; int x2; struct AudioObjectPropertyAddress { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; } x3; })arg1 qualifier_data_size:(unsigned int)arg2 qualifier_data:(const void*)arg3 out_size:(unsigned int*)arg4;
- (int)has_property:(struct Driver_Property_Identity { unsigned int x1; int x2; struct AudioObjectPropertyAddress { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; } x3; })arg1 out_has_property:(char *)arg2;
- (id)init;
- (id)init_with_delegate:(id)arg1;
- (int)initialize_driver:(id)arg1;
- (int)is_property_settable:(struct Driver_Property_Identity { unsigned int x1; int x2; struct AudioObjectPropertyAddress { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; } x3; })arg1 out_settable:(char *)arg2;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (struct shared_ptr<Property_Type_Info> { struct Property_Type_Info {} *x1; struct __shared_weak_count {} *x2; })m_property_type_info;
- (void)object_properties_changed:(unsigned int)arg1 properties_data:(id)arg2 reply:(id /* block */)arg3;
- (int)object_was_destroyed:(unsigned int)arg1;
- (int)perform_device_configuration_change:(unsigned int)arg1 action:(unsigned long long)arg2 change:(unsigned long long)arg3;
- (int)register_buffer:(id)arg1;
- (int)remove_device_client:(unsigned int)arg1 client_info:(const struct AudioServerPlugInClientInfo { unsigned int x1; int x2; unsigned char x3; struct __CFString {} *x4; }*)arg2;
- (void)request_config_change:(unsigned int)arg1 change_action:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)retain_reply_for_process_boost;
- (void)setConnection_from_driver:(id)arg1;
- (void)setConnection_to_driver:(id)arg1;
- (void)setCurrent_config_change_token:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDriver_endpoint:(id)arg1;
- (void)setDriver_host_protocol:(id)arg1;
- (void)setDriver_protocol:(id)arg1;
- (void)setEndpoint:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setM_property_type_info:(struct shared_ptr<Property_Type_Info> { struct Property_Type_Info {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (int)set_property_data:(struct Driver_Property_Identity { unsigned int x1; int x2; struct AudioObjectPropertyAddress { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; } x3; })arg1 qualifier_data_size:(unsigned int)arg2 qualifier_data:(const void*)arg3 data_size:(unsigned int)arg4 data:(const void*)arg5;
- (int)start_io:(unsigned int)arg1 client_info:(unsigned int)arg2;
- (int)start_synchronous_messenger:(unsigned int)arg1 client_id:(unsigned int)arg2 nominal_sample_rate:(double)arg3 io_buffer_frame_size:(unsigned int)arg4 work_group_port:(unsigned int)arg5 io_messenger:(id)arg6;
- (int)stop_io:(unsigned int)arg1 client_info:(unsigned int)arg2;
- (int)stop_synchronous_messenger:(unsigned int)arg1 client_id:(unsigned int)arg2;
- (void)teardown_connection;
- (int)unregister_buffer:(id)arg1;
- (void)write_storage_settings:(id)arg1 storage_data:(id)arg2 reply:(id /* block */)arg3;

@end
