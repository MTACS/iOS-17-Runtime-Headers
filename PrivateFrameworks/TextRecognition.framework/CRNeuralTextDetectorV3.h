
@interface CRNeuralTextDetectorV3 : CRNeuralTextDetector {
    CRTextDetectorModelV3 * _model;
}

@property (retain) CRTextDetectorModelV3 *model;

+ (bool)computeClassCount:(void*)arg1 classProbabiity:(void*)arg2 fromSingleTextFeature:(id)arg3 map:(const void*)arg4 backgroundClass:(int)arg5;
+ (struct CGSize { double x1; double x2; })scaledImageSizeForConfiguration:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;

- (void).cxx_destruct;
- (id)detectInImage:(id)arg1 error:(id*)arg2;
- (id)detectInImage:(id)arg1 trackingSession:(id)arg2 error:(id*)arg3;
- (id)enumerateTilesForImage:(id)arg1 guidedByScoreMapFullTile:(void*)arg2 block:(id /* block */)arg3;
- (id)init;
- (id)initWithConfiguration:(id)arg1 error:(id*)arg2;
- (id)model;
- (bool)preheatWithError:(id*)arg1;
- (void)runFullTileInferenceOnImage:(id)arg1 outputMaps:(void*)arg2 inputSize:(struct CGSize { double x1; double x2; }*)arg3 outputSize:(struct CGSize { double x1; double x2; }*)arg4 error:(id*)arg5;
- (void)setModel:(id)arg1;
- (struct CGSize { double x1; double x2; })smallestImageSizeForTextWithRelativeHeight:(double)arg1 originalImageSize:(struct CGSize { double x1; double x2; })arg2;

@end
