
@interface RemoteUITableViewSubtitleAndValueCell : RemoteUITableViewCell {
    UILabel * _detailLabel;
    RUIWebContainerView * _htmlSublabelContainer;
    NSLayoutConstraint * _imageConstraint;
    NSLayoutConstraint * _leadingConstraint;
    UILabel * _titleLabel;
    UILabel * _valueLabel;
}

- (void).cxx_destruct;
- (void)_setUpViews;
- (void)_updateLeadingConstraint;
- (id)detailTextLabel;
- (id)effectiveDetailTextLabel;
- (id)effectiveValueTextLabel;
- (void)setBackgroundColor:(id)arg1;
- (void)setHTMLSubLabelData:(id)arg1 sourceURL:(id)arg2 delegate:(id)arg3;
- (void)setImage:(id)arg1;
- (void)setImage:(id)arg1 padding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 tintColor:(id)arg3;
- (id)textLabel;
- (id)valueLabel;

@end
