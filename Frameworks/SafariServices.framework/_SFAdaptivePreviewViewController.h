
@interface _SFAdaptivePreviewViewController : UIViewController <_SFLinkPreviewHeaderDelegate> {
    NSURL * _URL;
    _WKActivatedElementInfo * _activatedElementInfo;
    <_SFAdaptivePreviewViewControllerDelegate> * _delegate;
    NSArray * _linkActions;
    UIViewController<_SFBrowserViewProviding> * _linkPreviewViewController;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredDocumentContentSize;
    _SFURLTextPreviewViewController * _textPreviewViewController;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, retain) _WKActivatedElementInfo *activatedElementInfo;
@property (nonatomic, readonly) UIViewController *contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_SFAdaptivePreviewViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *linkActions;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredDocumentContentSize;
@property (nonatomic, readonly) bool showingLinkPreview;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URL;
- (void)_addViewFromViewController:(id)arg1;
- (bool)_allowsUserInteractionWhenPreviewedInContextMenu;
- (void)_removeViewController:(id)arg1;
- (void)_setUpLinkPreviewViewControllerIfNeeded;
- (void)_setUpTextPreviewViewControllerIfNeeded;
- (void)_updatePreferredContentSize;
- (id)activatedElementInfo;
- (id)contentViewController;
- (id)delegate;
- (id)initWithURL:(id)arg1;
- (id)linkActions;
- (void)linkPreviewHeader:(id)arg1 didEnableLinkPreview:(bool)arg2;
- (void)linkPreviewHeaderBoundsDidChange:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredDocumentContentSize;
- (void)setActivatedElementInfo:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLinkActions:(id)arg1;
- (void)setLinkPreviewEnabled:(bool)arg1;
- (void)setPreferredDocumentContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setURL:(id)arg1;
- (bool)showingLinkPreview;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
