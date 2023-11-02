
@interface NUImageFactory : NSObject

+ (id)_newCIImageFromImage:(id)arg1;
+ (id)bufferImageWithLayout:(id)arg1 format:(id)arg2 colorSpace:(id)arg3;
+ (struct CGImage { }*)newCGImageFromBufferImage:(id)arg1;
+ (struct CGImage { }*)newCGImageFromImageBuffer:(id)arg1;
+ (struct CGImage { }*)newCGImageFromImageStorage:(id)arg1 colorSpace:(id)arg2;
+ (id)newCIImageFromBufferImage:(id)arg1;
+ (id)surfaceImageWithLayout:(id)arg1 format:(id)arg2 colorSpace:(id)arg3;

@end
