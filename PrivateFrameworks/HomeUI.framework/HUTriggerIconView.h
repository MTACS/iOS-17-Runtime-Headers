
@interface HUTriggerIconView : UIView {
    NSArray * _constraints;
    HUIconView * _iconView;
}

@property (nonatomic, retain) NSArray *constraints;
@property (nonatomic, retain) HUIconView *iconView;

- (void).cxx_destruct;
- (id)constraints;
- (id)iconView;
- (id)initWithIconDescriptor:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setConstraints:(id)arg1;
- (void)setIconView:(id)arg1;

@end
