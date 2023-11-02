
@interface RTIInputSystemServiceUISession : RTIInputSystemServiceSession {
    BSProcessHandle * _remoteProcess;
}

+ (id)sessionWithConnection:(id)arg1 remoteProcess:(id)arg2;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)initWithConnection:(id)arg1 remoteProcess:(id)arg2;
- (int)pid;
- (id)valueForEntitlement:(id)arg1;

@end
