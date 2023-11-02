
@interface PISegmentationInwardFillProcessor : CIImageProcessorKernel

+ (int)formatForInputAtIndex:(int)arg1;
+ (bool)outputIsOpaque;
+ (bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id*)arg4;
+ (bool)synchronizeInputs;

@end
