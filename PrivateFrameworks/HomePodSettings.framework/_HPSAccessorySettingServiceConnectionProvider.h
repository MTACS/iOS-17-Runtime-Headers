
@interface _HPSAccessorySettingServiceConnectionProvider : NSObject <HPSAccessorySettingServiceConnectionProvider> {
    NSXPCConnection * _accessorySettingServiceConnection;
}

@property (nonatomic, readonly) NSXPCConnection *accessorySettingServiceConnection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accessorySettingServiceConnection;

@end
