
@interface CKBusinessMacToolbarViewController : UIViewController {
    CKConversation * _conversation;
    UIView * _detailsPopoverPresentationSourceView;
    IMHandle * _handle;
    bool  _showingInStandAloneWindow;
    CKBusinessMacToolbarView * _toolbarView;
}

@property (nonatomic, readonly) CKConversation *conversation;
@property (nonatomic, retain) UIView *detailsPopoverPresentationSourceView;
@property (nonatomic, retain) IMHandle *handle;
@property (nonatomic, readonly) bool showingInStandAloneWindow;
@property (nonatomic, retain) CKBusinessMacToolbarView *toolbarView;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_detailsPopoverFrame;
- (void)_handleAddressBookPartialChange:(id)arg1;
- (void)_updateBannerImageData;
- (void)_updateBrandColors;
- (void)_updateFallbackTitle;
- (id)conversation;
- (void)dealloc;
- (id)detailsPopoverPresentationSourceView;
- (id)handle;
- (id)initWithConversation:(id)arg1 showingInStandAloneWindow:(bool)arg2;
- (void)loadView;
- (void)setDetailsPopoverPresentationSourceView:(id)arg1;
- (void)setHandle:(id)arg1;
- (void)setToolbarView:(id)arg1;
- (bool)showingInStandAloneWindow;
- (id)toolbarView;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
