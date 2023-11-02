
@interface SecConcrete_sec_array : NSObject <OS_sec_array> {
    NSObject<OS_xpc_object> * xpc_array;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
