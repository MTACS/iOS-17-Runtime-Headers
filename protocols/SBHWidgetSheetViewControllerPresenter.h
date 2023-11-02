
@protocol SBHWidgetSheetViewControllerPresenter <NSObject>

@required

- (bool)isDisplayingEditingButtons;
- (unsigned long long)presenterType;
- (void)setSuppressesEditingStateForListView:(bool)arg1;
- (void)setTitledButtonsAlpha:(double)arg1;
- (double)titledButtonsAlpha;
- (void)updateExtraButtonVisibilityAnimated:(bool)arg1;

@optional

- (bool)cannotRemoveLastWidgetInWidgetSheet;
- (long long)overrideUserInterfaceStyleForPresentingWidgetSheet;

@end
