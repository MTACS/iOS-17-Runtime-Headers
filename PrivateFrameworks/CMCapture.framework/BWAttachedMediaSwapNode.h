
@interface BWAttachedMediaSwapNode : BWNode {
    NSString * _attachedMediaKeyToPrimaryFormat;
    bool  _generatesDroppedSampleMarkerBuffers;
    NSString * _primaryFormatToAttachedMediaKey;
    NSArray * _sampleBufferAttachmentsToTransfer;
}

+ (void)initialize;

- (void)dealloc;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (id)initWithPrimaryFormatToAttachedMediaKey:(id)arg1 attachedMediaKeyToPrimaryFormat:(id)arg2 sampleBufferAttachmentsToTransfer:(id)arg3 generatesDroppedSampleMarkerBuffers:(bool)arg4;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end
