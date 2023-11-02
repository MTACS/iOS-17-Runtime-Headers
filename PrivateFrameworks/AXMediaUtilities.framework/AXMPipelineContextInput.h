
@interface AXMPipelineContextInput : NSObject <NSSecureCoding> {
    NSURL * _URL;
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedImageURLSize;
    CIImage * _ciImage;
    struct CGColorSpace { } * _extendedSRGBColorSpace;
    long long  _inputType;
    NSString * _phAssetLocalIdentifier;
    NSURL * _photoLibraryURL;
    AXMPixelBufferWrapper * _pixelBuffer;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) CIImage *ciImage;
@property (nonatomic, readonly) struct CGColorSpace { }*imageColorSpace;
@property (nonatomic, readonly) long long inputType;
@property (nonatomic, readonly) NSString *phAssetLocalIdentifier;
@property (nonatomic, readonly) NSURL *photoLibraryURL;
@property (nonatomic, readonly) AXMPixelBufferWrapper *pixelBuffer;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) struct __CVBuffer { }*wrappedPixelBuffer;

+ (id)inputWithCIImage:(id)arg1;
+ (id)inputWithCIImage:(id)arg1 photoLibraryURL:(id)arg2;
+ (id)inputWithPHAssetLocalIdentifier:(id)arg1 photoLibraryURL:(id)arg2;
+ (id)inputWithPixelBuffer:(id)arg1;
+ (id)inputWithURL:(id)arg1;
+ (id)inputWithURL:(id)arg1 photoLibraryURL:(id)arg2;
+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)_initWithCIImage:(id)arg1;
- (id)_initWithCIImage:(id)arg1 photoLibraryURL:(id)arg2;
- (id)_initWithPHAssetLocalIdentifier:(id)arg1 photoLibraryURL:(id)arg2;
- (id)_initWithPixelBuffer:(id)arg1;
- (id)_initWithURL:(id)arg1;
- (id)_initWithURL:(id)arg1 photoLibraryURL:(id)arg2;
- (id)ciImage;
- (struct CGImage { }*)createCGImageWithMetrics:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (struct CGColorSpace { }*)imageColorSpace;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)inputType;
- (id)phAssetLocalIdentifier;
- (id)photoLibraryURL;
- (id)pixelBuffer;
- (struct CGSize { double x1; double x2; })size;
- (struct __CVBuffer { }*)wrappedPixelBuffer;

@end
