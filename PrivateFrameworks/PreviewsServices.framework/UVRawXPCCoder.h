
@interface UVRawXPCCoder : NSObject <AnySecureCoder> {
    NSObject<OS_xpc_object> * _dictionary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *dictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dictionary;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (id)initWithXpcDictionary:(id)arg1;

@end
