
@interface OBSetupAssistantAppearanceController : OBWelcomeController

- (bool)_scrollViewContentIsUnderTray;
- (void)_scrollViewDidLayoutSubviews:(id)arg1;
- (id)init;
- (bool)scrollViewContentIsUnderTray;
- (void)updateContentViewForScrollViewLayoutChange;

@end
