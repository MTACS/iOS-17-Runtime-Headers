
@interface SBSystemApertureSceneElementPlaceholderWrapperView : UIView {
    UIView * _contentView;
    <SBSystemApertureSceneElementPlaceholderWrapperViewDelegate> * _delegate;
}

@property (nonatomic, retain) UIView *contentView;
@property (nonatomic) <SBSystemApertureSceneElementPlaceholderWrapperViewDelegate> *delegate;

- (void).cxx_destruct;
- (bool)allowsReparentingByLayoutHost;
- (id)contentView;
- (id)delegate;
- (id)initWithContentView:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setContentView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
