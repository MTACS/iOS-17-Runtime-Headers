
@interface VideosUI.ConfirmationDialogTemplateController : VideosUI.VUIViewController {
    void $__lazy_storage_$_backdropView;
    void badgeView;
    void dismissTimer;
    void isTimerSet;
    void label;
    void layout;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)dismissConfirmation;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)onApplicationDidEnterBackground:(id)arg1;
- (void)vui_viewDidAppear:(bool)arg1;
- (void)vui_viewDidDisappear:(bool)arg1;
- (void)vui_viewDidLayoutSubviews;
- (void)vui_viewWillAppear:(bool)arg1;
- (void)vui_viewWillDisappear:(bool)arg1;

@end
