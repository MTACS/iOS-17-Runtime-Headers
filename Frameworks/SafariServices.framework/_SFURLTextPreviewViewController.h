
@interface _SFURLTextPreviewViewController : UIViewController {
    NSURL * _URL;
    _WKActivatedElementInfo * _activatedElementInfo;
    NSArray * _linkActions;
    _SFLinkPreviewHeader * _previewHeader;
    _SFURLTextPreviewView * _previewView;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, retain) _SFURLTextPreviewView *previewView;

- (void).cxx_destruct;
- (id)URL;
- (id)_activatedElementInfo;
- (id)_linkActions;
- (id)_previewHeader;
- (void)_setActivatedElementInfo:(id)arg1;
- (void)_setLinkActions:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)loadView;
- (id)previewView;
- (void)setPreviewView:(id)arg1;
- (void)setURL:(id)arg1;
- (void)viewWillLayoutSubviews;

@end
