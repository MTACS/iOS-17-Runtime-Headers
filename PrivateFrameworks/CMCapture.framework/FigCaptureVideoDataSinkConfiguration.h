
@interface FigCaptureVideoDataSinkConfiguration : FigCaptureSinkConfiguration {
    bool  _discardsLateVideoFrames;
    bool  _optimizedForPreview;
    NSArray * _requestedBufferAttachments;
    FigCaptureTrie * _requestedBufferAttachmentsTrie;
    bool  _sceneStabilityMetadataEnabled;
}

@property (nonatomic) bool discardsLateVideoFrames;
@property (nonatomic) bool optimizedForPreview;
@property (nonatomic, retain) NSArray *requestedBufferAttachments;
@property (nonatomic, readonly) FigCaptureTrie *requestedBufferAttachmentsTrie;
@property (nonatomic) bool sceneStabilityMetadataEnabled;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (bool)discardsLateVideoFrames;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)optimizedForPreview;
- (id)requestedBufferAttachments;
- (id)requestedBufferAttachmentsTrie;
- (bool)sceneStabilityMetadataEnabled;
- (void)setDiscardsLateVideoFrames:(bool)arg1;
- (void)setOptimizedForPreview:(bool)arg1;
- (void)setRequestedBufferAttachments:(id)arg1;
- (void)setSceneStabilityMetadataEnabled:(bool)arg1;
- (int)sinkType;

@end
