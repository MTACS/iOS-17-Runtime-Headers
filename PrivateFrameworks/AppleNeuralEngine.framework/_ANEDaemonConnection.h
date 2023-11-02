
@interface _ANEDaemonConnection : NSObject <_ANEDaemonProtocol> {
    NSXPCConnection * _daemonConnection;
    bool  _restricted;
}

@property (nonatomic, readonly) NSXPCConnection *daemonConnection;
@property (nonatomic, readonly) bool restricted;

+ (id)daemonConnection;
+ (id)daemonConnectionRestricted;
+ (id)userDaemonConnection;

- (void).cxx_destruct;
- (void)beginRealTimeTaskWithReply:(id /* block */)arg1;
- (void)compileModel:(id)arg1 sandboxExtension:(id)arg2 options:(id)arg3 qos:(unsigned int)arg4 withReply:(id /* block */)arg5;
- (void)compiledModelExistsFor:(id)arg1 withReply:(id /* block */)arg2;
- (void)compiledModelExistsMatchingHash:(id)arg1 withReply:(id /* block */)arg2;
- (id)daemonConnection;
- (void)dealloc;
- (void)echo:(id)arg1 withReply:(id /* block */)arg2;
- (void)endRealTimeTaskWithReply:(id /* block */)arg1;
- (id)init;
- (id)initWithMachServiceName:(id)arg1 restricted:(bool)arg2;
- (void)loadModel:(id)arg1 sandboxExtension:(id)arg2 options:(id)arg3 qos:(unsigned int)arg4 withReply:(id /* block */)arg5;
- (void)prepareChainingWithModel:(id)arg1 options:(id)arg2 chainingReq:(id)arg3 qos:(unsigned int)arg4 withReply:(id /* block */)arg5;
- (void)purgeCompiledModel:(id)arg1 withReply:(id /* block */)arg2;
- (void)purgeCompiledModelMatchingHash:(id)arg1 withReply:(id /* block */)arg2;
- (bool)restricted;
- (void)unloadModel:(id)arg1 options:(id)arg2 qos:(unsigned int)arg3 withReply:(id /* block */)arg4;

@end
