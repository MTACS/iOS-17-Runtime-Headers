
@interface SBHIconShareSheetManager : NSObject {
    UIView * _fakeSourceView;
    SBHIconManager * _iconManager;
    bool  _iconShareSheetsAreHiddenForRotation;
    SBIconView * _iconView;
    SBIcon * _iconWithShareSheetHidingForRotationAnimation;
    NSString * _locationOfIconWithShareSheetHiddenForRotationAnimation;
    bool  _queuedToPresentShareSheet;
    UIViewController * _shareSheetViewController;
}

@property (nonatomic, readonly) bool areAnyAppIconShareSheetsShowing;
@property (nonatomic, retain) UIView *fakeSourceView;
@property (nonatomic) SBHIconManager *iconManager;
@property (nonatomic) bool iconShareSheetsAreHiddenForRotation;
@property (nonatomic) SBIconView *iconView;
@property (nonatomic) SBIcon *iconWithShareSheetHidingForRotationAnimation;
@property (nonatomic, copy) NSString *locationOfIconWithShareSheetHiddenForRotationAnimation;
@property (nonatomic) bool queuedToPresentShareSheet;
@property (nonatomic, retain) UIViewController *shareSheetViewController;

- (void).cxx_destruct;
- (void)_appIconForceTouchControllerDidDismissNotification:(id)arg1;
- (void)_createFakeSourceViewForIconView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_iconViewFrameInScreenCoordinateSpace:(id)arg1;
- (void)_presentShareSheet:(id)arg1 forIconView:(id)arg2;
- (void)_queueShareSheetPresentation:(id)arg1 forIconView:(id)arg2;
- (id)_shareSheetPresentationViewControllerForIconView:(id)arg1;
- (bool)areAnyAppIconShareSheetsShowing;
- (void)dealloc;
- (void)dismissIconShareSheetsIfNecessaryAndCleanUp;
- (id)fakeSourceView;
- (void)hideIconShareSheetsIfAnyForRotationAnimation;
- (id)iconManager;
- (bool)iconShareSheetsAreHiddenForRotation;
- (id)iconView;
- (id)iconWithShareSheetHidingForRotationAnimation;
- (id)initWithIconManager:(id)arg1;
- (id)locationOfIconWithShareSheetHiddenForRotationAnimation;
- (void)presentShareSheetForIconView:(id)arg1;
- (bool)queuedToPresentShareSheet;
- (void)setFakeSourceView:(id)arg1;
- (void)setIconManager:(id)arg1;
- (void)setIconShareSheetsAreHiddenForRotation:(bool)arg1;
- (void)setIconView:(id)arg1;
- (void)setIconWithShareSheetHidingForRotationAnimation:(id)arg1;
- (void)setLocationOfIconWithShareSheetHiddenForRotationAnimation:(id)arg1;
- (void)setQueuedToPresentShareSheet:(bool)arg1;
- (void)setShareSheetViewController:(id)arg1;
- (id)shareSheetViewController;
- (void)showIconShareSheetsIfAnyWereHiddenForRotationAnimation;

@end
