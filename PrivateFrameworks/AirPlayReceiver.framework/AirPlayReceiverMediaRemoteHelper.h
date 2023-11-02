
@interface AirPlayReceiverMediaRemoteHelper : NSObject {
    NSOperationQueue * _dataTransferQueue;
    NSObject<OS_dispatch_queue> * _dataTransferQueueInternal;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    struct AirPlayReceiverServerPrivate { } * _server;
    struct { 
        MRPlayerPath *playerPath; 
        void *commandHandlerToken; 
        struct OpaqueFigCFWeakReferenceHolder {} *weakDelegate; 
    }  _state;
    struct OpaqueAPReceiverSystemInfo { } * _systemInfo;
}

+ (void)becomeNowPlayingApplication;
+ (void)resignAsNowPlayingApplication;
+ (void)setIsNowPlayingApplication:(unsigned char)arg1;

- (void)associateNowPlayingSessionWithAudioSession:(unsigned int)arg1;
- (void)broadcastPauseCommand;
- (void)dealloc;
- (void)handleActiveSessionWillBeHijacked:(id)arg1;
- (void)handleLocalDeviceRoutingContextIDDidChange:(id)arg1;
- (unsigned int)handleMediaRemoteCommand:(unsigned int)arg1 withOptions:(struct __CFDictionary { }*)arg2;
- (void)handlePlaybackStateDidChange:(id)arg1;
- (void)handleSilentPrimaryStateDidChange:(id)arg1;
- (id)initWithPlayerID:(struct __CFString { }*)arg1 withSystemInfo:(struct OpaqueAPReceiverSystemInfo { }*)arg2 withReceiverServer:(struct AirPlayReceiverServerPrivate { }*)arg3;
- (void)makeNowPlayingPlayer;
- (void)registerCommandHandler;
- (void)removeNowPlayingArtwork;
- (void)setAPNowPlayingInfo:(struct __CFDictionary { }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsNowPlaying:(unsigned char)arg1;
- (void)setMRNowPlayingClient:(struct __CFData { }*)arg1;
- (void)setMRNowPlayingInfo:(struct __CFDictionary { }*)arg1 withMergePolicy:(unsigned char)arg2;
- (void)setMRPlaybackState:(unsigned int)arg1;
- (void)setMRSupportedCommands:(struct __CFArray { }*)arg1;
- (void)setMRSupportedCommandsFromSerializedArray:(struct __CFArray { }*)arg1;
- (void)startNowPlayingSession;
- (void)stopNowPlayingSession;
- (void)unregisterCommandHandler;

@end
