
@interface SKDiskImage : NSObject {
    <SKCancellableImageOperation> * _cancellableImageOperation;
    DIDeviceHandle * _deviceHandle;
    DIBaseParams * _diParams;
    NSURL * _imageURL;
}

@property (retain) <SKCancellableImageOperation> *cancellableImageOperation;
@property (nonatomic, retain) DIDeviceHandle *deviceHandle;
@property (nonatomic, retain) DIBaseParams *diParams;
@property (nonatomic, readonly) NSURL *imageURL;

+ (id)createBlankAt:(id)arg1 params:(id)arg2 error:(id*)arg3;
+ (id)diskImageConvertFromParamsAt:(id)arg1 params:(id)arg2 error:(id*)arg3;
+ (id)diskImageUnsafeWithURL:(id)arg1 params:(id)arg2 error:(id*)arg3;
+ (id)diskImageWithURL:(id)arg1 params:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)attachNoMountWithError:(id*)arg1;
- (id)attachWithError:(id*)arg1;
- (id)attachWithParams:(id)arg1 error:(id*)arg2;
- (id)cancellableImageOperation;
- (id)deduceDiskWithError:(id*)arg1;
- (id)description;
- (id)deviceHandle;
- (id)diAttachWithParams:(id)arg1 error:(id*)arg2;
- (id)diParams;
- (unsigned long long)diResize:(id)arg1 error:(id*)arg2;
- (id)imageURL;
- (id)initWithURL:(id)arg1 diParams:(id)arg2 error:(id*)arg3;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (bool)isAttached;
- (id)mount:(id)arg1 params:(id)arg2 outError:(id*)arg3;
- (id)redactedDescription;
- (id)resizeLimitsInternalWithLimitsParams:(id)arg1 error:(id*)arg2;
- (id)resizeLimitsShallowInternalWithLimitsParams:(id)arg1 error:(id*)arg2;
- (id)resizeLimitsWithError:(id*)arg1;
- (id)resizeLimitsWithLimitsParams:(id)arg1 error:(id*)arg2;
- (bool)resizeShallowWithParams:(id)arg1 error:(id*)arg2;
- (bool)resizeWithParams:(id)arg1 error:(id*)arg2;
- (bool)retrieveDIInfoWithParams:(id)arg1 error:(id*)arg2;
- (id)retrieveInfoWithParams:(id)arg1 error:(id*)arg2;
- (void)setCancellableImageOperation:(id)arg1;
- (void)setDeviceHandle:(id)arg1;
- (void)setDiParams:(id)arg1;

@end
