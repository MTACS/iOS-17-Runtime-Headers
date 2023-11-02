
@interface SBFCARendererImageRepresentation : NSObject <NSSecureCoding> {
    NSURL * _fileURL;
    NSData * _imageData;
    long long  _imageOrientation;
    long long  _representationType;
    IOSurface * _surface;
}

@property (nonatomic, readonly, copy) NSURL *fileURL;
@property (nonatomic, readonly, copy) NSData *imageData;
@property (nonatomic, readonly) long long imageOrientation;
@property (nonatomic, readonly) long long representationType;
@property (nonatomic, readonly) IOSurface *surface;

+ (id)representationWithFileURL:(id)arg1 imageOrientation:(long long)arg2;
+ (id)representationWithIOSurface:(id)arg1 imageOrientation:(long long)arg2;
+ (id)representationWithImage:(id)arg1;
+ (id)representationWithImageData:(id)arg1 imageOrientation:(long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct CGImage { }*)createCGImageReturningScale:(double*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fileURL;
- (id)imageData;
- (long long)imageOrientation;
- (id)initWithCoder:(id)arg1;
- (long long)representationType;
- (id)surface;

@end
