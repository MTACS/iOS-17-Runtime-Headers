
@interface AVCVideoDataOutput : NSObject <AVCStreamOutputDelegate> {
    AVConferenceXPCClient * _connection;
    id  _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSObject<OS_dispatch_queue> * _internalReceiverQueue;
    bool  _isMediaStalled;
    bool  _isValid;
    bool  _isVideoDegraded;
    bool  _isVideoPaused;
    bool  _isVideoSuspended;
    AVCStreamOutput * _streamOutput;
    long long  _streamToken;
    struct { 
        VideoAttributes *videoAttributes; 
    }  _videoAttributes;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVCVideoDataOutputDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalReceiverQueue;
@property (nonatomic) bool isMediaStalled;
@property (nonatomic) bool isValid;
@property (nonatomic) bool isVideoDegraded;
@property (nonatomic) bool isVideoPaused;
@property (nonatomic) bool isVideoSuspended;
@property (nonatomic, readonly) long long streamToken;
@property (readonly) Class superclass;
@property (nonatomic) struct { id x1; } videoAttributes;

- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)initWithStreamToken:(long long)arg1 delegate:(id)arg2 queue:(id)arg3 error:(id*)arg4;
- (id)internalReceiverQueue;
- (bool)isMediaStalled;
- (bool)isValid;
- (bool)isVideoDegraded;
- (bool)isVideoPaused;
- (bool)isVideoSuspended;
- (bool)parseVideoAttributes:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setInternalReceiverQueue:(id)arg1;
- (void)setIsMediaStalled:(bool)arg1;
- (void)setIsValid:(bool)arg1;
- (void)setIsVideoDegraded:(bool)arg1;
- (void)setIsVideoPaused:(bool)arg1;
- (void)setIsVideoSuspended:(bool)arg1;
- (void)setVideoAttributes:(struct { id x1; })arg1;
- (void)streamOutput:(id)arg1 didDegrade:(bool)arg2;
- (void)streamOutput:(id)arg1 didPause:(bool)arg2;
- (void)streamOutput:(id)arg1 didReceiveSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)streamOutput:(id)arg1 didStall:(bool)arg2;
- (void)streamOutput:(id)arg1 didSuspend:(bool)arg2;
- (void)streamOutputDidBecomeInvalid:(id)arg1;
- (void)streamOutputServerDidDie:(id)arg1;
- (long long)streamToken;
- (struct { id x1; })videoAttributes;

@end
