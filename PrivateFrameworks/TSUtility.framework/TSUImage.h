
@interface TSUImage : NSObject {
    long long  mCachedImageLock;
    struct CGImage { } * mCachedSliceableImage;
    id  mCachedSystemImage;
    long long  mImageSliceCacheLock;
    struct __CFDictionary { } * mImageSlices;
}

@property (nonatomic, readonly) struct CGImage { }*CGImage;
@property (nonatomic, readonly) UIImage *UIImage;
@property (nonatomic, readonly) long long imageOrientation;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)imageWithCGImage:(struct CGImage { }*)arg1;
+ (id)imageWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 orientation:(long long)arg3;
+ (id)imageWithContentsOfFile:(id)arg1;
+ (id)imageWithData:(id)arg1;
+ (id)imageWithSize:(struct CGSize { double x1; double x2; })arg1 drawnUsingBlock:(id /* block */)arg2;
+ (id)imageWithUIImage:(id)arg1;
+ (id)noisePatternWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 factor:(double)arg3;

- (struct CGImage { }*)CGImage;
- (struct CGImage { }*)CGImageForContentsScale:(double)arg1;
- (struct CGImage { }*)CGImageForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)JPEGRepresentationWithCompressionQuality:(double)arg1;
- (id)PNGRepresentation;
- (id)TIFFRepresentation;
- (id)UIImage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2 stretchingCenterWidthBy:(double)arg3;
- (long long)imageOrientation;
- (id)imagePartsWithLeftCapWidth:(double)arg1 rightCapWidth:(double)arg2 topCapHeight:(double)arg3 bottomCapHeight:(double)arg4;
- (id)init;
- (id)initWithCGImage:(struct CGImage { }*)arg1;
- (id)initWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 orientation:(long long)arg3;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithImageSourceRef:(struct CGImageSource { }*)arg1;
- (id)initWithUIImage:(id)arg1;
- (bool)isEmpty;
- (double)scale;
- (struct CGSize { double x1; double x2; })size;
- (id)stretchedImageOfSize:(struct CGSize { double x1; double x2; })arg1 leftCapWidth:(double)arg2 rightCapWidth:(double)arg3 topCapHeight:(double)arg4 bottomCapHeight:(double)arg5;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

- (struct CGImage { }*)CGImageForSize:(struct CGSize { double x1; double x2; })arg1 inContext:(struct CGContext { }*)arg2 orLayer:(id)arg3;

@end
