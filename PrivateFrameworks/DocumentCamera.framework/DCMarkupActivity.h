
@interface DCMarkupActivity : UIActivity {
    id /* block */  _completionBlock;
    ICDocCamDocumentInfo * _documentInfo;
    id /* block */  _frameBlock;
    UIView * _fromView;
    ICDocCamImageCache * _imageCache;
    unsigned long long  _inkStyle;
    UIViewController * _presentingViewController;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, retain) ICDocCamDocumentInfo *documentInfo;
@property (nonatomic, copy) id /* block */ frameBlock;
@property (nonatomic) UIView *fromView;
@property (nonatomic, retain) ICDocCamImageCache *imageCache;
@property (nonatomic) unsigned long long inkStyle;
@property (nonatomic) UIViewController *presentingViewController;

- (void).cxx_destruct;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id /* block */)completionBlock;
- (id)documentInfo;
- (id /* block */)frameBlock;
- (id)fromView;
- (id)imageCache;
- (id)initFromView:(id)arg1 presentingViewController:(id)arg2 frameBlock:(id /* block */)arg3 completionBlock:(id /* block */)arg4;
- (unsigned long long)inkStyle;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (id)presentingViewController;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setDocumentInfo:(id)arg1;
- (void)setFrameBlock:(id /* block */)arg1;
- (void)setFromView:(id)arg1;
- (void)setImageCache:(id)arg1;
- (void)setInkStyle:(unsigned long long)arg1;
- (void)setPresentingViewController:(id)arg1;

@end
