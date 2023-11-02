
@interface IOKConnection : NSObject {
    unsigned int  _connection;
}

@property (nonatomic, readonly) unsigned int connection;
@property (nonatomic, readonly, copy) IOKService *service;

- (bool)callAsyncMethodWithSelector:(unsigned int)arg1 wakePort:(unsigned int)arg2 reference:(unsigned long long*)arg3 referenceCount:(unsigned int)arg4 scalarInputs:(const unsigned long long*)arg5 scalarInputCount:(unsigned int)arg6 scalarOutputs:(unsigned long long*)arg7 scalarOutputCount:(unsigned int*)arg8 error:(id*)arg9;
- (bool)callAsyncMethodWithSelector:(unsigned int)arg1 wakePort:(unsigned int)arg2 reference:(unsigned long long*)arg3 referenceCount:(unsigned int)arg4 scalarInputs:(const unsigned long long*)arg5 scalarInputCount:(unsigned int)arg6 structInput:(const void*)arg7 structInputSize:(unsigned long long)arg8 scalarOutputs:(unsigned long long*)arg9 scalarOutputCount:(unsigned int*)arg10 structOutput:(void*)arg11 structOutputSize:(unsigned long long*)arg12 error:(id*)arg13;
- (bool)callAsyncMethodWithSelector:(unsigned int)arg1 wakePort:(unsigned int)arg2 reference:(unsigned long long*)arg3 referenceCount:(unsigned int)arg4 structInput:(const void*)arg5 structInputSize:(unsigned long long)arg6 structOutput:(void*)arg7 structOutputSize:(unsigned long long*)arg8 error:(id*)arg9;
- (bool)callMethodWithSelector:(unsigned int)arg1 scalarInputs:(const unsigned long long*)arg2 scalarInputCount:(unsigned int)arg3 scalarOutputs:(unsigned long long*)arg4 scalarOutputCount:(unsigned int*)arg5 error:(id*)arg6;
- (bool)callMethodWithSelector:(unsigned int)arg1 scalarInputs:(const unsigned long long*)arg2 scalarInputCount:(unsigned int)arg3 structInput:(const void*)arg4 structInputSize:(unsigned long long)arg5 scalarOutputs:(unsigned long long*)arg6 scalarOutputCount:(unsigned int*)arg7 structOutput:(void*)arg8 structOutputSize:(unsigned long long*)arg9 error:(id*)arg10;
- (bool)callMethodWithSelector:(unsigned int)arg1 structInput:(const void*)arg2 structInputSize:(unsigned long long)arg3 structOutput:(void*)arg4 structOutputSize:(unsigned long long*)arg5 error:(id*)arg6;
- (unsigned int)connection;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (id)initWithService:(id)arg1;
- (id)initWithService:(id)arg1 andType:(unsigned int)arg2;
- (bool)isEqual:(id)arg1;
- (bool)mapMemory64OfType:(unsigned int)arg1 withOptions:(unsigned int)arg2 atAddress:(unsigned long long*)arg3 ofSize:(unsigned long long*)arg4 error:(id*)arg5;
- (id)service;
- (bool)setNotificationPort:(id)arg1 ofType:(unsigned int)arg2 withReference:(unsigned long long)arg3 error:(id*)arg4;
- (bool)setProperties:(id)arg1 error:(id*)arg2;
- (bool)setProperty:(id)arg1 withKey:(id)arg2 error:(id*)arg3;
- (bool)trap:(unsigned int)arg1 error:(id*)arg2;
- (bool)trap:(unsigned int)arg1 p1:(unsigned long long)arg2 error:(id*)arg3;
- (bool)trap:(unsigned int)arg1 p1:(unsigned long long)arg2 p2:(unsigned long long)arg3 error:(id*)arg4;
- (bool)trap:(unsigned int)arg1 p1:(unsigned long long)arg2 p2:(unsigned long long)arg3 p3:(unsigned long long)arg4 error:(id*)arg5;
- (bool)trap:(unsigned int)arg1 p1:(unsigned long long)arg2 p2:(unsigned long long)arg3 p3:(unsigned long long)arg4 p4:(unsigned long long)arg5 error:(id*)arg6;
- (bool)trap:(unsigned int)arg1 p1:(unsigned long long)arg2 p2:(unsigned long long)arg3 p3:(unsigned long long)arg4 p4:(unsigned long long)arg5 p5:(unsigned long long)arg6 error:(id*)arg7;
- (bool)trap:(unsigned int)arg1 p1:(unsigned long long)arg2 p2:(unsigned long long)arg3 p3:(unsigned long long)arg4 p4:(unsigned long long)arg5 p5:(unsigned long long)arg6 p6:(unsigned long long)arg7 error:(id*)arg8;
- (bool)unmapMemory64OfType:(unsigned int)arg1 atAddress:(unsigned long long)arg2 error:(id*)arg3;

@end
