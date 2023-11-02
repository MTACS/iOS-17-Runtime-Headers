
@interface MCMXPCMessageBase : NSObject <MCMXPCMessage> {
    unsigned long long  _command;
    <MCMCommandContext> * _context;
    unsigned int  _platform;
    struct container_client { char *x1; unsigned int x2; char *x3; unsigned int x4; unsigned int x5; struct { unsigned int x_6_1_1[8]; } x6; int x7; bool x8; bool x9; bool x10; id x11; } * _proxy;
    NSObject<OS_xpc_object> * _xpcObject;
}

@property (nonatomic, readonly) unsigned long long command;
@property (nonatomic, readonly) <MCMCommandContext> *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned int disposition;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int platform;
@property (nonatomic, readonly) struct container_client { char *x1; unsigned int x2; char *x3; unsigned int x4; unsigned int x5; struct { unsigned int x_6_1_1[8]; } x6; int x7; bool x8; bool x9; bool x10; id x11; }*proxy;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *xpcObject;

+ (id)userIdentityForContainerIdentifier:(id)arg1 clientIdentity:(id)arg2 containerClass:(unsigned long long)arg3 error:(unsigned long long*)arg4;
+ (id)xpcMessageFromXPCObject:(id)arg1 context:(id)arg2 error:(unsigned long long*)arg3;

- (void).cxx_destruct;
- (unsigned long long)command;
- (id)context;
- (void)dealloc;
- (unsigned int)disposition;
- (id)identifierFromXPCObject:(id)arg1 elseClientIdentifier:(id)arg2;
- (id)initWithContext:(id)arg1;
- (id)initWithXPCObject:(id)arg1 context:(id)arg2 error:(unsigned long long*)arg3;
- (id)nsObjectFromXPCObject:(id)arg1 key:(const char *)arg2 error:(unsigned long long*)arg3;
- (id)nsStringValueFromXPCObject:(id)arg1 key:(const char *)arg2;
- (id)nsUUIDValueFromXPCObject:(id)arg1 key:(const char *)arg2;
- (unsigned int)platform;
- (struct container_client { char *x1; unsigned int x2; char *x3; unsigned int x4; unsigned int x5; struct { unsigned int x_6_1_1[8]; } x6; int x7; bool x8; bool x9; bool x10; id x11; }*)proxy;
- (id)userIdentityFromClientPersonaUniqueString:(id)arg1 clientIdentity:(id)arg2 error:(unsigned long long*)arg3;
- (id)xpcObject;

@end
