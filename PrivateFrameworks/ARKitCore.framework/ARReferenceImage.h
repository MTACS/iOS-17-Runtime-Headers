
@interface ARReferenceImage : NSObject <NSSecureCoding> {
    struct __CVBuffer { } * _alphaMask;
    ARReferenceImageCachedError * _cachedVerificationError;
    double  _estimatedQuality;
    NSUUID * _identifier;
    NSString * _name;
    struct CGSize { 
        double width; 
        double height; 
    }  _physicalSize;
    struct __CVBuffer { } * _pixelBuffer;
    NSString * _resourceGroupName;
    NSObject<OS_dispatch_queue> * _verificationQueue;
    NSObject<OS_dispatch_semaphore> * _verificationQueueSemaphore;
}

@property (nonatomic, readonly) struct __CVBuffer { }*alphaMask;
@property (retain) ARReferenceImageCachedError *cachedVerificationError;
@property double estimatedQuality;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } physicalSize;
@property (nonatomic, readonly) struct __CVBuffer { }*pixelBuffer;
@property (nonatomic, readonly) NSString *resourceGroupName;

+ (id)referenceImagesInGroupNamed:(id)arg1 bundle:(id)arg2;
+ (id)referenceImagesInGroupNamed:(id)arg1 catalog:(id)arg2;
+ (id)referenceImagesInGroupNamed:(id)arg1 catalogName:(id)arg2 bundle:(id)arg3;
+ (id)referenceImagesInGroupNamed:(id)arg1 catalogURL:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct __CVBuffer { }*)alphaMask;
- (id)cachedVerificationError;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)estimateQualityWithCompletionHandler:(id /* block */)arg1;
- (double)estimatedQuality;
- (unsigned long long)hash;
- (id)identifier;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)initWithCGImage:(struct CGImage { }*)arg1 orientation:(unsigned int)arg2 physicalWidth:(double)arg3;
- (id)initWithCGImage:(struct CGImage { }*)arg1 orientation:(unsigned int)arg2 physicalWidth:(double)arg3 addPadding:(bool)arg4;
- (id)initWithCIImage:(id)arg1 orientation:(unsigned int)arg2 physicalWidth:(double)arg3 alphaInfo:(unsigned int*)arg4 addPadding:(bool)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1 orientation:(unsigned int)arg2 physicalWidth:(double)arg3;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1 orientation:(unsigned int)arg2 physicalWidth:(double)arg3 addPadding:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (id)name;
- (struct CGSize { double x1; double x2; })physicalSize;
- (struct __CVBuffer { }*)pixelBuffer;
- (id)resourceGroupName;
- (void)setCachedVerificationError:(id)arg1;
- (void)setEstimatedQuality:(double)arg1;
- (void)setName:(id)arg1;
- (void)setResourceGroupName:(id)arg1;
- (id)shortDebugDescription;
- (void)validateWithCompletionHandler:(id /* block */)arg1;

@end
