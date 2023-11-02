
@interface SBHFocusModeFeatureIntroductionItem : SBHFeatureIntroductionItem <SBHFocusModePopoverViewDelegate> {
    NSMutableSet * _focusModePopoverViews;
    SBHIconManager * _iconManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableSet *focusModePopoverViews;
@property (readonly) unsigned long long hash;
@property (nonatomic) SBHIconManager *iconManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_removeActiveFocusModeRequiringIntroduction;
- (void)_tearDownFocusModePopoverView:(id)arg1;
- (void)displayFeatureIntroductionAtLocations:(unsigned long long)arg1 presentCompletion:(id /* block */)arg2 dismissCompletion:(id /* block */)arg3;
- (id)featureIntroductionIdentifier;
- (void)focusModePopoverView:(id)arg1 closeButtonTappedForIconListView:(id)arg2;
- (void)focusModePopoverView:(id)arg1 editPageButtonTappedForIconListView:(id)arg2;
- (id)focusModePopoverViewActiveFocusMode:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })focusModePopoverViewFolderScrollAccessoryFrame:(id)arg1;
- (id)focusModePopoverViews;
- (id)iconManager;
- (id)initWithIconManager:(id)arg1;
- (void)setFocusModePopoverViews:(id)arg1;
- (void)setIconManager:(id)arg1;
- (void)setupFeatureIntroductionAtLocations:(unsigned long long)arg1;
- (bool)shouldDisplayFeatureIntroductionAtLocations:(unsigned long long)arg1;
- (void)tearDown;

@end
