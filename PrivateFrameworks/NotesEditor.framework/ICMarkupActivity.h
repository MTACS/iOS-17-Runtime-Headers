
@interface ICMarkupActivity : UIActivity {
    ICAttachment * _attachment;
    id /* block */  _completionBlock;
    id /* block */  _frameBlock;
    UIView * _fromView;
    unsigned long long  _inkStyle;
    UIViewController * _presentingViewController;
}

@property (nonatomic, retain) ICAttachment *attachment;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, copy) id /* block */ frameBlock;
@property (nonatomic) UIView *fromView;
@property (nonatomic) unsigned long long inkStyle;
@property (nonatomic) UIViewController *presentingViewController;

- (void).cxx_destruct;
- (id)_systemImageName;
- (id)activityTitle;
- (id)activityType;
- (id)attachment;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id /* block */)completionBlock;
- (id /* block */)frameBlock;
- (id)fromView;
- (id)initFromView:(id)arg1 presentingViewController:(id)arg2 frameBlock:(id /* block */)arg3 completionBlock:(id /* block */)arg4;
- (unsigned long long)inkStyle;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (id)presentingViewController;
- (void)setAttachment:(id)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setFrameBlock:(id /* block */)arg1;
- (void)setFromView:(id)arg1;
- (void)setInkStyle:(unsigned long long)arg1;
- (void)setPresentingViewController:(id)arg1;

@end
