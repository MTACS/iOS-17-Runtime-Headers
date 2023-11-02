
@interface FRCScaler : NSObject {
    struct __IOSurfaceAccelerator { } * _scaler;
}

- (void)dealloc;
- (void)downScaleFrameSource:(struct __CVBuffer { }*)arg1 destination:(struct __CVBuffer { }*)arg2 rotate:(long long)arg3 waitForCompletion:(bool)arg4;
- (id)init;
- (void)scaleFrameSource:(struct __CVBuffer { }*)arg1 destination:(struct __CVBuffer { }*)arg2 cropRectangles:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; }*)arg3 upscale:(bool)arg4 rotate:(long long)arg5 waitForCompletion:(bool)arg6;
- (void)upScaleAndCropFrameSource:(struct __CVBuffer { }*)arg1 destination:(struct __CVBuffer { }*)arg2 upscale:(bool)arg3 rotate:(long long)arg4 waitForCompletion:(bool)arg5;

@end
