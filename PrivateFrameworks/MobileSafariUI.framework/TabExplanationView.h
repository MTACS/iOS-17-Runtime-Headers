
@interface TabExplanationView : UIView {
    NSArray * _accessibilityHorizontalPaddingConstraints;
    NSArray * _defaultHorizontalPaddingConstraints;
    UIView * _labelsContainer;
    UILabel * _message;
    NSLayoutConstraint * _spaceBetweenTitleAndMessageConstraint;
    UILabel * _title;
    unsigned long long  _variant;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } labelsContainerFrame;
@property (nonatomic, readonly) unsigned long long variant;

- (void).cxx_destruct;
- (id)_basicLabel;
- (void)_updateLabelBlendMode;
- (id)initWithVariant:(unsigned long long)arg1 query:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })labelsContainerFrame;
- (void)setQuery:(id)arg1;
- (void)setVariant:(unsigned long long)arg1 query:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (unsigned long long)variant;

@end
