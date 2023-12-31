
@interface AVCVirtualTTYDevice : NSObject {
    AVConferenceXPCClient * _connection;
    id  _delegate;
    bool  _isStarted;
}

@property (nonatomic) <AVCVirtualTTYDeviceDelegate> *delegate;

- (void)dealloc;
- (id)delegate;
- (void)deregisterBlocksForDelegateNotifications;
- (id)initWithMode:(long long)arg1 error:(id*)arg2;
- (id)initWithMode:(long long)arg1 error:(id*)arg2 streamToken:(long long)arg3;
- (id)initWithStreamToken:(long long)arg1 error:(id*)arg2;
- (void)registerBlocksForDelegateNotifications;
- (id)sendCharacter:(unsigned short)arg1;
- (bool)sendText:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)start;
- (void)stop;
- (void)terminateSession;

@end
