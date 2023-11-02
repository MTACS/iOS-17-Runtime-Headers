
@interface VCMediaStreamManager : NSObject <VCMediaStreamDelegate> {
    NSMutableDictionary * _vcMomentsCollectorDictionary;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  stateLock;
    NSMutableArray * streamArray;
    NSObject<OS_dispatch_queue> * xpcQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)addNSError:(id)arg1 toXPCArgumentDictionary:(id)arg2;
+ (id)defaultManager;

- (bool)addSyncSourceToVideoStreamConfig:(id)arg1 sourceStreamToken:(long long)arg2 error:(id*)arg3;
- (id)allocWithZone:(struct _NSZone { }*)arg1;
- (id)autorelease;
- (void)cleanupStreamSyncSourceForVideoStream:(id)arg1 andAudioStream:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)deregisterBlocksForService;
- (id)init;
- (void)pauseStreams:(bool)arg1;
- (void)registerBlocksForService;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (void)stopStream:(id)arg1;
- (id)textStreamWithStreamToken:(long long)arg1;
- (void)vcMediaStream:(id)arg1 didReceiveDTMFEventWithDigit:(BOOL)arg2;
- (void)vcMediaStream:(id)arg1 didReceiveRTCPPackets:(id)arg2;
- (void)vcMediaStream:(id)arg1 didReceiveTTYCharacter:(unsigned short)arg2;
- (void)vcMediaStream:(id)arg1 didReceiveText:(id)arg2;
- (void)vcMediaStream:(id)arg1 didUpdateVideoConfiguration:(bool)arg2 error:(id)arg3 dictionary:(id)arg4;
- (void)vcMediaStream:(id)arg1 downlinkQualityDidChange:(id)arg2;
- (void)vcMediaStream:(id)arg1 uplinkQualityDidChange:(id)arg2;
- (void)vcMediaStreamDidInterruptionBegin:(id)arg1;
- (void)vcMediaStreamDidInterruptionEnd:(id)arg1;
- (void)vcMediaStreamDidRTCPTimeOut:(id)arg1;
- (void)vcMediaStreamDidRTPTimeOut:(id)arg1;
- (void)vcMediaStreamDidRecoverFromRTCPTimeOut:(id)arg1;
- (void)vcMediaStreamServerDidDie:(id)arg1;
- (id)videoStreamWithSyncToken:(long long)arg1;

@end
