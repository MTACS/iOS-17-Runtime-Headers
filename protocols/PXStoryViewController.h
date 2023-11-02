
@protocol PXStoryViewController <NSObject>

@required

- (<PXStoryViewControllerDismissalDelegate> *)dismissalDelegate;
- (NSObject<PXStoryExportActivityHelper> *)exportActivityHelper;
- (Class)gridDecorationViewClass;
- (<PXStoryViewControllerNavigationItemHelper> *)navigationItemHelper;
- (bool)prefersViewEnvironmentChromeHidden;
- (bool)prepareForPopTransition;
- (bool)remainsActiveWhileApplicationIsHidden;
- (void)setDismissalDelegate:(id <PXStoryViewControllerDismissalDelegate>)arg1;
- (void)setGridDecorationViewClass:(Class)arg1;
- (void)setNavigationItemHelper:(id <PXStoryViewControllerNavigationItemHelper>)arg1;
- (void)setRemainsActiveWhileApplicationIsHidden:(bool)arg1;
- (void)setShareActionDelegate:(id <PXStoryViewControllerShareActionDelegate>)arg1;
- (void)setViewEnvironmentActionDelegate:(id <PXStoryViewEnvironmentActionDelegate>)arg1;
- (<PXStoryViewControllerShareActionDelegate> *)shareActionDelegate;
- (<PXStoryViewEnvironmentActionDelegate> *)viewEnvironmentActionDelegate;

@end
