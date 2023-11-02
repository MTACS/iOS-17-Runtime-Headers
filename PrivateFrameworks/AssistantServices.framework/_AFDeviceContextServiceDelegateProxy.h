
@interface _AFDeviceContextServiceDelegateProxy : NSObject <AFDeviceContextServiceDelegate> {
    AFDeviceContextConnection * _connection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithConnection:(id)arg1;
- (oneway void)updateLocalDeviceContext:(id)arg1;

@end
