
@interface SSXPCData : NSData {
    NSObject<OS_xpc_object> * _xpcData;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *xpcData;

- (const void*)bytes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithXPCData:(id)arg1;
- (unsigned long long)length;
- (id)xpcData;

@end
