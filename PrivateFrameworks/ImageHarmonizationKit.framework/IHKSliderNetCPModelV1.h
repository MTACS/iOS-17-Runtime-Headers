
@interface IHKSliderNetCPModelV1 : IHKSliderNetCPModel {
    NSArray * _adjustmentEndpoints;
    struct CGColorSpace { } * _colorSpace;
    NSString * _contentFVecEndpoint;
    NSArray * _contentFVecShape;
    IHKFilterSequence * _filterSequence;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    NSArray * _sliderOrder;
    NSDictionary * _sliderSpecs;
    NSString * _styleFVecEndpoint;
    NSArray * _styleFVecShape;
    struct shared_ptr<ik::EspressoNet> { 
        struct EspressoNet {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  contentFVecNet;
    struct shared_ptr<ik::EspressoNet> { 
        struct EspressoNet {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  styleFVecNet;
    struct shared_ptr<ik::EspressoNet> { 
        struct EspressoNet {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  styleTransferNet;
}

@property (retain) NSArray *adjustmentEndpoints;
@property struct CGColorSpace { }*colorSpace;
@property (retain) NSString *contentFVecEndpoint;
@property (retain) NSArray *contentFVecShape;
@property (retain) IHKFilterSequence *filterSequence;
@property struct CGSize { double x1; double x2; } imageSize;
@property (retain) NSArray *sliderOrder;
@property (retain) NSDictionary *sliderSpecs;
@property (retain) NSString *styleFVecEndpoint;
@property (retain) NSArray *styleFVecShape;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)adjustmentEndpoints;
- (id)applyAdjustments:(id)arg1 toCIImage:(id)arg2 error:(id*)arg3;
- (struct CGColorSpace { }*)colorSpace;
- (id)contentFVecEndpoint;
- (id)contentFVecShape;
- (unsigned long long)contentFVecSize;
- (id)filterSequence;
- (id)getValueForAdjustment:(id)arg1 adjustments:(id)arg2;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)initWithModel:(id)arg1;
- (id)initWithModel:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (struct EspressoTensor { int (**x1)(); int x2; struct TensorShape { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x_1_2_1; unsigned long long *x_1_2_2; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x_3_3_1; } x_1_2_3; } x_3_1_1; } x3; struct shared_ptr<ik::TensorStorage> { struct TensorStorage {} *x_4_1_1; struct __shared_weak_count {} *x_4_1_2; } x4; })newTensorWithCorrectShape:(struct EspressoTensor { int (**x1)(); int x2; struct TensorShape { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x_1_2_1; unsigned long long *x_1_2_2; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x_3_3_1; } x_1_2_3; } x_3_1_1; } x3; struct shared_ptr<ik::TensorStorage> { struct TensorStorage {} *x_4_1_1; struct __shared_weak_count {} *x_4_1_2; } x4; })arg1 shape:(id)arg2;
- (id)predictContentVectorForPixelBuffer:(struct __CVBuffer { }*)arg1 scenePrint:(id)arg2 error:(id*)arg3;
- (id)predictSlidersForStyleVector:(id)arg1 contentVector:(id)arg2 error:(id*)arg3;
- (id)predictStyleVectorForPixelBuffer:(struct __CVBuffer { }*)arg1 scenePrint:(id)arg2 error:(id*)arg3;
- (void)setAdjustmentEndpoints:(id)arg1;
- (void)setColorSpace:(struct CGColorSpace { }*)arg1;
- (void)setContentFVecEndpoint:(id)arg1;
- (void)setContentFVecShape:(id)arg1;
- (void)setFilterSequence:(id)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSliderOrder:(id)arg1;
- (void)setSliderSpecs:(id)arg1;
- (void)setStyleFVecEndpoint:(id)arg1;
- (void)setStyleFVecShape:(id)arg1;
- (id)sliderOrder;
- (id)sliderSpecs;
- (id)styleFVecEndpoint;
- (id)styleFVecShape;
- (unsigned long long)styleFVecSize;

@end
