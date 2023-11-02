
@interface CPEndpointListenerWrapper : NSObject <BSXPCCoding> {
    NSObject<OS_xpc_object> * _endpoint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_xpc_object> *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)endpoint;
- (id)initWithXPCDictionary:(id)arg1;
- (id)initWithXPCEndpoint:(id)arg1;
- (void)setEndpoint:(id)arg1;

@end
