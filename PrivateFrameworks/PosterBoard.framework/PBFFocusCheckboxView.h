
@interface PBFFocusCheckboxView : UIView {
    NSString * _associatedPosterIdentifier;
    _TtC11PosterBoard13PBFCircleView * _circleView;
    UIImageView * _imageView;
    bool  _on;
}

@property (nonatomic, copy) NSString *associatedPosterIdentifier;
@property (getter=isOn, nonatomic) bool on;

- (void).cxx_destruct;
- (void)_updateAccessibilityAttributes;
- (void)_updateColors;
- (id)associatedPosterIdentifier;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isOn;
- (void)setAssociatedPosterIdentifier:(id)arg1;
- (void)setOn:(bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
