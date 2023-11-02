
@interface _SFWebClipViewController : UITableViewController <UITextFieldDelegate, _SFBookmarkTextEntryTableViewControllerDelegate> {
    UITableViewCell * _addressCell;
    bool  _canEditAndSave;
    NSObject<_SFWebClipViewControllerDelegate> * _delegate;
    bool  _delegateNotifiedOfResult;
    UIImageView * _iconImageView;
    bool  _showingDemoModeAlert;
    bool  _suspendAfterDismiss;
    UITableViewCell * _titleCell;
    UIWebClip * _webClip;
    WKWebView * _webView;
}

@property (nonatomic) bool canEditAndSave;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<_SFWebClipViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (retain) UIWebClip *webClip;

- (void).cxx_destruct;
- (void)_add;
- (bool)_canAddWebClip;
- (void)_cancel;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_cellInset;
- (struct CGPoint { double x1; double x2; })_centerForIconView;
- (bool)_shouldUseTranslucentAppearance;
- (bool)_showDemoModeFeatureDisabledAlert;
- (void)_textFieldChanged:(id)arg1;
- (void)bookmarkTextEntryTableViewController:(id)arg1 dismissedWithText:(id)arg2;
- (bool)bookmarkTextEntryTableViewControllerShouldUseTranslucentAppearance:(id)arg1;
- (bool)canEditAndSave;
- (bool)createAndAddToHomeScreenBundle;
- (void)dealloc;
- (id)delegate;
- (id)initWithStyle:(long long)arg1;
- (void)loadView;
- (void)setCanEditAndSave:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setWebClip:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)updateUIAnimated:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (id)webClip;

@end
