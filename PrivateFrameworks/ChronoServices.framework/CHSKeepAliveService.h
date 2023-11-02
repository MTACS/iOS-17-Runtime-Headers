
@interface CHSKeepAliveService : NSObject {
    CHSChronoServicesConnection * _connection;
}

- (void).cxx_destruct;
- (id)acquireKeepAliveAssertionForExtensionBundleIdentifier:(id)arg1 reason:(id)arg2 error:(out id*)arg3;
- (id)init;
- (id)initWithConnection:(id)arg1;

@end
