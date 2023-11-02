
@protocol MattingFilter

@required

- (int)allocateResources:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; float x6; bool x7; })arg1;
- (XMattingBoxTensorFilter *)boxTensorFilter;
- (bool)coefficientsComputed;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; float x6; bool x7; })config;
- (int)encodeApplyCoefficientsOn:(id <MTLCommandBuffer>)arg1 colorGuide:(id <MTLTexture>)arg2 disparityGuide:(id <MTLTexture>)arg3 constraints:(id <MTLTexture>)arg4 destinationAlphaTexture:(id <MTLTexture>)arg5;
- (int)encodeStateOn:(id <MTLCommandBuffer>)arg1 colorGuide:(id <MTLTexture>)arg2 disparityGuide:(id <MTLTexture>)arg3 initialSegmentation:(id <MTLTexture>)arg4 constraints:(id <MTLTexture>)arg5;
- (int)encodeStepOn:(id <MTLCommandBuffer>)arg1;
- (int)encodeUpsampleOn:(id <MTLCommandBuffer>)arg1 segmentation:(id <MTLTexture>)arg2 colorGuide:(id <MTLTexture>)arg3 disparityGuide:(id <MTLTexture>)arg4 outputMatte:(id <MTLTexture>)arg5;
- (id)initWithDevice:(id <MTLDevice>)arg1 library:(id <MTLLibrary>)arg2;
- (void)releaseResources;
- (void)setBoxTensorFilter:(XMattingBoxTensorFilter *)arg1;
- (void)setConfig:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; float x6; bool x7; })arg1;
- (bool)stateComputed;

@end
