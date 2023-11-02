
@interface HMIVideoDecoder : HMIVideoProcessingNode <HMFLogging> {
    struct opaqueCMBufferQueue { } * _buffer;
    <HMIVideoDecoderDelegate> * _delegate;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastSampleBufferDTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastSampleBufferPTS;
    NSString * _logIdentifier;
    unsigned long long  _reorderBufferSize;
    struct OpaqueVTDecompressionSession { } * _session;
    HMFWeakObject * _weakDecoder;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property struct opaqueCMBufferQueue { }*buffer;
@property (readonly, copy) NSString *debugDescription;
@property <HMIVideoDecoderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } lastSampleBufferDTS;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } lastSampleBufferPTS;
@property (retain) NSString *logIdentifier;
@property (readonly) unsigned long long reorderBufferSize;
@property struct OpaqueVTDecompressionSession { }*session;
@property (readonly) Class superclass;
@property (readonly) HMFWeakObject *weakDecoder;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (bool)_createSessionWithFormatDescription:(struct opaqueCMFormatDescription { }*)arg1;
- (void)_didDecodeSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_evictSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_failWithDescription:(id)arg1;
- (struct opaqueCMBufferQueue { }*)buffer;
- (void)dealloc;
- (id)delegate;
- (void)flush;
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (bool)handleSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 outputFrame:(bool)arg2;
- (id)init;
- (id)initWithFrameReordering:(bool)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lastSampleBufferDTS;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lastSampleBufferPTS;
- (id)logIdentifier;
- (unsigned long long)reorderBufferSize;
- (struct OpaqueVTDecompressionSession { }*)session;
- (void)setBuffer:(struct opaqueCMBufferQueue { }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastSampleBufferDTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setLastSampleBufferPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setLogIdentifier:(id)arg1;
- (void)setSession:(struct OpaqueVTDecompressionSession { }*)arg1;
- (id)weakDecoder;
- (id)workQueue;

@end
