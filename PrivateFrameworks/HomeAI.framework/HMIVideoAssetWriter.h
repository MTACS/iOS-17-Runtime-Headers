
@interface HMIVideoAssetWriter : HMIVideoProcessingNode <AVAssetWriterDelegate, HMFLogging> {
    bool  _allowRecoveryFromInsufficientAudioTrim;
    AVAssetWriter * _assetWriter;
    id /* block */  _assetWriterDidOutputSeparableSegment;
    struct opaqueCMFormatDescription { } * _audioFormat;
    AVAssetWriterInput * _audioInput;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _currentFragmentStartTime;
    <HMIVideoAssetWriterDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    bool  _dropSamplesUntilSync;
    bool  _dropTrimDurationAttachments;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastAudioPresentationTimeStamp;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastVideoPresentationTimeStamp;
    NSString * _logIdentifier;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _preferredOutputSegmentInterval;
    struct opaqueCMFormatDescription { } * _videoFormat;
    AVAssetWriterInput * _videoInput;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) bool allowRecoveryFromInsufficientAudioTrim;
@property (retain) AVAssetWriter *assetWriter;
@property (copy) id /* block */ assetWriterDidOutputSeparableSegment;
@property (readonly) struct opaqueCMFormatDescription { }*audioFormat;
@property (readonly) AVAssetWriterInput *audioInput;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } currentFragmentStartTime;
@property (readonly, copy) NSString *debugDescription;
@property <HMIVideoAssetWriterDelegate> *delegate;
@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property bool dropSamplesUntilSync;
@property bool dropTrimDurationAttachments;
@property (readonly) unsigned long long hash;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } lastAudioPresentationTimeStamp;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } lastVideoPresentationTimeStamp;
@property (retain) NSString *logIdentifier;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } preferredOutputSegmentInterval;
@property (readonly) Class superclass;
@property (readonly) struct opaqueCMFormatDescription { }*videoFormat;
@property (readonly) AVAssetWriterInput *videoInput;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_appendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_ensureFirstAudioSampleBufferHasSufficientPrimingTrim:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_failWithDescription:(id)arg1;
- (void)_flushAutomatically:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_removeTrimDurationAttachmentsFromAudioSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_startWritingAtStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)allowRecoveryFromInsufficientAudioTrim;
- (id)assetWriter;
- (void)assetWriter:(id)arg1 didOutputSegmentData:(id)arg2 segmentType:(long long)arg3 segmentReport:(id)arg4;
- (id /* block */)assetWriterDidOutputSeparableSegment;
- (struct opaqueCMFormatDescription { }*)audioFormat;
- (id)audioInput;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentFragmentStartTime;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (bool)dropSamplesUntilSync;
- (bool)dropTrimDurationAttachments;
- (void)finishWithCompletionHandler:(id /* block */)arg1;
- (void)flush;
- (void)flushWithCompletionHandler:(id /* block */)arg1;
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)initWithVideoFormat:(struct opaqueCMFormatDescription { }*)arg1 audioFormat:(struct opaqueCMFormatDescription { }*)arg2;
- (id)initWithVideoFormat:(struct opaqueCMFormatDescription { }*)arg1 audioFormat:(struct opaqueCMFormatDescription { }*)arg2 initialFragmentSequenceNumber:(unsigned long long)arg3 preferredOutputSegmentInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lastAudioPresentationTimeStamp;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lastVideoPresentationTimeStamp;
- (id)logIdentifier;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })preferredOutputSegmentInterval;
- (void)setAssetWriter:(id)arg1;
- (void)setAssetWriterDidOutputSeparableSegment:(id /* block */)arg1;
- (void)setCurrentFragmentStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDropSamplesUntilSync:(bool)arg1;
- (void)setDropTrimDurationAttachments:(bool)arg1;
- (void)setLastAudioPresentationTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setLastVideoPresentationTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setLogIdentifier:(id)arg1;
- (void)setPreferredOutputSegmentInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct opaqueCMFormatDescription { }*)videoFormat;
- (id)videoInput;
- (id)workQueue;

@end
