
@interface OTATaskingAgentClient : NSObject {
    NSXPCConnection * _connection;
    <OTATaskingAgent> * _synchRemoteObjectProxy;
}

+ (id)sharedClient;

- (void).cxx_destruct;
- (id)awdKey;
- (id)crashreporterKey;
- (bool)deletePreference:(id)arg1 forUser:(id)arg2 inDomain:(id)arg3;
- (id)init;
- (bool)setPreference:(id)arg1 forUser:(id)arg2 inDomain:(id)arg3 toValue:(void*)arg4;
- (unsigned int)uidForUser:(id)arg1;

@end
