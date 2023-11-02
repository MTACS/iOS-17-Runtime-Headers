
@interface VideosUI.PlayerHUDTemplateController : VideosUI.StackTemplateController {
    void contextData;
    void nowPlayingTabDelegate;
    void playerViewSize;
    void previousViewWidth;
    void shouldDismissOnSelect;
    void targetResponderForPendingEventHandling;
    void viewModelForPendingEventHandling;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)handlePipingDidChange:(id)arg1;
- (void)handlePlayerDismissedAfterPiping:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)vui_viewDidDisappear:(bool)arg1;
- (void)vui_viewDidLayoutSubviews;
- (void)vui_viewDidLoad;
- (void)vui_viewWillAppear:(bool)arg1;

@end
