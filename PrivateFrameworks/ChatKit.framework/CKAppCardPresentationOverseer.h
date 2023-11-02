
@interface CKAppCardPresentationOverseer : NSObject {
    CKAppCardPresentationOverseerSwift * _swiftOverseer;
}

@property (nonatomic, readonly) UIViewController *appCardContainerViewController;
@property (nonatomic) double appCardDismissPadding;
@property (nonatomic, readonly) UIViewController<CKBrowserViewControllerProtocol> *browserViewController;
@property (nonatomic) <CKAppCardPresentationOverseerDelegate> *delegate;
@property (nonatomic, readonly) bool isPresentingInSendMenuPopover;
@property (nonatomic, readonly) bool isPresentingInSheetController;
@property (nonatomic, readonly) bool shouldAnimateDismissal;
@property (nonatomic, readonly) bool shouldAnimatePresentation;
@property (nonatomic, retain) CKAppCardPresentationOverseerSwift *swiftOverseer;

- (void).cxx_destruct;
- (id)appCardContainerViewController;
- (double)appCardDismissPadding;
- (id)browserViewController;
- (void)checkForTouchInExtensionWith:(id /* block */)arg1;
- (id)delegate;
- (void)dismissCardAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)dismissCardAnimated:(bool)arg1 overrideExceptions:(bool)arg2 completion:(id /* block */)arg3;
- (id)initWithPresentingViewController:(id)arg1 sendDelegate:(id)arg2;
- (bool)isExpanded;
- (bool)isPresentingCard;
- (bool)isPresentingInSendMenuPopover;
- (bool)isPresentingInSheetController;
- (void)presentCardWithStyle:(unsigned long long)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)presentPopoverFromView:(id)arg1 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 completion:(id /* block */)arg3;
- (bool)presentedAppBypassesSendMenu;
- (void)requestPresentationStyle:(unsigned long long)arg1;
- (void)requestPresentationStyle:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setAppCardDismissPadding:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSwiftOverseer:(id)arg1;
- (bool)shouldAnimateDismissal;
- (bool)shouldAnimatePresentation;
- (id)swiftOverseer;
- (id)updateCurrentBrowserForPlugin:(id)arg1 dataSource:(id)arg2;
- (bool)updateCurrentBrowserWithDataSource:(id)arg1;
- (void)updatePopoverLocation:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 completion:(id /* block */)arg2;

@end
