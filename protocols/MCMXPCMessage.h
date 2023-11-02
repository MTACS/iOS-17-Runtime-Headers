
@protocol MCMXPCMessage <NSObject>

@required

+ (<MCMXPCMessage> *)xpcMessageFromXPCObject:(NSObject<OS_xpc_object> *)arg1 context:(id <MCMCommandContext>)arg2 error:(unsigned long long*)arg3;

- (unsigned long long)command;
- (unsigned int)disposition;
- (unsigned int)platform;
- (struct container_client { char *x1; unsigned int x2; char *x3; unsigned int x4; unsigned int x5; struct { unsigned int x_6_1_1[8]; } x6; int x7; bool x8; bool x9; bool x10; id x11; }*)proxy;
- (NSObject<OS_xpc_object> *)xpcObject;

@end
