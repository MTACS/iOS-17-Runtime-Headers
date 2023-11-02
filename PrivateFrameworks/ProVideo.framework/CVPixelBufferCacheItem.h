
@interface CVPixelBufferCacheItem : NSObject {
    NSArray * _DODs;
    NSArray * _buffers;
    PVColorSpace * _colorSpace;
    struct CGSize { 
        double width; 
        double height; 
    }  _fullSize;
}

@property (nonatomic, readonly) NSArray *DODs;
@property (nonatomic, readonly) NSArray *buffers;
@property (nonatomic, readonly) PVColorSpace *colorSpace;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } fullSize;

- (void).cxx_destruct;
- (id)DODs;
- (id)buffers;
- (id)colorSpace;
- (struct CGSize { double x1; double x2; })fullSize;
- (id)initWithCVPixelBuffers:(id)arg1 DODs:(id)arg2 fullSize:(struct CGSize { double x1; double x2; })arg3 colorSpace:(id)arg4;

@end
