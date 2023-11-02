
@interface PUPhotoEditButtonCenteredToolbar : PUPhotoEditToolbar {
    UILayoutGuide * _buttonAreaLayoutGuide;
    NSArray * _centerLayoutConstraints;
    UIView * _centerView;
    NSArray * _leadingLayoutConstraints;
    NSArray * _leadingViews;
    NSArray * _trailingLayoutConstraints;
    NSArray * _trailingViews;
}

@property (nonatomic, retain) UILayoutGuide *buttonAreaLayoutGuide;
@property (nonatomic, readonly) double interItemSpacing;

- (void).cxx_destruct;
- (void)_addCenterConstraintsWithMetrics:(id)arg1 verticalLayout:(bool)arg2;
- (void)_addLeadingConstraintsWithMetrics:(id)arg1 verticalLayout:(bool)arg2;
- (void)_addTrailingConstraintsWithMetrics:(id)arg1 verticalLayout:(bool)arg2;
- (void)_invalidateAllConstraints;
- (id)buttonAreaLayoutGuide;
- (double)interItemSpacing;
- (void)setButtonAreaLayoutGuide:(id)arg1;
- (void)setCenterView:(id)arg1 leadingViews:(id)arg2 trailingViews:(id)arg3;

@end
