
@interface ICCollaboratorSelectionView : UIImageView {
    void color;
    void kind;
}

@property (nonatomic) bool isAccessibilityElement;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithImage:(id)arg1;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2;
- (bool)isAccessibilityElement;
- (void)setIsAccessibilityElement:(bool)arg1;

@end
