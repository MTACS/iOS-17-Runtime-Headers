
@interface VCPPreAnalysisImage : NSObject {
    NSMutableDictionary * _scaledPixelBuffers;
    struct CF<__CVBuffer *> { 
        struct __CVBuffer {} *value_; 
    }  _sourcePixelBuffer;
}

@property (nonatomic, readonly) struct __CVBuffer { }*sourcePixelBuffer;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1;
- (int)pixelBuffer:(struct __CVBuffer {}**)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3;
- (int)preWarmWidth:(unsigned long long)arg1 andHeight:(unsigned long long)arg2;
- (struct __CVBuffer { }*)sourcePixelBuffer;

@end
