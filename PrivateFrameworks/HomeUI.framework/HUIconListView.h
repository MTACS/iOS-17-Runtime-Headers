
@interface HUIconListView : UIView {
    NSArray * _iconDescriptors;
    NSMutableArray * _iconViews;
}

@property (nonatomic, retain) NSArray *iconDescriptors;
@property (nonatomic, retain) NSMutableArray *iconViews;

- (void).cxx_destruct;
- (void)_addIconNamed:(id)arg1;
- (void)_addIconWithDescriptor:(id)arg1;
- (void)_layoutLeftToRight;
- (void)_layoutRightToLeft;
- (void)_prepareIconArray;
- (void)_setUpIcons;
- (id)iconDescriptors;
- (id)iconViews;
- (id)init;
- (void)layoutSubviews;
- (void)setIconDescriptors:(id)arg1;
- (void)setIconViews:(id)arg1;

@end
