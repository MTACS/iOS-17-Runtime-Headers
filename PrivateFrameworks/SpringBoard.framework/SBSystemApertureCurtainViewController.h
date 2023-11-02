
@interface SBSystemApertureCurtainViewController : UIViewController <SBSystemApertureCurtainViewHoster> {
    UIView * _curtainView;
    _UIPortalView * _indicatorPortalView;
}

@property (nonatomic, retain) UIView *curtainView;
@property (nonatomic) UIView *indicatorSourceView;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_indicatorPortalView;
- (id)curtainView;
- (id)indicatorSourceView;
- (void)setCurtainView:(id)arg1;
- (void)setIndicatorSourceView:(id)arg1;
- (void)viewDidLoad;

@end
