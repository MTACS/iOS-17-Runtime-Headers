
@interface VisionCoreEspressoUtils : NSObject

+ (id)URLForModelNamed:(id)arg1 error:(id*)arg2;
+ (id)URLForResourceFileNamed:(id)arg1 error:(id*)arg2;
+ (bool)getInputImageTensorDescriptor:(id*)arg1 outputTensorDescriptors:(id*)arg2 forNetworkModelFileURL:(id)arg3 inputBlobName:(id)arg4 pixelFormatType:(unsigned int)arg5 outputBlobNamesWithTypes:(id)arg6 confidencesBlobNamesWithLabelsFiles:(id)arg7 error:(id*)arg8;
+ (id)tensorShapesForBlobNames:(id)arg1 ofNetworkModelFileURL:(id)arg2 error:(id*)arg3;

@end
