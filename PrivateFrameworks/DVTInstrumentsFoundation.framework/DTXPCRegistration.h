
@interface DTXPCRegistration : NSObject {
    id  _client;
    id /* block */  _oneshotHandler;
    id  _pkHandle;
    NSString * _serviceIdentifier;
    NSObject<OS_xpc_object> * _xpcObject;
}

@property (nonatomic, retain) id client;
@property (nonatomic, copy) id /* block */ oneshotHandler;
@property (nonatomic, retain) id pkHandle;
@property (nonatomic, copy) NSString *serviceIdentifier;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcObject;

- (void).cxx_destruct;
- (id)client;
- (id /* block */)oneshotHandler;
- (id)pkHandle;
- (id)serviceIdentifier;
- (void)setClient:(id)arg1;
- (void)setOneshotHandler:(id /* block */)arg1;
- (void)setPkHandle:(id)arg1;
- (void)setServiceIdentifier:(id)arg1;
- (void)setXpcObject:(id)arg1;
- (id)xpcObject;

@end
