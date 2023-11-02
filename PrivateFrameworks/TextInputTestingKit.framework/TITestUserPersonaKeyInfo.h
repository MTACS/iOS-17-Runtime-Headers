
@interface TITestUserPersonaKeyInfo : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _center;
    TIGaussianErrorGenerator * _errorGenerator;
    TIFitAffineMLLMatrixWrapper * _rotationMatrix;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } center;
@property (nonatomic, retain) TIGaussianErrorGenerator *errorGenerator;
@property (nonatomic, retain) TIFitAffineMLLMatrixWrapper *rotationMatrix;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })center;
- (id)description;
- (id)errorGenerator;
- (id)rotationMatrix;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setErrorGenerator:(id)arg1;
- (void)setRotationMatrix:(id)arg1;

@end
