
@interface PaperKit.ShapeEditingControl : UIView <UIPopoverPresentationControllerDelegate> {
    void button;
    void controlHeight;
    void controlWidth;
    void label;
    void nonDynamicButtonBackgroundColor;
    void smallerControlWidth;
}

@property (nonatomic) bool userInteractionEnabled;

- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isUserInteractionEnabled;
- (void)setUserInteractionEnabled:(bool)arg1;

@end
