
@interface MCProfileTitlePageMetaDataSectionAnimationController : NSObject <MCUIScrollAnimationResponder> {
    UIView * _iconView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _iconViewOriginFrame;
    UIView * _orgView;
    MCProfileTitlePageMetaDataSectionController * _sectionController;
    UIView * _subtitleView;
    UITableView * _tableView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _titleLabelOriginFrame;
    UIView * _titleView;
    UIView * _topBar;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIView *iconView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } iconViewOriginFrame;
@property (nonatomic) UIView *orgView;
@property (nonatomic) MCProfileTitlePageMetaDataSectionController *sectionController;
@property (nonatomic) UIView *subtitleView;
@property (readonly) Class superclass;
@property (nonatomic) UITableView *tableView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } titleLabelOriginFrame;
@property (nonatomic) UIView *titleView;
@property (nonatomic) UIView *topBar;

- (void).cxx_destruct;
- (double)_alphaWithProgress:(double)arg1 keys:(id)arg2 values:(id)arg3;
- (void)_animateView:(id)arg1 progress:(double)arg2 startFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 endY:(double)arg4 endScale:(double)arg5 extraYOffset:(double)arg6;
- (unsigned long long)_binarySearch:(id)arg1 target:(double)arg2;
- (bool)_putBackViewIfNeeded:(id)arg1 toView:(id)arg2;
- (bool)_relocateViewIfNeeded:(id)arg1 fromView:(id)arg2 toView:(id)arg3;
- (id)iconView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })iconViewOriginFrame;
- (id)orgView;
- (id)sectionController;
- (void)setIconView:(id)arg1;
- (void)setIconViewOriginFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOrgView:(id)arg1;
- (void)setSectionController:(id)arg1;
- (void)setSubtitleView:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setTitleLabelOriginFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTitleView:(id)arg1;
- (void)setTopBar:(id)arg1;
- (void)startTrackingWithMetaDataSectionController:(id)arg1 topBar:(id)arg2;
- (id)subtitleView;
- (id)tableView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleLabelOriginFrame;
- (id)titleView;
- (id)topBar;
- (void)updateProgressWithTranslationDistance:(double)arg1 referenceDistance:(double)arg2 isScrolling:(bool)arg3;

@end
