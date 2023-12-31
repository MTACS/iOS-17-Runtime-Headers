
@interface VideosExtrasCollectionReusableView : UICollectionReusableView {
    NSArray * _borderConstraints;
    UIView * _borderView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _labelInsets;
    MPUContentSizeLayoutConstraint * _textBottomConstraint;
    UILabel * _textLabel;
    NSLayoutConstraint * _textLeftConstraint;
    NSLayoutConstraint * _textRightConstraint;
    MPUContentSizeLayoutConstraint * _textTopConstraint;
}

- (void).cxx_destruct;
- (void)_configureConstraintsForInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)configureForHeaderElement:(id)arg1 headerStyle:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
