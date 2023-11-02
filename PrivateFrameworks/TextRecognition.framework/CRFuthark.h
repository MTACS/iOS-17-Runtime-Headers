
@interface CRFuthark : NSObject

+ (id)detectAndRecognizeTextInImage:(id)arg1 options:(id)arg2;
+ (id)detectAndRecognizeTextInImage:(id)arg1 options:(id)arg2 withProgressHandler:(id /* block */)arg3;
+ (id)detectAndRecognizeTextInImage:(id)arg1 withMaxNumScales:(unsigned long long)arg2 options:(id)arg3 withProgressHandler:(id /* block */)arg4;
+ (id)runFutharkOnImage:(id)arg1 recognizeFeatures:(bool)arg2 options:(id)arg3;
+ (id)runFutharkOnImage:(id)arg1 recognizeFeatures:(bool)arg2 withMaxNumScales:(unsigned long long)arg3 withThresholdingAlgorithm:(long long)arg4 options:(id)arg5 withProgressHandler:(id /* block */)arg6;

@end
