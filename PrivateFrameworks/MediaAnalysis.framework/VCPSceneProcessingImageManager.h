
@interface VCPSceneProcessingImageManager : NSObject {
    NSMutableDictionary * _pixelBufferPools;
}

+ (id)imageManager;

- (void).cxx_destruct;
- (int)_createPixelBuffer:(struct __CVBuffer {}**)arg1 withColorSpace:(struct CGColorSpace { }*)arg2 fromPixelBuffer:(struct __CVBuffer { }*)arg3;
- (int)_createPixelBuffer:(struct __CVBuffer {}**)arg1 withMinorDimension:(unsigned long long)arg2 fromFullPixelBuffer:(struct __CVBuffer { }*)arg3;
- (int)_createPixelBuffer:(struct __CVBuffer {}**)arg1 withWidth:(unsigned long long)arg2 andHeight:(unsigned long long)arg3;
- (int)_pooledPixelBuffer:(struct __CVBuffer {}**)arg1 withDimension:(unsigned long long)arg2;
- (void)dealloc;
- (int)fullPixelBuffer:(struct __CVBuffer { }*)arg1 toScaledBuffer:(struct __CVBuffer { }*)arg2;
- (id)init;
- (int)loadFullPixelBuffer:(struct __CVBuffer {}**)arg1 scaledPixelBuffer299:(struct __CVBuffer {}**)arg2 scaledPixelBuffer360:(struct __CVBuffer {}**)arg3 fromImageURL:(id)arg4 abnormalDimension:(unsigned long long)arg5;
- (int)scalePixelBuffer:(struct __CVBuffer { }*)arg1 toPixelBuffer:(struct __CVBuffer {}**)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;

@end
