
@interface AVMetadataSaliencyHeatMap : AVMetadataObject <NSCopying> {
    long long  _bytesPerRow;
    NSData * _heatMap;
    long long  _height;
    long long  _width;
}

@property (readonly) long long bytesPerRow;
@property (readonly) NSData *heatMap;
@property (readonly) long long height;
@property (readonly) long long width;

+ (id)saliencyHeatMapWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 input:(id)arg2 timeStamp:(id)arg3;

- (long long)bytesPerRow;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)heatMap;
- (long long)height;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 isVideoMirrored:(bool)arg3 rollAdjustment:(double)arg4;
- (id)initWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 input:(id)arg2 timeStamp:(id)arg3 type:(id)arg4;
- (id)initWithHeatMap:(id)arg1 width:(long long)arg2 height:(long long)arg3 bytesPerRow:(long long)arg4 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg5 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg6 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg7 optionalInfoDict:(id)arg8 originalMetadataObject:(id)arg9 sourceCaptureInput:(id)arg10;
- (long long)width;

@end
