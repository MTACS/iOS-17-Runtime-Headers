
@interface ConversationKit.ConversationControlsShareCardViewController : UIViewController {
    void $__lazy_storage_$_backgroundMaterialView;
    void $__lazy_storage_$_closeButton;
    void $__lazy_storage_$_controlsView;
    void $__lazy_storage_$_gelatoDiscoverabilityView;
    void $__lazy_storage_$_headerView;
    void $__lazy_storage_$_scrollView;
    void $__lazy_storage_$_scrollViewContent;
    void $__lazy_storage_$_sharePlayDiscoverabilityView;
    void conversationControlsManager;
    void delegate;
    void foregroundAppCancellable;
    void updateSheetDetent;
}

@property (nonatomic) long long modalPresentationStyle;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)didTapCloseButton;
- (void)didTapCollaborateButton;
- (void)didTapEndSharePlay;
- (void)didTapScreenShareButton;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)modalPresentationStyle;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
