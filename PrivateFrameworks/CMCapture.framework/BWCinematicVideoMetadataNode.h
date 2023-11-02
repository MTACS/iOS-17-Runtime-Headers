
@interface BWCinematicVideoMetadataNode : BWNode {
    struct opaqueCMFormatDescription { } * _audioMetadataFormatDescription;
    BWNodeOutput * _audioMetadataOutput;
    struct OpaqueCMBlockBuffer { } * _emptyMetadataSampleData;
    unsigned int  _localIDForAmbienceLevel_BE;
    unsigned int  _localIDForAperture_BE;
    unsigned int  _localIDForCinematographyMetadata_BE;
    unsigned int  _localIDForDialogueLevel_BE;
    unsigned int  _localIDForDisparity_BE;
    unsigned int  _localIDForRenderingMetadata_BE;
    unsigned int  _localIDForStabilizationMetadata_BE;
    struct opaqueCMFormatDescription { } * _metadataFormatDescription;
    BWNodeOutput * _metadataOutput;
    BWNodeOutput * _passthruOutput;
    bool  _previousGeneratedMetadataBufferWasEmpty;
}

@property (nonatomic, readonly) BWNodeOutput *audioMetadataOutput;
@property (nonatomic, readonly) BWNodeOutput *metadataOutput;
@property (nonatomic, readonly) BWNodeOutput *passthruOutput;

+ (void)initialize;

- (id)audioMetadataOutput;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (id)initWithAudioEnabled:(bool)arg1;
- (id)metadataOutput;
- (id)nodeSubType;
- (id)nodeType;
- (id)passthruOutput;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end
