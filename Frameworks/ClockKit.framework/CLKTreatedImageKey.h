
@interface CLKTreatedImageKey : NSObject <NSCopying> {
    double  _cornerRadius;
    long long  _maskMode;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxDeviceSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxSDKSize;
    UIImage * _rawImage;
    double  _scale;
    long long  _scaleMode;
    double  _sdkDeviceScale;
}

@property (nonatomic, readonly) double cornerRadius;
@property (nonatomic, readonly) long long maskMode;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } maxDeviceSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } maxSDKSize;
@property (nonatomic, readonly) UIImage *rawImage;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) long long scaleMode;
@property (nonatomic, readonly) double sdkDeviceScale;

+ (id)keyWithRawImage:(id)arg1 maxSDKSize:(struct CGSize { double x1; double x2; })arg2 maxDeviceSize:(struct CGSize { double x1; double x2; })arg3 cornerRadius:(double)arg4;
+ (id)keyWithRawImage:(id)arg1 maxSDKSize:(struct CGSize { double x1; double x2; })arg2 maxDeviceSize:(struct CGSize { double x1; double x2; })arg3 maskMode:(long long)arg4;
+ (id)keyWithRawImage:(id)arg1 scale:(double)arg2 sdkDeviceScale:(double)arg3 cornerRadius:(double)arg4;
+ (id)keyWithRawImage:(id)arg1 scale:(double)arg2 sdkDeviceScale:(double)arg3 maskMode:(long long)arg4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)cornerRadius;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)maskMode;
- (struct CGSize { double x1; double x2; })maxDeviceSize;
- (struct CGSize { double x1; double x2; })maxSDKSize;
- (id)rawImage;
- (double)scale;
- (long long)scaleMode;
- (double)sdkDeviceScale;

@end
