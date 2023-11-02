
@interface UIKeyboardUIClient : NSObject {
    BSServiceConnection<BSServiceConnectionClient> * _connection;
    <UIKeyboardUIServiceProtocol> * _remoteTarget;
}

+ (id)serviceInterface;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_initConnectionIfNeeded;
- (void)dealloc;
- (id)init;
- (void)setKeyboardAlpha:(double)arg1 force:(bool)arg2;
- (id)snapshotViewForOptions:(unsigned long long)arg1;

@end
