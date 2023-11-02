
@interface IFImage : NSObject <ISScalableCompositorResource, NSCopying, NSSecureCoding> {
    bool  _largest;
}

@property (readonly) struct CGImage { }*CGImage;
@property (readonly) NSData *bitmapData;
@property (readonly) struct CGImage { }*cgImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) double dimension;
@property (readonly) unsigned long long hash;
@property struct CGSize { double x1; double x2; } iconSize;
@property bool largest;
@property struct CGSize { double x1; double x2; } minimumSize;
@property (readonly) struct CGSize { double x1; double x2; } pixelSize;
@property bool placeholder;
@property (readonly) bool placeholder;
@property (readonly) double scale;
@property (readonly) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;
@property (readonly) NSUUID *uuid;
@property unsigned long long validationFlags;
@property (readonly) NSData *validationToken;

// Image: /System/Library/PrivateFrameworks/IconFoundation.framework/IconFoundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (struct CGImage { }*)createCGImageWithBitmapData:(id)arg1;
+ (struct CGImage { }*)createCGImageWithBitmapData:(id)arg1 imageHeader:(struct { unsigned int x1; unsigned int x2; unsigned int x3; float x4; float x5; float x6; float x7; float x8; float x9; unsigned char x10[12]; }*)arg2;
+ (struct CGColorSpace { }*)defaultCGColorSpace;
+ (struct CGImage { }*)escapingCGImageWithCGImage:(struct CGImage { }*)arg1;
+ (id)imageWithContentsOfURL:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)_init;
- (id)bitmapData;
- (struct CGImage { }*)cgImage;
- (id)digest;
- (double)dimension;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2;
- (id)initWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 minimumSize:(struct CGSize { double x1; double x2; })arg3 placeholder:(bool)arg4;
- (id)initWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 placeholder:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 scale:(double)arg2;
- (id)initWithData:(id)arg1 uuid:(id)arg2;
- (id)initWithData:(id)arg1 uuid:(id)arg2 validationToken:(id)arg3;
- (bool)largest;
- (struct CGSize { double x1; double x2; })pixelSize;
- (bool)placeholder;
- (void)setLargest:(bool)arg1;
- (id)uuid;
- (id)validationToken;
- (bool)writeToURL:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices

+ (id)_placeholderImageWithImageDescriptor:(id)arg1 markAsPlaceholder:(bool)arg2 fallbackTypeID:(id)arg3 referenceIcon:(id)arg4;

- (id)imageForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;

@end
