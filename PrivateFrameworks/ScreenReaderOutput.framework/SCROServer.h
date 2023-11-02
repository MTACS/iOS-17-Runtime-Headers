
@interface SCROServer : NSObject {
    long long  _clientCount;
    NSLock * _contentLock;
    unsigned int  _deathPort;
    struct __CFRunLoopSource { } * _deathSource;
    struct __CFRunLoopTimer { } * _deathTimer;
    <SCROServerDelegate> * _delegate;
    bool  _isRegisteredWithMach;
    unsigned int  _serverPort;
    struct __CFRunLoopSource { } * _serverSource;
}

+ (id)sharedServer;

- (void).cxx_destruct;
- (long long)_clientCount;
- (struct __CFRunLoopTimer { }*)_deathTimer;
- (void)_deleteOldResources;
- (bool)_ensureResourcesExist;
- (long long)_incrementClientCount;
- (int)_registerForNotificationOnDeathPort:(unsigned int)arg1;
- (bool)_registerWithMachServiceName:(char *)arg1;
- (void)_setClientCount:(long long)arg1;
- (id)delegate;
- (id)init;
- (bool)isRegisteredWithMach;
- (bool)registerWithMach;
- (struct __CFRunLoopSource { }*)serverSource;
- (void)setDelegate:(id)arg1;
- (void)unregisterWithMach;

@end
