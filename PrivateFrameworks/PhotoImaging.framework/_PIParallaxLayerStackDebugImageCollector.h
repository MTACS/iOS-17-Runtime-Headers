
@interface _PIParallaxLayerStackDebugImageCollector : NSObject {
    <NUImageBuffer> * _debugColorAnalysisBuffer;
    CIImage * _debugColorAnalysisImage;
    <NUImageBuffer> * _debugConfidenceMapBuffer;
    CIImage * _debugConfidenceMapImage;
    <NUImageBuffer> * _debugInfillBuffer;
    CIImage * _debugInfillImage;
    <NUImageBuffer> * _debugInputBuffer;
    CIImage * _debugInputImage;
    NSArray * _debugIntermediateLayoutBuffers;
    NSArray * _debugIntermediateLayoutImages;
    <NUImageBuffer> * _debugLayoutBuffer;
    CIImage * _debugLayoutImage;
    <NUImageBuffer> * _debugLocalConfidenceBuffer;
    CIImage * _debugLocalConfidenceImage;
    <NUImageBuffer> * _debugMatteBuffer;
    <NUImageBuffer> * _debugMatteCropBuffer;
    CIImage * _debugMatteCropImage;
    CIImage * _debugMatteImage;
    <NUImageBuffer> * _debugPreviewBuffer;
    CIImage * _debugPreviewImage;
    <NUImageBuffer> * _flattenedBackgroundForDebugPreview;
    <NUImageBuffer> * _flattenedForegroundForDebugPreview;
}

@property (nonatomic, retain) <NUImageBuffer> *debugColorAnalysisBuffer;
@property (nonatomic, retain) CIImage *debugColorAnalysisImage;
@property (nonatomic, retain) <NUImageBuffer> *debugConfidenceMapBuffer;
@property (nonatomic, retain) CIImage *debugConfidenceMapImage;
@property (nonatomic, retain) <NUImageBuffer> *debugInfillBuffer;
@property (nonatomic, retain) CIImage *debugInfillImage;
@property (nonatomic, retain) <NUImageBuffer> *debugInputBuffer;
@property (nonatomic, retain) CIImage *debugInputImage;
@property (nonatomic, retain) NSArray *debugIntermediateLayoutBuffers;
@property (nonatomic, retain) NSArray *debugIntermediateLayoutImages;
@property (nonatomic, retain) <NUImageBuffer> *debugLayoutBuffer;
@property (nonatomic, retain) CIImage *debugLayoutImage;
@property (nonatomic, retain) <NUImageBuffer> *debugLocalConfidenceBuffer;
@property (nonatomic, retain) CIImage *debugLocalConfidenceImage;
@property (nonatomic, retain) <NUImageBuffer> *debugMatteBuffer;
@property (nonatomic, retain) <NUImageBuffer> *debugMatteCropBuffer;
@property (nonatomic, retain) CIImage *debugMatteCropImage;
@property (nonatomic, retain) CIImage *debugMatteImage;
@property (nonatomic, retain) <NUImageBuffer> *debugPreviewBuffer;
@property (nonatomic, retain) CIImage *debugPreviewImage;
@property (nonatomic, retain) <NUImageBuffer> *flattenedBackgroundForDebugPreview;
@property (nonatomic, retain) <NUImageBuffer> *flattenedForegroundForDebugPreview;

- (void).cxx_destruct;
- (id)debugColorAnalysisBuffer;
- (id)debugColorAnalysisImage;
- (id)debugConfidenceMapBuffer;
- (id)debugConfidenceMapImage;
- (id)debugInfillBuffer;
- (id)debugInfillImage;
- (id)debugInputBuffer;
- (id)debugInputImage;
- (id)debugIntermediateLayoutBuffers;
- (id)debugIntermediateLayoutImages;
- (id)debugLayoutBuffer;
- (id)debugLayoutImage;
- (id)debugLocalConfidenceBuffer;
- (id)debugLocalConfidenceImage;
- (id)debugMatteBuffer;
- (id)debugMatteCropBuffer;
- (id)debugMatteCropImage;
- (id)debugMatteImage;
- (id)debugPreviewBuffer;
- (id)debugPreviewImage;
- (id)flattenedBackgroundForDebugPreview;
- (id)flattenedForegroundForDebugPreview;
- (void)prepareImagesForItem:(id)arg1 renderer:(id)arg2 layout:(id)arg3 style:(id)arg4 inputImage:(id)arg5 matteImage:(id)arg6 infillImage:(id)arg7 foregroundImage:(id)arg8 backgroundImage:(id)arg9;
- (void)renderImagesWithRenderer:(id)arg1;
- (id)resultLayersWithRenderer:(id)arg1;
- (void)setDebugColorAnalysisBuffer:(id)arg1;
- (void)setDebugColorAnalysisImage:(id)arg1;
- (void)setDebugConfidenceMapBuffer:(id)arg1;
- (void)setDebugConfidenceMapImage:(id)arg1;
- (void)setDebugInfillBuffer:(id)arg1;
- (void)setDebugInfillImage:(id)arg1;
- (void)setDebugInputBuffer:(id)arg1;
- (void)setDebugInputImage:(id)arg1;
- (void)setDebugIntermediateLayoutBuffers:(id)arg1;
- (void)setDebugIntermediateLayoutImages:(id)arg1;
- (void)setDebugLayoutBuffer:(id)arg1;
- (void)setDebugLayoutImage:(id)arg1;
- (void)setDebugLocalConfidenceBuffer:(id)arg1;
- (void)setDebugLocalConfidenceImage:(id)arg1;
- (void)setDebugMatteBuffer:(id)arg1;
- (void)setDebugMatteCropBuffer:(id)arg1;
- (void)setDebugMatteCropImage:(id)arg1;
- (void)setDebugMatteImage:(id)arg1;
- (void)setDebugPreviewBuffer:(id)arg1;
- (void)setDebugPreviewImage:(id)arg1;
- (void)setFlattenedBackgroundForDebugPreview:(id)arg1;
- (void)setFlattenedForegroundForDebugPreview:(id)arg1;

@end
