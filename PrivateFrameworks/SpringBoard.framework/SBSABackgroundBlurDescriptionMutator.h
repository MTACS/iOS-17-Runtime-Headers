
@interface SBSABackgroundBlurDescriptionMutator : NSObject {
    SBSABackgroundBlurDescription * _backgroundBlurDescription;
}

@property (nonatomic, readonly) SBSABackgroundBlurDescription *backgroundBlurDescription;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } blurFrame;
@property (getter=isBlurHidden, nonatomic) bool blurHidden;

- (void).cxx_destruct;
- (id)backgroundBlurDescription;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })blurFrame;
- (id)description;
- (id)initWithBackgroundBlurDescription:(id)arg1;
- (bool)isBlurHidden;
- (void)setBlurFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBlurHidden:(bool)arg1;

@end
