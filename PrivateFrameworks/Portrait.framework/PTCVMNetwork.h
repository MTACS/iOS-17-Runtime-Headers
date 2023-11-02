
@interface PTCVMNetwork : NSObject {
    <MTLTexture> * _disparityInOut;
    PTEffectUtil * _effectUtil;
    PTEspressoGenericExecutor * _executor;
    int  _frameId;
    long long  _frameIndex;
    int  _inDispIndex;
    <MTLTexture> * _inRGBA;
    struct __CVBuffer { } * _inRGBAAppleDepthRunner;
    NSString * _inRGBAName;
    <MTLTexture> * _inRGBARotated;
    struct __CVBuffer { } * _inTemporalDisparityAppleDepthRunner;
    struct __CVBuffer { } * _inputPixelBuffer;
    PTMetalContext * _metalContext;
    int  _networkVersionID;
    int  _outDispIndex;
    struct __CVBuffer { } * _outDisparityAppleDepthRunner;
    <MTLTexture> * _outDisparityRotated;
    NSString * _reinjectDisparity;
    bool  _useHighResNetwork;
    PTUtil * _util;
}

+ (id)lastNetworkVersion;

- (void).cxx_destruct;
- (void)bindColorInputPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)dealloc;
- (void)dumpNetworkInputWithDefaults:(id)arg1;
- (void)dumpNetworkOutputWithDefaults:(id)arg1;
- (unsigned int)executeNetwork:(long long)arg1;
- (unsigned long long)getLayoutFromSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (bool)highResNetwork;
- (id)inPrevDisparity;
- (id)inRGBA;
- (id)initWithMetalContext:(id)arg1 colorSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2 effectUtil:(id)arg3 util:(id)arg4 useHighResNetwork:(bool)arg5 sharedResources:(id)arg6;
- (int)networkVersionID;
- (id)networkVersionString;
- (id)outDisparity;
- (void)reset;
- (bool)rotated;

@end
