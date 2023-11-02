
@interface VCMediaStreamSynchronizer : NSObject <VCMediaStreamSyncSourceDelegate> {
    struct tagVCMediaStreamSyncTime { 
        double ntpTime; 
        long long sampleRate; 
        unsigned int rtpTimestampOfNTP; 
    }  _destination;
    id /* block */  _destinationHandler;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _destinationHandlerLock;
    NSObject<OS_dispatch_queue> * _mediaStreamSynchronizerQueue;
    struct tagVCMediaStreamSyncTime { 
        double ntpTime; 
        long long sampleRate; 
        unsigned int rtpTimestampOfNTP; 
    }  _source;
    id /* block */  _sourcePlayoutHandler;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _sourcePlayoutHandlerLock;
    unsigned int  _sourcePlayoutSampleRTPTimestamp;
    double  _sourcePlayoutSampleSystemTime;
    int  _sourceRTPTimestampWraps;
    int  _sourceState;
    struct tagHANDLE { int x1; } * _videoPlayerHandle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int sourceSampleRate;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithSourceSampleRate:(unsigned int)arg1 destinationSampleRate:(unsigned int)arg2;
- (unsigned int)sourceSampleRate;

@end
