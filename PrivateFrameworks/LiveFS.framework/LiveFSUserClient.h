
@interface LiveFSUserClient : NSObject {
    unsigned int  ourPort;
}

+ (id)defaultClient;

- (int)callStructMethod:(unsigned int)arg1 inStruct:(const void*)arg2 inSize:(unsigned long long)arg3 outStruct:(void*)arg4 outStructSize:(unsigned long long*)arg5;
- (int)checkUserClientPort;
- (void)dealloc;
- (unsigned int)getConnPort;
- (int)getUserClientPort;
- (int)getUserClientPortForService:(const char *)arg1;
- (id)init;
- (int)setMainMachPort:(unsigned int)arg1 forDomain:(id)arg2;

@end
