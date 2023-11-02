
@interface CIConvolutionProcessor : CIImageProcessorKernel

+ (bool)allowCompressedInputsAndOutputs;
+ (bool)allowSRGBTranferFuntionOnInputAtIndex:(int)arg1;
+ (bool)allowSRGBTranferFuntionOnOutput;
+ (id)applyBoxToImage:(id)arg1 width:(int)arg2 height:(int)arg3;
+ (id)applyConToImage:(id)arg1 width:(int)arg2 height:(int)arg3 bias:(double)arg4 weights:(id)arg5;
+ (bool)canReduceOutputChannels;
+ (int)formatForInputAtIndex:(int)arg1;
+ (int)outputFormat;
+ (bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id*)arg4;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (bool)synchronizeInputs;

@end
