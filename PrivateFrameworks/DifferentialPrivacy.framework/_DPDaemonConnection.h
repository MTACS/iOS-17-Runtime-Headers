
@interface _DPDaemonConnection : NSObject <_DPDaemonProtocol> {
    NSXPCConnection * _daemonConnection;
}

@property (nonatomic, readonly) NSXPCConnection *daemonConnection;

+ (id)daemonConnection;

- (void).cxx_destruct;
- (id)daemonConnection;
- (void)dealloc;
- (id)init;
- (void)recordBitValues:(id)arg1 forKey:(id)arg2 withReply:(id /* block */)arg3;
- (void)recordBitValues:(id)arg1 metadata:(id)arg2 forKey:(id)arg3 withReply:(id /* block */)arg4;
- (void)recordBitVectors:(id)arg1 forKey:(id)arg2 withReply:(id /* block */)arg3;
- (void)recordBitVectors:(id)arg1 metadata:(id)arg2 forKey:(id)arg3 withReply:(id /* block */)arg4;
- (void)recordFloatVectors:(id)arg1 forKey:(id)arg2 withReply:(id /* block */)arg3;
- (void)recordFloatVectors:(id)arg1 metadata:(id)arg2 forKey:(id)arg3 withReply:(id /* block */)arg4;
- (void)recordNumbers:(id)arg1 forKey:(id)arg2 withReply:(id /* block */)arg3;
- (void)recordNumbers:(id)arg1 metadata:(id)arg2 forKey:(id)arg3 withReply:(id /* block */)arg4;
- (void)recordNumbersVectors:(id)arg1 forKey:(id)arg2 withReply:(id /* block */)arg3;
- (void)recordNumbersVectors:(id)arg1 metadata:(id)arg2 forKey:(id)arg3 withReply:(id /* block */)arg4;
- (void)recordStrings:(id)arg1 forKey:(id)arg2 withReply:(id /* block */)arg3;
- (void)recordStrings:(id)arg1 metadata:(id)arg2 forKey:(id)arg3 withReply:(id /* block */)arg4;
- (void)recordWords:(id)arg1 forKey:(id)arg2 withReply:(id /* block */)arg3;
- (void)reportsNotYetSubmittedWithReply:(id /* block */)arg1;
- (void)retireReports:(id)arg1 withReply:(id /* block */)arg2;

@end
