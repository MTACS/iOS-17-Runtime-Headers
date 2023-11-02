
@interface MLPixelBufferPool : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cacheLock;
    NSMutableDictionary * _pixelBufferPoolCache;
}

@property (nonatomic, readonly) NSMutableDictionary *pixelBufferPoolCache;

- (void).cxx_destruct;
- (struct __CVPixelBufferPool { }*)_pixelBufferPoolWithSize:(struct CGSize { double x1; double x2; })arg1 pixelFormatType:(unsigned int)arg2 error:(id*)arg3;
- (struct __CVBuffer { }*)createPixelBufferWithSize:(struct CGSize { double x1; double x2; })arg1 pixelFormatType:(unsigned int)arg2 error:(id*)arg3;
- (id)init;
- (id)pixelBufferPoolCache;

@end
