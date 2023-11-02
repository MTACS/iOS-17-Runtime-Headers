
@protocol Core_Audio_Driver_Host_Callback_Delegate <NSObject>

@required

- (struct pair<int, const void *> { int x1; void *x2; })copy_storage_settings:(struct __CFString { }*)arg1;
- (int)delete_storage_settings:(struct __CFString { }*)arg1;
- (void)object_properties_changed:(unsigned int)arg1 data:(NSData *)arg2;
- (void)request_config_change:(unsigned int)arg1 change_action:(unsigned long long)arg2 change_token:(unsigned long long)arg3;
- (int)write_storage_settings:(struct __CFString { }*)arg1 storage_data:(void*)arg2;

@end
