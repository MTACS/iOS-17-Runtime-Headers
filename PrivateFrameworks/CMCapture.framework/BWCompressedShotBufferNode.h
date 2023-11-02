
@interface BWCompressedShotBufferNode : BWNode <BWCompressedShotBuffer> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _bufferTrackingLock;
    long long  _compressedByteCapacity;
    bool  _compressedSurfacePoolEnabled;
    struct { 
        int width; 
        int height; 
    }  _compressionInputDimensions;
    NSDictionary * _compressionOptions;
    struct CMPhotoCompressionSession { } * _compressionSession;
    int  _compressionTiles;
    struct opaqueCMFormatDescription { } * _decompressionFormatDescription;
    BWPixelBufferPool * _decompressionPool;
    int  _decompressionPoolCapacity;
    NSObject<OS_dispatch_queue> * _decompressionQueue;
    BWPhotoDecompressor * _decompressor;
    int  _inUseCompressedBufferCount;
    long long  _inUseCompressedBytes;
    int  _inUseUncompressedBufferCount;
    NSMutableArray * _queuedCompressedSampleBuffers;
    BWNodeInput * _sensorRawInput;
    BWNodeOutput * _sensorRawOutput;
    int  _uncompressedEquivalentCapacity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BWNodeInput *sensorRawInput;
@property (nonatomic, readonly) BWNodeOutput *sensorRawOutput;
@property (readonly) Class superclass;
@property (nonatomic) int uncompressedEquivalentCapacity;

+ (void)initialize;

- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)flushAndWaitForUncompressedEquivalentFreeBufferCount:(int)arg1;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (void)handleStillImagePrewarmWithSettings:(id)arg1 forInput:(id)arg2;
- (id)initWithNodeConfiguration:(id)arg1;
- (id)nodeSubType;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id)sensorRawInput;
- (id)sensorRawOutput;
- (void)setUncompressedEquivalentCapacity:(int)arg1;
- (int)uncompressedEquivalentCapacity;

@end
