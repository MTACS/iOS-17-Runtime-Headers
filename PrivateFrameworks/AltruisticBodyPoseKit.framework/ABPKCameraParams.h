
@interface ABPKCameraParams : NSObject {
    long long  _deviceOrientation;
    long long  _deviceType;
    void _distortion;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _extrinsics;
    struct CGSize { 
        double width; 
        double height; 
    }  _inputRes;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _intrinsics;
    bool  _isImageRectified;
}

@property long long deviceOrientation;
@property long long deviceType;
@property void distortion;
@property struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } extrinsics;
@property struct CGSize { double x1; double x2; } inputRes;
@property struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } intrinsics;
@property bool isImageRectified;

- (void)checkAndSetApproximateIntrinsics;
- (long long)deviceOrientation;
- (long long)deviceType;
- (void)distortion;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })extrinsics;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIntrinsics:(void *)arg1 andExtrinsics:(void *)arg2 andDistortion:(void *)arg3; // needs 3 arg types, found 2: struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }
- (id)initWithIntrinsics:(void *)arg1 andExtrinsics:(void *)arg2 andDistortion:(void *)arg3 andInputResolution:(void *)arg4; // needs 4 arg types, found 3: struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }, struct CGSize { double x1; double x2; }
- (struct CGSize { double x1; double x2; })inputRes;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })intrinsics;
- (bool)isImageRectified;
- (bool)isMatrixIdentity:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setDeviceOrientation:(long long)arg1;
- (void)setDeviceType:(long long)arg1;
- (void)setDistortion;
- (void)setExtrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setInputRes:(struct CGSize { double x1; double x2; })arg1;
- (void)setIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setIsImageRectified:(bool)arg1;
- (id)toDict;

@end
