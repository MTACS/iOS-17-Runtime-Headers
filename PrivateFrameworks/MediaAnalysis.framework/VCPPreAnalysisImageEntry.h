
@interface VCPPreAnalysisImageEntry : NSObject {
    unsigned long long  _count;
    struct CF<__CVBuffer *> { 
        struct __CVBuffer {} *value_; 
    }  _pixelBuffer;
}

@property (nonatomic) unsigned long long count;
@property (nonatomic, readonly) struct __CVBuffer { }*pixelBuffer;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)dealloc;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1;
- (struct __CVBuffer { }*)pixelBuffer;
- (void)setCount:(unsigned long long)arg1;

@end
