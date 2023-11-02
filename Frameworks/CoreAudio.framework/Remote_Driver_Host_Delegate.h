
@interface Remote_Driver_Host_Delegate : NSObject <Core_Audio_Driver_Host_Callback_Delegate> {
    void * _remote_plugin;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) void*remote_plugin;
@property (readonly) Class superclass;

- (struct pair<int, const void *> { int x1; void *x2; })copy_storage_settings:(struct __CFString { }*)arg1;
- (int)delete_storage_settings:(struct __CFString { }*)arg1;
- (id)init_with_remote_plugin:(void*)arg1;
- (void)object_properties_changed:(unsigned int)arg1 data:(id)arg2;
- (void*)remote_plugin;
- (void)request_config_change:(unsigned int)arg1 change_action:(unsigned long long)arg2 change_token:(unsigned long long)arg3;
- (void)setRemote_plugin:(void*)arg1;
- (int)write_storage_settings:(struct __CFString { }*)arg1 storage_data:(void*)arg2;

@end
