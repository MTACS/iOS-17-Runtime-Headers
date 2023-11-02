
@interface PXPhotosensitivityProcessing : NSObject {
    bool  _forceEnable;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    struct __CVPixelBufferPool { } * _lock_pool;
    struct CGSize { 
        double width; 
        double height; 
    }  _lock_poolSize;
    PSEVideoProcessor * _lock_processor;
}

@property (nonatomic) bool forceEnable;
@property (nonatomic, readonly) PSEVideoProcessor *lock_processor;

+ (bool)isSupported;

- (void).cxx_destruct;
- (struct __CVPixelBufferPool { }*)_lock_poolForSize:(struct CGSize { double x1; double x2; })arg1;
- (struct __CVBuffer { }*)_lock_processPixelBuffer:(struct __CVBuffer { }*)arg1 timestamp:(double)arg2;
- (struct __CVBuffer { }*)copyAndProcessPixelBuffer:(struct __CVBuffer { }*)arg1 timestamp:(double)arg2;
- (void)dealloc;
- (bool)forceEnable;
- (id)init;
- (id)lock_processor;
- (void)setForceEnable:(bool)arg1;

@end
