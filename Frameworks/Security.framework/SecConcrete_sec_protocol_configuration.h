
@interface SecConcrete_sec_protocol_configuration : NSObject <OS_sec_protocol_configuration> {
    NSObject<OS_xpc_object> * dictionary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;

@end
