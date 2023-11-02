
@interface CKAppCardPresentationOverseerSwift : NSObject <UIPopoverPresentationControllerDelegate, UISheetPresentationControllerDelegate> {
    void appCardDismissPadding;
    void container;
    void delegate;
    void presentingViewController;
    void sendDelegate;
    void tracker;
}

@property (nonatomic) double appCardDismissPadding;
@property (nonatomic, readonly) UIViewController<CKBrowserViewControllerProtocol> *browserViewController;
@property (nonatomic, readonly) UIViewController *containerViewController;
@property (nonatomic) <CKAppCardPresentationOverseerDelegate> *delegate;
@property (nonatomic, readonly) bool isExpanded;
@property (nonatomic, readonly) bool isPresentingCard;
@property (nonatomic, readonly) bool isPresentingInSendMenuPopover;
@property (nonatomic, readonly) bool isPresentingInSheetController;
@property (nonatomic, readonly) bool presentedAppBypassesSendMenu;
@property (nonatomic, readonly) bool shouldAnimateDismissal;
@property (nonatomic, readonly) bool shouldAnimatePresentation;
@property (nonatomic, readonly) bool shouldUseSendMenuPresentation;

- (void).cxx_destruct;
- (void)_sheetPresentationControllerDidInvalidateCurrentPresentedViewFrame:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)appCardContainerViewController:(id)arg1 didMoveToWindow:(id)arg2;
- (void)appCardContainerViewControllerDidDismissWithContainer:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })appCardContainerViewControllerEdgeInsetsForChildrenWithContainer:(id)arg1;
- (double)appCardDismissPadding;
- (id)browserViewController;
- (void)checkForTouchInExtensionWith:(id /* block */)arg1;
- (void)containerVerticalSizeClassDidChangeFor:(id)arg1;
- (id)containerViewController;
- (id)delegate;
- (void)dismissCardWithAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)dismissCardWithAnimated:(bool)arg1 overrideExceptions:(bool)arg2 completion:(id /* block */)arg3;
- (void)extensionRemoteConnectionWasInterruptedWithNotification:(id)arg1;
- (id)init;
- (id)initWithPresentingViewController:(id)arg1 sendDelegate:(id)arg2;
- (bool)isExpanded;
- (bool)isPresentingCard;
- (bool)isPresentingInSendMenuPopover;
- (bool)isPresentingInSheetController;
- (void)presentCardWithStyle:(unsigned long long)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)presentPopoverFrom:(id)arg1 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 completion:(id /* block */)arg3;
- (void)presentationControllerDidDismiss:(id)arg1;
- (bool)presentedAppBypassesSendMenu;
- (void)requestWithPresentationStyle:(unsigned long long)arg1;
- (void)requestWithPresentationStyle:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setAppCardDismissPadding:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)sheetPresentationControllerDidChangeSelectedDetentIdentifier:(id)arg1;
- (bool)shouldAnimateDismissal;
- (bool)shouldAnimatePresentation;
- (bool)shouldUseSendMenuPresentation;
- (void)updateCornerRadiusWithPresentedViewFrameFor:(id)arg1;
- (bool)updateCurrentBrowserFor:(id)arg1;
- (id)updateCurrentBrowserFor:(id)arg1 dataSource:(id)arg2;
- (void)updatePopoverLocation:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 completion:(id /* block */)arg2;

@end
