
@interface DACRoleManager : NSObject <DACRoleClientInterface> {
    bool  _connected;
    NSXPCConnection * _currentConnection;
    <DACRoleManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSObject<OS_dispatch_source> * _fallbackTimer;
    NSDate * _lastLeaderAt;
    NSObject<OS_dispatch_queue> * _queue;
    int  _resetNotifyToken;
    DACDeviceRole * _role;
    bool  _shouldAttemptReconnect;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 lastLeaderAt:(id)arg2 queue:(id)arg3;
- (void)requestSpeakerGroupLeaderRole;
- (void)roleChanged:(id)arg1;

@end
