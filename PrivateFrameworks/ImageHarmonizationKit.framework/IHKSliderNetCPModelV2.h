
@interface IHKSliderNetCPModelV2 : IHKSliderNetCPModel {
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
    NSString * _stemType;
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
@property (retain) NSString *stemType;
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
- (struct CGSize { double x1; double x2; })imageSize;
- (id)initWithModel:(id)arg1;
- (id)initWithModel:(id)arg1 options:(id)arg2 error:(id*)arg3;
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
- (void)setStemType:(id)arg1;
- (void)setStyleFVecEndpoint:(id)arg1;
- (void)setStyleFVecShape:(id)arg1;
- (id)sliderOrder;
- (id)sliderSpecs;
- (id)stemType;
- (id)styleFVecEndpoint;
- (id)styleFVecShape;
- (unsigned long long)styleFVecSize;

@end
