
@protocol Core_Audio_Driver_Host_Protocol

@required

- (void)copy_storage_settings:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSData *, void*
- (void)delete_storage_settings:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)object_properties_changed:(void *)arg1 properties_data:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: unsigned int, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)request_config_change:(void *)arg1 change_action:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: unsigned int, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, unsigned long long, void*
- (void)write_storage_settings:(void *)arg1 storage_data:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*

@end
