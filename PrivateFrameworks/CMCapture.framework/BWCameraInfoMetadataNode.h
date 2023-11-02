
@interface BWCameraInfoMetadataNode : BWNode {
    struct opaqueCMFormatDescription { } * _basicBoxedMetadataFormatDescription;
    struct opaqueCMFormatDescription { } * _boxedMetadataFormatDescription;
    BWNodeOutput * _boxedMetadataOutput;
    struct OpaqueCMBlockBuffer { } * _emptyMetadataSampleData;
    bool  _generateLivePhotosMetadata;
    unsigned int  _localIDForLivePhotosMetadata_BE;
    BWNodeOutput * _passthruOutput;
    bool  _previousGeneratedMetadataBufferWasEmpty;
    struct { 
        int width; 
        int height; 
    }  _videoDimensions;
}

@property (nonatomic, readonly) BWNodeOutput *boxedMetadataOutput;
@property (nonatomic, readonly) BWNodeOutput *passthruOutput;

+ (void)initialize;

- (id)boxedMetadataOutput;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (id)initForLivePhotosMetadata:(bool)arg1 generateDebugMetadata:(bool)arg2;
- (id)nodeSubType;
- (id)nodeType;
- (id)passthruOutput;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end
