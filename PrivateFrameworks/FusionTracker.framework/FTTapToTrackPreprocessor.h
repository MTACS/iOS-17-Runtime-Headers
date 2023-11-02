
@interface FTTapToTrackPreprocessor : NSObject {
    struct shared_ptr<__CVBuffer> { 
        struct __CVBuffer {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _intermediateBuffer;
    void _meanPixel;
    <FTScaling> * _scaler;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct __CVBuffer { }*)bgraPixelBuffer;
- (id)initWithScaler:(id)arg1;
- (void)meanPixel;
- (bool)preprocessBuffer:(struct __CVBuffer { }*)arg1;

@end
