
@interface VideosUI.MediaShowcaseHostingViewController : VUIBaseViewController {
    void $__lazy_storage_$_isAudioMuted;
    void $__lazy_storage_$_logPrefix;
    void $__lazy_storage_$_mediaShowcaseConfig;
    void $__lazy_storage_$_paginatedMediaController;
    void $__lazy_storage_$_toolBar;
    void accountSettingViewModel;
    void collectionImpressioner;
    void didSetupView;
    void hasViewDisappeared;
    void hideMuteButtonTimer;
    void isControlButtonsVisible;
    void isPaused;
    void isTabbarChild;
    void lastSizeClass;
    void lastViewWidth;
    void metadataViewTopOffsetObserver;
    void name;
    void notificationObservers;
    void shouldShowMuteButton;
    void toolBarOffsetY;
    void viewModel;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)vui_loadView;
- (void)vui_viewDidAppear:(bool)arg1;
- (void)vui_viewDidLayoutSubviews;
- (void)vui_viewWillDisappear:(bool)arg1;

@end
