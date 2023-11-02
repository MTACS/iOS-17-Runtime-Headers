
@interface _MLVNFrameworkHandle : NSObject {
    Class  _VNImageBufferClass;
    int (* _detectionPrintShapesImpl;
    int (* _detectionPrintSupportedRevisionsImpl;
    int (* _detectionPrintsFromPixelBuffersImpl;
    int (* _detectionPrintsFromPixelBuffersUsesCPUOnlyImpl;
    int (* _scenePrintElementCountImpl;
    int (* _scenePrintLengthImpl;
    int (* _scenePrintsFromPixelBuffersImpl;
    int (* _scenePrintsFromPixelBuffersUsesCPUOnlyImpl;
    bool  _validForObjectprint;
    bool  _validForSceneprint;
}

@property (nonatomic, readonly) Class VNImageBufferClass;
@property (nonatomic, readonly) int (*detectionPrintShapesImpl;
@property (nonatomic, readonly) int (*detectionPrintSupportedRevisionsImpl;
@property (nonatomic, readonly) int (*detectionPrintsFromPixelBuffersImpl;
@property (nonatomic, readonly) int (*detectionPrintsFromPixelBuffersUsesCPUOnlyImpl;
@property (nonatomic, readonly) int (*scenePrintElementCountImpl;
@property (nonatomic, readonly) int (*scenePrintLengthImpl;
@property (nonatomic, readonly) int (*scenePrintsFromPixelBuffersImpl;
@property (nonatomic, readonly) int (*scenePrintsFromPixelBuffersUsesCPUOnlyImpl;
@property (getter=isValid, nonatomic, readonly) bool validForObjectprint;
@property (getter=isValid, nonatomic, readonly) bool validForSceneprint;

+ (id)addOrientation:(unsigned int)arg1 toOptions:(id)arg2;
+ (id)sharedHandle;

- (void).cxx_destruct;
- (Class)VNImageBufferClass;
- (struct __CVBuffer { }*)createPixelBufferFromCGImage:(struct CGImage { }*)arg1 constraint:(id)arg2 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 cropAndScaleOption:(unsigned long long)arg4 options:(id)arg5 error:(id*)arg6;
- (struct __CVBuffer { }*)createPixelBufferFromImageAtURL:(id)arg1 constraint:(id)arg2 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 cropAndScaleOption:(unsigned long long)arg4 options:(id)arg5 error:(id*)arg6;
- (struct __CVBuffer { }*)createPixelBufferFromVNImageBuffer:(id)arg1 constraint:(id)arg2 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 cropAndScaleOption:(unsigned long long)arg4 options:(id)arg5 error:(id*)arg6;
- (id)detectionPrintShapes:(unsigned long long)arg1;
- (int (*)detectionPrintShapesImpl;
- (id)detectionPrintSupportedRevisions;
- (int (*)detectionPrintSupportedRevisionsImpl;
- (id)detectionPrintsFromPixelBuffers:(struct __CVBuffer { }*)arg1 version:(unsigned long long)arg2 augmentationOptions:(id)arg3 useCPUOnly:(bool)arg4 error:(id*)arg5;
- (int (*)detectionPrintsFromPixelBuffersImpl;
- (int (*)detectionPrintsFromPixelBuffersUsesCPUOnlyImpl;
- (unsigned long long)elementCountForScenePrintRequestRevision:(unsigned long long)arg1;
- (id)init;
- (bool)isValid;
- (bool)isValid;
- (unsigned long long)lengthInBytesForScenePrintRequestRevision:(unsigned long long)arg1;
- (int (*)scenePrintElementCountImpl;
- (int (*)scenePrintLengthImpl;
- (id)scenePrintsFromPixelBuffers:(struct __CVBuffer { }*)arg1 version:(unsigned long long)arg2 augmentationOptions:(id)arg3 useCPUOnly:(bool)arg4 error:(id*)arg5;
- (int (*)scenePrintsFromPixelBuffersImpl;
- (int (*)scenePrintsFromPixelBuffersUsesCPUOnlyImpl;

@end
