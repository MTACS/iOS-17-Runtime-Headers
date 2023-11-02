
@interface SBSAViewDescriptionMutator : NSObject {
    SBSAViewDescription * _viewDescription;
}

@property (nonatomic) double alpha;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundsVelocity;
@property (nonatomic) struct CGPoint { double x1; double x2; } center;
@property (nonatomic) double cornerRadius;
@property (nonatomic, copy) NSUUID *interfaceElementIdentifier;
@property (nonatomic) struct CGSize { double x1; double x2; } scale;

- (void).cxx_destruct;
- (double)alpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsVelocity;
- (struct CGPoint { double x1; double x2; })center;
- (double)cornerRadius;
- (id)description;
- (id)initWithViewDescription:(id)arg1;
- (id)interfaceElementIdentifier;
- (struct CGSize { double x1; double x2; })scale;
- (void)setAlpha:(double)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBoundsVelocity:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setInterfaceElementIdentifier:(id)arg1;
- (void)setScale:(struct CGSize { double x1; double x2; })arg1;
- (id)viewDescription;

@end
