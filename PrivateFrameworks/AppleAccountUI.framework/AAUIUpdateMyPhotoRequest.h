
@interface AAUIUpdateMyPhotoRequest : AARequest {
    ACAccount * _account;
    NSValue * _cropRect;
    UIImage * _photo;
}

@property (nonatomic, readonly) NSValue *cropRect;
@property (nonatomic, readonly) UIImage *photo;

+ (id)_downsampleImage:(id)arg1 fromStartingQuality:(double)arg2 toEndingQuality:(double)arg3 increment:(double)arg4 maxLength:(unsigned long long)arg5;
+ (id)_fullScreen2ImageFromImage:(id)arg1 cropRect:(id)arg2 fullScreenCropRect:(id*)arg3;

- (void).cxx_destruct;
- (id)cropRect;
- (id)initWithAccount:(id)arg1 photo:(id)arg2 cropRect:(id)arg3;
- (id)photo;
- (id)urlRequest;
- (id)urlString;

@end
