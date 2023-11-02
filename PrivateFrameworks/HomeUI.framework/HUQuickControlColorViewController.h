
@interface HUQuickControlColorViewController : HUQuickControlSingleControlViewController <HUQuickControlColorInteractionCoordinatorDelegate> {
    HUQuickControlColorViewController * _colorViewController;
    unsigned long long  _mode;
    HUQuickControlColorViewController * _presentingColorViewController;
    NSIndexPath * _selectedColorIndexPath;
}

@property (nonatomic, retain) HUQuickControlColorViewController *colorViewController;
@property (nonatomic, readonly) HFColorControlItem *controlItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) HUQuickControlColorViewController *presentingColorViewController;
@property (nonatomic, retain) NSIndexPath *selectedColorIndexPath;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HUQuickControlColorViewProfile *viewProfile;

+ (Class)controlItemClass;

- (void).cxx_destruct;
- (unsigned long long)_paletteType;
- (void)cancelButtonTapped;
- (id)colorViewController;
- (id)controlToViewValueTransformer;
- (id)createInteractionCoordinator;
- (id)createViewProfile;
- (void)didSelectColorAtIndexPath:(id)arg1;
- (void)doneButtonTapped;
- (void)interactionCoordinator:(id)arg1 colorPaletteDidChange:(id)arg2;
- (void)interactionCoordinator:(id)arg1 didSelectColorAtIndexPath:(id)arg2;
- (void)interactionCoordinator:(id)arg1 viewValueDidChange:(id)arg2;
- (unsigned long long)mode;
- (id)overrideStatusText;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)presentFullColorViewForInteractionCoordinator:(id)arg1 selectedColorIndexPath:(id)arg2;
- (id)presentingColorViewController;
- (void)quickControlItemUpdater:(id)arg1 didUpdateResultsForControlItems:(id)arg2;
- (id)selectedColorIndexPath;
- (void)setColorViewController:(id)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setPresentingColorViewController:(id)arg1;
- (void)setSelectedColorIndexPath:(id)arg1;
- (void)updateValueFromControlItem;

@end
