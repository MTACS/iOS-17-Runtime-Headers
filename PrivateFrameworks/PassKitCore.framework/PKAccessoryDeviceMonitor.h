
@interface PKAccessoryDeviceMonitor : NSObject <ACCConnectionInfoDelegateProtocol> {
    NSMutableSet * _accessoryAttached;
    ACCConnectionInfo * _accessoryConnectionInfo;
    NSString * _accessoryConnectionUUID;
    NSMutableDictionary * _attachmentDictionary;
    <PKAccessoryDeviceMonitorDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)accessoryAttachedForEndpointUUID:(id)arg1;
- (void)accessoryConnectionAttached:(id)arg1 type:(int)arg2 info:(id)arg3 properties:(id)arg4;
- (void)accessoryConnectionDetached:(id)arg1;
- (void)accessoryEndpointAttached:(id)arg1 transportType:(int)arg2 protocol:(int)arg3 properties:(id)arg4 forConnection:(id)arg5;
- (void)accessoryEndpointDetached:(id)arg1 forConnection:(id)arg2;
- (id)initWithDelegate:(id)arg1;

@end
