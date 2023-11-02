
@interface TranslationUI.VisualTranslationViewBridge : NSObject {
    void $__lazy_storage_$_hostingController;
    void dismissHandler;
    void observable;
    void optimizedForExtendedExperience;
}

@property (nonatomic, copy) id /* block */ dismissHandler;
@property (nonatomic, readonly) UIView *view;

+ (void)isTranslatable:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)dismissErrorUI;
- (id /* block */)dismissHandler;
- (id)init;
- (void)setDismissHandler:(id /* block */)arg1;
- (void)setPresentationAnchorWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setZoomScale:(double)arg1;
- (void)showDebugMenu;
- (void)translate:(id)arg1 sourceLocale:(id)arg2 targetLocale:(id)arg3 completion:(id /* block */)arg4;
- (id)view;

@end
