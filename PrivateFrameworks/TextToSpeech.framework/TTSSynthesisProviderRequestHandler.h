
@interface TTSSynthesisProviderRequestHandler : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _bufferLock;
    unsigned long long  _bytesPerFrame;
    unsigned int  _currentAudioBufferFrameCount;
    <TTSSynthesisProviderHandlerDelegate> * _delegate;
    bool  _isFinishedReceivingBuffers;
    AVSpeechSynthesisProviderRequest * _managingSpeechRequest;
    NSMutableArray * _queuedMarkers;
}

@property (nonatomic) unsigned long long bytesPerFrame;
@property (nonatomic) unsigned int currentAudioBufferFrameCount;
@property (nonatomic) <TTSSynthesisProviderHandlerDelegate> *delegate;
@property (nonatomic) bool isFinishedReceivingBuffers;
@property (nonatomic, retain) AVSpeechSynthesisProviderRequest *managingSpeechRequest;
@property (nonatomic, retain) NSMutableArray *queuedMarkers;

- (void).cxx_destruct;
- (void)addBuffers:(id)arg1;
- (void)addMarkers:(id)arg1;
- (unsigned long long)bytesPerFrame;
- (void)completedRequestRendering;
- (unsigned int)currentAudioBufferFrameCount;
- (id)delegate;
- (id)dequeueMarkersUpToFrame:(long long)arg1;
- (id)initWithRequest:(id)arg1 bytesPerFrame:(unsigned long long)arg2;
- (bool)isFinishedReceivingBuffers;
- (id)managingSpeechRequest;
- (id)queuedMarkers;
- (void)setBytesPerFrame:(unsigned long long)arg1;
- (void)setCurrentAudioBufferFrameCount:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsFinishedReceivingBuffers:(bool)arg1;
- (void)setManagingSpeechRequest:(id)arg1;
- (void)setQueuedMarkers:(id)arg1;

@end
