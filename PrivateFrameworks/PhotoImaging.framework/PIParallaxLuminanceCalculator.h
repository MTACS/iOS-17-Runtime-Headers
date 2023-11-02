
@interface PIParallaxLuminanceCalculator : NSObject

- (id)_imageToAnalyzeForLayerStack:(id)arg1 error:(out id*)arg2;
- (id)calculateClockLuminanceValuesForLayerStack:(id)arg1 style:(id)arg2 renderer:(id)arg3 error:(out id*)arg4;
- (id)calculateLuminanceValuesForImage:(id)arg1 renderer:(id)arg2 error:(out id*)arg3;

@end
