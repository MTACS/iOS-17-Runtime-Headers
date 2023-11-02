
@interface SBHRecentsDocumentExtensionWrappingViewController : UIViewController <SBHRecentsDocumentExtensionViewControlling> {
    NSMutableArray * _constraints;
    <SBHRecentsDocumentExtensionWrappingViewControllerDelegate> * _delegate;
    NSMapTable * _touchCancellationAssertionsToTokens;
    bool  _usesIntrinsicContentSizeBasedOnScreenSize;
    _UIRemoteViewController * _wrappedRemoteViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBHRecentsDocumentExtensionWrappingViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=isTransparent, nonatomic, readonly) bool transparent;
@property (nonatomic) bool usesIntrinsicContentSizeBasedOnScreenSize;
@property (nonatomic, readonly) _UIRemoteViewController *wrappedRemoteViewController;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_updateViewIntrinsicContentSize:(struct CGSize { double x1; double x2; })arg1;
- (id)cancelTouchesForCurrentEventInHostedContent;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)isTransparent;
- (void)loadView;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setUsesIntrinsicContentSizeBasedOnScreenSize:(bool)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (bool)usesIntrinsicContentSizeBasedOnScreenSize;
- (void)wrapRemoteViewController:(id)arg1;
- (id)wrappedRemoteViewController;

@end
