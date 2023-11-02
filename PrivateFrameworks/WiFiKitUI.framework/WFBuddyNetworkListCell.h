
@interface WFBuddyNetworkListCell : WFNetworkListCell {
    NSLayoutConstraint * _bottomLabelConstraint;
    NSLayoutConstraint * _topLabelConstraint;
    NSLayoutConstraint * _trailingImageViewConstraint;
}

@property (nonatomic) NSLayoutConstraint *bottomLabelConstraint;
@property (nonatomic) NSLayoutConstraint *topLabelConstraint;
@property (nonatomic) NSLayoutConstraint *trailingImageViewConstraint;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)bottomLabelConstraint;
- (void)layoutSubviews;
- (void)setBottomLabelConstraint:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTopLabelConstraint:(id)arg1;
- (void)setTrailingImageViewConstraint:(id)arg1;
- (id)topLabelConstraint;
- (id)trailingImageViewConstraint;

@end
