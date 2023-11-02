
@interface BWPhotoDecompressorNode : BWNode {
    NSMutableSet * _disabledSynchronizedSlaveSemaphores;
    bool  _downstreamIsSharingOutputPool;
    NSMutableArray * _emitSampleBufferSemaphores;
    NSMutableArray * _emitSynchronizedSlaveSampleBufferSemaphores;
    int  _numberOfBuffersEmitted;
    int  _numberOfSynchronizedSlaveBuffersEmitted;
    int  _numberOfTimesSynchronizedSlaveWaited;
    int  _numberOfTimesWaited;
    BWPhotoDecompressor * _photoDecompressor;
    bool  _synchronizedSlaveAttachedMediaDecompressionEnabled;
    BWPhotoDecompressor * _synchronizedSlavePhotoDecompressor;
}

+ (void)initialize;

- (void)addEmitSampleBufferSemaphore:(id)arg1;
- (void)addEmitSynchronizedSlaveSampleBufferSemaphore:(id)arg1;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (bool)downstreamIsSharingOutputPool;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (id)initWithSynchronizedSlaveAttachedMediaDecompressionEnabled:(bool)arg1;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setDownstreamIsSharingOutputPool:(bool)arg1;
- (void)suspendResources;

@end
