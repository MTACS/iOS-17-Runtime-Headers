
@interface SXTextTangierDocumentRoot : TSKDocumentRoot {
    TSSStylesheet * _aStylesheet;
    UIViewController * _viewController;
}

@property (nonatomic, readonly) TSSStylesheet *aStylesheet;
@property (nonatomic) UIViewController *viewController;

- (void).cxx_destruct;
- (id)aStylesheet;
- (id)init;
- (id)initWithContext:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)stylesheet;
- (id)viewController;

@end
