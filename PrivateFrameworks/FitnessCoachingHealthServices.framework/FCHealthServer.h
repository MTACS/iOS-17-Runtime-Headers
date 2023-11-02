
@interface FCHealthServer : HDStandardTaskServer {
    HDDaemonTransaction * _daemonTransaction;
    <FCHealthProfileExtending> * _profileExtension;
    NSUUID * _taskUUID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _unfairLock;
}

+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (void)handleRegisterGoalProgressConfigurationData:(id)arg1 service:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (void)pluginMessage:(unsigned long long)arg1 data:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)remoteInterface;

@end
