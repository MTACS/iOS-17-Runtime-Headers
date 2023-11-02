
@interface VCAudioClientManager : NSObject {
    NSMutableDictionary * _clientList;
    NSObject<OS_dispatch_queue> * _xpcCommandQueue;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)getAudioClientWithProcessId:(id)arg1 create:(bool)arg2;
- (id)handleDisconnectWithXPCArguments:(id)arg1;
- (void)handleMutedTalkerNotification:(unsigned int)arg1;
- (id)handleNewClientWithXPCArguments:(id)arg1 error:(id*)arg2;
- (id)handleRegisterMutedTalkerNotificationForAudioClient:(id)arg1 error:(id*)arg2;
- (id)handleUnregisterMutedTalkerNotificationForAudioClient:(id)arg1 error:(id*)arg2;
- (id)init;
- (void)registerBlocksForService;
- (void)registerForMutedTalkerNotfications;
- (void)secureMicrophoneEngagedNotification;
- (void)unregisterBlocksForService;
- (void)unregisterFromMutedTalkerNotfications;

@end
