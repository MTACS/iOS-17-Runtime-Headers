
@interface Core_Audio_Driver_Host_Proxy : NSObject <NSXPCListenerDelegate> {
    NSXPCConnection * _connection_to_host;
    Core_Audio_Driver * _driver;
    struct DictionaryRef { 
        struct ObjectRef<const __CFDictionary *> { 
            struct __CFDictionary {} *mCFObject; 
        } mObject; 
    }  _driver_storage;
    struct shared_ptr<caulk::mach::unfair_lock> { 
        struct unfair_lock {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _driver_storage_lock;
    struct shared_ptr<Host_Interface> { 
        struct Host_Interface {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _host_interface;
}

@property (nonatomic, retain) NSXPCConnection *connection_to_host;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) Core_Audio_Driver *driver;
@property (nonatomic) struct DictionaryRef { struct ObjectRef<const __CFDictionary *> { struct __CFDictionary {} *x_1_1_1; } x1; } driver_storage;
@property (nonatomic, readonly) struct shared_ptr<caulk::mach::unfair_lock> { struct unfair_lock {} *x1; struct __shared_weak_count {} *x2; } driver_storage_lock;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct shared_ptr<Host_Interface> { struct Host_Interface {} *x1; struct __shared_weak_count {} *x2; } host_interface;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)connection_to_host;
- (struct PropertyListRef { struct ObjectRef<const void *> { void *x_1_1_1; } x1; })copy_from_driver_storage:(struct StringRef { struct ObjectRef<const __CFString *> { struct __CFString {} *x_1_1_1; } x1; })arg1;
- (int)delete_from_driver_storage:(struct StringRef { struct ObjectRef<const __CFString *> { struct __CFString {} *x_1_1_1; } x1; })arg1;
- (id)driver;
- (int)driver_properties_changed:(unsigned int)arg1 properties_data:(id)arg2;
- (int)driver_request_config_change:(unsigned int)arg1 change_action:(unsigned long long)arg2 change_info:(void*)arg3;
- (struct DictionaryRef { struct ObjectRef<const __CFDictionary *> { struct __CFDictionary {} *x_1_1_1; } x1; })driver_storage;
- (struct shared_ptr<caulk::mach::unfair_lock> { struct unfair_lock {} *x1; struct __shared_weak_count {} *x2; })driver_storage_lock;
- (struct AudioServerPlugInHostInterface { int (*x1)(); int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); }*)get_host_interface;
- (struct shared_ptr<Host_Interface> { struct Host_Interface {} *x1; struct __shared_weak_count {} *x2; })host_interface;
- (id)init;
- (id)init_with_host_endpoint:(id)arg1 driver:(id)arg2;
- (void)setConnection_to_host:(id)arg1;
- (void)setDriver:(id)arg1;
- (void)setDriver_storage:(struct DictionaryRef { struct ObjectRef<const __CFDictionary *> { struct __CFDictionary {} *x_1_1_1; } x1; })arg1;
- (int)write_to_driver_storage:(struct StringRef { struct ObjectRef<const __CFString *> { struct __CFString {} *x_1_1_1; } x1; })arg1 property_list:(struct PropertyListRef { struct ObjectRef<const void *> { void *x_1_1_1; } x1; })arg2;

@end
