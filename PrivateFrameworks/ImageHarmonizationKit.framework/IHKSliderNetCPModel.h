
@interface IHKSliderNetCPModel : NSObject {
    struct CGColorSpace { } * _colorSpace;
    IHKFilterSequence * _filterSequence;
    unsigned long long  _gatingMethod;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    NSDictionary * _info;
    struct shared_ptr<ik::PixelBufferTransfer> { 
        struct PixelBufferTransfer {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _resampler;
    NSArray * _sliderOrder;
    NSDictionary * _sliderSpecs;
}

@property (readonly) struct CGColorSpace { }*colorSpace;
@property (readonly) IHKFilterSequence *filterSequence;
@property unsigned long long gatingMethod;
@property (readonly) struct CGSize { double x1; double x2; } imageSize;
@property (retain) NSDictionary *info;
@property (readonly) NSArray *sliderOrder;
@property (readonly) NSDictionary *sliderSpecs;

+ (id)loadJSonFrom:(id)arg1;
+ (id)loadModelAtPath:(id)arg1;
+ (id)loadModelAtPath:(id)arg1 options:(id)arg2 error:(id*)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)applyAdjustments:(id)arg1 toCIImage:(id)arg2 error:(id*)arg3;
- (bool)checkColorspaceForPixelBuffer:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
- (struct CGColorSpace { }*)colorSpace;
- (id)computeClipEmbeddingForImage:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
- (struct CGColorSpace { }*)extractColorSpaceFromInfo:(id)arg1;
- (id)filterSequence;
- (unsigned long long)gatingMethod;
- (float)gatingScoreForStyleVector:(id)arg1 contentVector:(id)arg2;
- (float)gatingScoreForStyleVector:(id)arg1 contentVector:(id)arg2 error:(id*)arg3;
- (float)gatingScoreToTransferStyleFrom:(id)arg1 to:(id)arg2 error:(id*)arg3;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)info;
- (id)initWithModel:(id)arg1;
- (id)initWithModel:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)initWithModelType:(unsigned long long)arg1;
- (id)initWithModelType:(unsigned long long)arg1 options:(id)arg2 error:(id*)arg3;
- (bool)pixelBufferShapesMatchRequirement:(struct __CVBuffer { }*)arg1;
- (id)predictContentVectorForPixelBuffer:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
- (id)predictContentVectorForPixelBuffer:(struct __CVBuffer { }*)arg1 scenePrint:(id)arg2 error:(id*)arg3;
- (id)predictSlidersForStyleVector:(id)arg1 contentVector:(id)arg2 error:(id*)arg3;
- (id)predictSlidersToTransferStyleFrom:(id)arg1 to:(id)arg2 error:(id*)arg3;
- (id)predictStylePrintForPixelBuffer:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
- (id)predictStylePrintForPixelBuffer:(struct __CVBuffer { }*)arg1 scenePrint:(id)arg2 error:(id*)arg3;
- (id)predictStyleVectorForPixelBuffer:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
- (id)predictStyleVectorForPixelBuffer:(struct __CVBuffer { }*)arg1 scenePrint:(id)arg2 error:(id*)arg3;
- (struct __CVBuffer { }*)preprocessPixelBuffer:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
- (struct PixelBufferTensor { int (**x1)(); int x2; struct TensorShape { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x_1_2_1; unsigned long long *x_1_2_2; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x_3_3_1; } x_1_2_3; } x_3_1_1; } x3; struct shared_ptr<ik::TensorStorage> { struct TensorStorage {} *x_4_1_1; struct __shared_weak_count {} *x_4_1_2; } x4; })preprocessTensor:(struct PixelBufferTensor { int (**x1)(); int x2; struct TensorShape { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x_1_2_1; unsigned long long *x_1_2_2; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x_3_3_1; } x_1_2_3; } x_3_1_1; } x3; struct shared_ptr<ik::TensorStorage> { struct TensorStorage {} *x_4_1_1; struct __shared_weak_count {} *x_4_1_2; } x4; })arg1;
- (unsigned long long)product:(id)arg1;
- (struct shared_ptr<ik::PixelBufferTransfer> { struct PixelBufferTransfer {} *x1; struct __shared_weak_count {} *x2; })resampler;
- (struct __CVBuffer { }*)resizePixelBuffer:(struct __CVBuffer { }*)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2;
- (void)setGatingMethod:(unsigned long long)arg1;
- (void)setInfo:(id)arg1;
- (id)sliderOrder;
- (id)sliderSpecs;
- (bool)useClipEmbedding;

@end
