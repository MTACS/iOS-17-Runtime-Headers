
@interface MCMXPCMessageWithURLBase : MCMXPCMessageBase <MCMParametersWithURL, MCMXPCMessage> {
    NSURL * _url;
}

@property (nonatomic, readonly) unsigned long long command;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned int disposition;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int platform;
@property (nonatomic, readonly) struct container_client { char *x1; unsigned int x2; char *x3; unsigned int x4; unsigned int x5; struct { unsigned int x_6_1_1[8]; } x6; int x7; bool x8; bool x9; bool x10; id x11; }*proxy;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *xpcObject;

- (void).cxx_destruct;
- (id)initWithXPCObject:(id)arg1 context:(id)arg2 error:(unsigned long long*)arg3;
- (id)url;

@end
