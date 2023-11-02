
@interface PUReviewScreenDoneButton : UIButton {
    bool  __needsUpdate;
    unsigned long long  _preferredStyle;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _tappableEdgeInsets;
}

@property (nonatomic) bool _needsUpdate;
@property (nonatomic) unsigned long long preferredStyle;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } tappableEdgeInsets;

+ (id)doneButton;

- (bool)_needsUpdate;
- (void)_updateIfNeeded;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (unsigned long long)preferredStyle;
- (void)setPreferredStyle:(unsigned long long)arg1;
- (void)setTappableEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)set_needsUpdate:(bool)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })tappableEdgeInsets;

@end
