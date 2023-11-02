
@interface HDRProcessorEx : HDRProcessor

- (long long)generateMSRColorConfigExWithOperation:(unsigned int)arg1 InputSurfaces:(struct __IOSurface {}**)arg2 OutputSurfaces:(struct __IOSurface {}**)arg3 Metadatas:(id*)arg4 Histograms:(struct RgbHistogram_t {}**)arg5 Configs:(id*)arg6 NumOfGroup:(int)arg7 MVImageLayout:(unsigned int)arg8;
- (int)processWithMSRColorConfigs:(id*)arg1 MSRScaler:(struct __IOSurfaceAccelerator { }*)arg2 InputSurfaces:(struct __IOSurface {}**)arg3 OutputSurfaces:(struct __IOSurface {}**)arg4 CropRects:(struct { /* ? */ }**)arg5 NumOfCropRectsInAGroup:(int*)arg6 NumOfGroup:(int)arg7;

@end
