
@interface OSAServicesClient : NSObject {
    NSXPCConnection * _connection;
    <OTAAgentServices> * _synchRemoteObjectProxy;
}

+ (id)sharedClient;

- (void).cxx_destruct;
- (id)awdKey;
- (id)crashreporterKey;
- (void)dealloc;
- (bool)deletePreference:(id)arg1 forUser:(id)arg2 inDomain:(id)arg3;
- (id)init;
- (id)queryKey:(struct __CFString { }*)arg1;
- (bool)setPreference:(id)arg1 forUser:(id)arg2 inDomain:(id)arg3 toValue:(void*)arg4;
- (unsigned int)uidForUser:(id)arg1;

@end
