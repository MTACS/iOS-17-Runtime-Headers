
@interface LTUIVisualTranslationView : UIView {
    UIView * __presentationAnchorView;
    id /* block */  _completion;
    _TtC13TranslationUI27VisualTranslationViewBridge * _translationView;
}

@property UIView *_presentationAnchorView;
@property (nonatomic, copy) id /* block */ completion;
@property UIView *presentationAnchorView;
@property (nonatomic, retain) _TtC13TranslationUI27VisualTranslationViewBridge *translationView;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (void)constrainToSuperview:(id)arg1;
+ (id)describeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (void)isTranslatable:(id)arg1 completion:(id /* block */)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })swiftUIRectFrom:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

- (void).cxx_destruct;
- (id)_presentationAnchorView;
- (id /* block */)completion;
- (void)didMoveToSuperview;
- (void)dismiss;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)presentationAnchorView;
- (void)registerForDismissEvent:(id /* block */)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setPresentationAnchorView:(id)arg1;
- (void)setTranslationView:(id)arg1;
- (void)setZoomScale:(double)arg1;
- (void)set_presentationAnchorView:(id)arg1;
- (void)translate:(id)arg1;
- (void)translate:(id)arg1 completion:(id /* block */)arg2;
- (void)translate:(id)arg1 sourceLocale:(id)arg2 targetLocale:(id)arg3 completion:(id /* block */)arg4;
- (id)translationView;
- (void)updatePresentationAnchorRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
