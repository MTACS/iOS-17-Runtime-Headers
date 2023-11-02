
@interface AXLTAudioOutManager : NSObject <AXLTTranscriberProtocol> {
    AVSystemController * _avSystemController;
    NSObject<OS_dispatch_queue> * _bufferQueue;
    <AXLTTranscriberDelegateProtocol> * _delegate;
    bool  _isTranscribing;
    NSMapTable * _processToTranscriberMap;
    bool  _subscribed;
}

@property (nonatomic, retain) AVSystemController *avSystemController;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *bufferQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AXLTTranscriberDelegateProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isTranscribing;
@property (readonly) NSMapTable *processToTranscriberMap;
@property bool subscribed;
@property (readonly) Class superclass;

+ (bool)isExcludedAppID:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_avSessionMediaServicesResetNotification:(id)arg1;
- (void)_cleanupAllPids;
- (void)_cleanupForPID:(int)arg1;
- (bool)_pidSupportsCoreMediaNotifications:(int)arg1;
- (id)_reportErrorWithCode:(long long)arg1 debugErrorString:(id)arg2 cleanupForPID:(int)arg3;
- (void)_setupAVSystemNotificationSystem;
- (void)_someSessionIsPlayingDidChangeNotification:(id)arg1;
- (bool)_startTranscriptionForPID:(int)arg1 appID:(id)arg2 appName:(id)arg3 error:(id*)arg4;
- (bool)_startTranscriptionForPID:(int)arg1 appID:(id)arg2 appName:(id)arg3 excludingPIDs:(id)arg4 error:(id*)arg5;
- (bool)_startTranscriptionForPID:(int)arg1 appName:(id)arg2 error:(id*)arg3;
- (bool)_startTranscriptionForPID:(int)arg1 appName:(id)arg2 excludingPIDs:(id)arg3 error:(id*)arg4;
- (bool)_startTranscriptionForPID:(int)arg1 error:(id*)arg2;
- (bool)_stopTranscriptionForPID:(int)arg1 error:(id*)arg2;
- (id)_tapDescriptionForPID:(int)arg1 tapFormat:(id)arg2 excludePIDs:(id)arg3;
- (id)appInfoFromPid:(int)arg1;
- (id)avSystemController;
- (id)bufferQueue;
- (void)dealloc;
- (id)delegate;
- (void)handleInputBufferWithContext:(void*)arg1 audioQueue:(struct OpaqueAudioQueue { }*)arg2 audioBuffer:(struct AudioQueueBuffer { unsigned int x1; void *x2; unsigned int x3; void *x4; unsigned int x5; struct AudioStreamPacketDescription {} *x6; unsigned int x7; }*)arg3 timestamp:(const struct AudioTimeStamp { double x1; unsigned long long x2; double x3; unsigned long long x4; struct SMPTETime { short x_5_1_1; short x_5_1_2; unsigned int x_5_1_3; unsigned int x_5_1_4; unsigned int x_5_1_5; short x_5_1_6; short x_5_1_7; short x_5_1_8; short x_5_1_9; } x5; unsigned int x6; unsigned int x7; }*)arg4 packetCount:(unsigned int)arg5 packetDesc:(const struct AudioStreamPacketDescription { long long x1; unsigned int x2; unsigned int x3; }*)arg6;
- (id)init;
- (bool)isTranscribing;
- (bool)isTranscribingForPID:(int)arg1;
- (id)processToTranscriberMap;
- (void)registerFirstTimeForAVSystemControllerNotifications;
- (void)registerForAVSystemContollerNotifications;
- (void)resetTranscription;
- (void)setAvSystemController:(id)arg1;
- (void)setBufferQueue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsTranscribing:(bool)arg1;
- (void)setSubscribed:(bool)arg1;
- (bool)startTranscription:(id*)arg1;
- (bool)stopTranscription:(id*)arg1;
- (bool)subscribed;
- (void)unregisterForAVSystemContollerNotifications;
- (void)updateAudioSessionsInfoFromSessionsArray:(id)arg1;

@end
