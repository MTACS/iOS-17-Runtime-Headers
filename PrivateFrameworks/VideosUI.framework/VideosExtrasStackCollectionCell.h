
@interface VideosExtrasStackCollectionCell : UICollectionViewCell {
    NSArray * _fitConstraints;
    bool  _needsViewWillAppear;
    VideosExtrasStackTemplateViewController * _parentViewController;
    VideosExtrasGridSectionHeaderStyle * _sectionStyle;
    VideosExtrasGridElementViewController * _viewController;
}

@property (nonatomic, retain) VideosExtrasStackTemplateViewController *parentViewController;
@property (nonatomic, readonly) VideosExtrasGridSectionHeaderStyle *sectionStyle;
@property (nonatomic, retain) VideosExtrasGridElementViewController *viewController;

- (void).cxx_destruct;
- (id)parentViewController;
- (id)sectionStyle;
- (void)setParentViewController:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)viewController;
- (void)willMoveToSuperview:(id)arg1;

@end
