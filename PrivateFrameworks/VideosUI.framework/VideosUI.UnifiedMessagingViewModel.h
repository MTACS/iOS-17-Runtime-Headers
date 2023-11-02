
@interface VideosUI.UnifiedMessagingViewModel : VideosUI.ViewModel {
    void delegate;
    void hasSetupViewModel;
    void messageViewController;
    void placementId;
    void pullForSheetsDuringFetch;
    void waitingForFetch;
}

- (void)handleMessageDidUpdateWithNotification:(id)arg1;

@end
