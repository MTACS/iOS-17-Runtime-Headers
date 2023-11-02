
@interface PMLGradientResults : NSObject {
    PMLMutableDenseVector * _gradient;
    NSNumber * _loss;
}

@property (nonatomic, readonly) PMLMutableDenseVector *gradient;
@property (nonatomic, readonly) NSNumber *loss;

- (void).cxx_destruct;
- (id)gradient;
- (id)initWithGradient:(id)arg1 loss:(id)arg2;
- (id)loss;

@end
