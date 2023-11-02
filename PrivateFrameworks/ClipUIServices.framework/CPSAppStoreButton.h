
@interface CPSAppStoreButton : CPSButton {
    UIStackView * _fullSizeStack;
    UIStackView * _glyphOnlyStack;
    struct CGSize { 
        double width; 
        double height; 
    }  _intrinsicContentSize;
    bool  _intrinsicContentSizeIsValid;
    UILabel * _label;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastLayoutBounds;
}

- (void).cxx_destruct;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (void)layoutSubviews;
- (void)setHighlighted:(bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
