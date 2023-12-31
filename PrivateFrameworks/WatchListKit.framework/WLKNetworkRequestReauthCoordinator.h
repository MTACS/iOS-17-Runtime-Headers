
@interface WLKNetworkRequestReauthCoordinator : NSObject <NSLocking> {
    NSLock * _lock;
    bool  _sessionPrompt;
}

@property bool sessionPrompt;

+ (id)coordinator;

- (void).cxx_destruct;
- (id)_init;
- (void)dealloc;
- (bool)didPrompt;
- (void)lock;
- (void)markPrompt;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)sessionPrompt;
- (void)setSessionPrompt:(bool)arg1;
- (void)unlock;

@end
