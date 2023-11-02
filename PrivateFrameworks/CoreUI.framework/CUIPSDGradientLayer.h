
@interface CUIPSDGradientLayer : CUIPSDLayer {
    CUIPSDGradient * _gradient;
}

@property (nonatomic, readonly) CUIPSDGradient *gradient;

- (void)dealloc;
- (id)gradient;
- (id)initWithGradient:(id)arg1;

@end
