
@interface CAMTimelapseJPEGReader : NSObject

+ (id)_decodeOptionsWithMaxPixelSize:(long long)arg1 applyTransform:(bool)arg2 useBGRA:(bool)arg3;
+ (bool)_hasExifRotation:(id)arg1;
+ (struct CGImage { }*)createCGImageFromData:(id)arg1 applyTransform:(bool)arg2 maxPixelSize:(long long)arg3 useBGRA:(bool)arg4;
+ (struct __CVBuffer { }*)createPixelBufferFromData:(id)arg1 applyTransform:(bool)arg2 maxPixelSize:(long long)arg3 useBGRA:(bool)arg4;
+ (struct __CVBuffer { }*)createPixelBufferFromData:(id)arg1 applyTransform:(bool)arg2 maxPixelSize:(long long)arg3 useBGRA:(bool)arg4 cleanApertureSize:(struct CGSize { double x1; double x2; })arg5;
+ (id)newDataFromFilePath:(id)arg1;

@end
