
@interface OBPasscodeFieldDot : UIView {
    bool  _filled;
}

@property (getter=isFilled, nonatomic) bool filled;

- (void)_updateView;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isFilled;
- (void)setFilled:(bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
