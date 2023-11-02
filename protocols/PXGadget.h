
@protocol PXGadget <NSObject>

@required

- (<PXGadgetDelegate> *)delegate;
- (unsigned long long)gadgetCapabilities;
- (PXGadgetSpec *)gadgetSpec;
- (unsigned long long)gadgetType;
- (void)setDelegate:(id <PXGadgetDelegate>)arg1;
- (void)setGadgetSpec:(PXGadgetSpec *)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@optional

- (NSString *)accessoryButtonTitle;
- (unsigned long long)accessoryButtonType;
- (Class)collectionViewItemClass;
- (void)commitPreviewView:(UIView *)arg1;
- (void)commitPreviewViewController:(UIViewController *)arg1;
- (void)contentHasBeenSeen;
- (NSObject<PXAnonymousView> *)contentView;
- (NSObject<PXAnonymousViewController> *)contentViewController;
- (void)contentViewDidDisappear;
- (void)contentViewWillAppear;
- (UIMenu *)contextMenuWithSuggestedActions:(NSArray *)arg1;
- (NSArray *)debugURLsForDiagnostics;
- (void)didDismissPreviewViewController:(UIViewController *)arg1 committing:(bool)arg2;
- (void)didDismissPreviewWithPreviewView:(UIView *)arg1 committing:(bool)arg2;
- (void)gadgetControllerHasAppeared;
- (void)gadgetControllerHasDisappeared;
- (void)gadgetWasDismissed;
- (unsigned long long)headerStyle;
- (NSString *)localizedTitle;
- (void)prefetchDuringScrollingForWidth:(double)arg1;
- (void)preloadResources;
- (void)prepareCollectionViewItem:(UICollectionViewCell *)arg1;
- (UIPreviewParameters *)previewParametersForTargetPreviewView:(UIView *)arg1;
- (NSObject<PXAnonymousViewController> *)previewViewControllerAtLocation:(struct CGPoint { double x1; double x2; })arg1 fromSourceView:(NSObject<PXAnonymousView> *)arg2;
- (long long)priority;
- (void)removeCollectionViewItem:(UICollectionViewCell *)arg1;
- (void)setPriority:(long long)arg1;
- (void)setVisibleContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (NSObject<PXAnonymousView> *)targetPreviewViewForLocation:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id <UICoordinateSpace>)arg2;
- (NSString *)uniqueGadgetIdentifier;
- (void)userDidSelectAccessoryButton:(NSObject<PXAnonymousView> *)arg1;
- (void)userDidSelectGadget;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleContentRect;
- (bool)wantsMultilineTitle;

@end
