
@interface _TtCC24IntelligencePlatformCore18EventLogServiceXPC6Server : NSObject <GDEventLogServiceXPCProtocol> {
    void bufferedWriter;
    void storage;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)logEndWithId:(long long)arg1 timestamp:(id)arg2 dependencies:(id)arg3 payloadType:(id)arg4 payloadVariant:(id)arg5 payload:(id)arg6 completion:(id /* block */)arg7;
- (void)logInstantWithId:(long long)arg1 timestamp:(id)arg2 name:(id)arg3 parent:(long long)arg4 dependencies:(id)arg5 payloadType:(id)arg6 payloadVariant:(id)arg7 payload:(id)arg8 completion:(id /* block */)arg9;
- (void)logStartWithId:(long long)arg1 timestamp:(id)arg2 name:(id)arg3 parent:(long long)arg4 completion:(id /* block */)arg5;

@end
