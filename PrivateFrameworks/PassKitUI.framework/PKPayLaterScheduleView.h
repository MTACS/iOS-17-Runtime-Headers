
@interface PKPayLaterScheduleView : UIView {
    PKPayLaterDynamicContentPageItem * _dynamicContentItem;
    NSArray * _horizontalStacks;
    double  _minimimLeadingLabelWidth;
}

@property (nonatomic, retain) PKPayLaterDynamicContentPageItem *dynamicContentItem;

+ (bool)canFormScheduleViewForDynamincContentItem:(id)arg1;

- (void).cxx_destruct;
- (void)_configureView;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isTemplateLayout:(bool)arg2;
- (double)_minimumRequiredWidthForLeadingLabels;
- (id)dynamicContentItem;
- (id)initWithDynamicContentItem:(id)arg1;
- (void)layoutSubviews;
- (void)setDynamicContentItem:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
