
@interface RUIModalPresentationController : _UIFormSheetPresentationController {
    unsigned long long  _ruiModalPresentationStyle;
    RUIStyle * _style;
}

@property (setter=setRUIModalPresentationStyle:, nonatomic) unsigned long long ruiModalPresentationStyle;

- (void).cxx_destruct;
- (double)_sheetHeightWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 modalPresentationStyle:(unsigned long long)arg3;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 modalPresentationStyle:(unsigned long long)arg3 style:(id)arg4;
- (unsigned long long)modalPresentationStyle;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)presentationTransitionDidEnd:(bool)arg1;
- (void)presentationTransitionWillBegin;
- (unsigned long long)ruiModalPresentationStyle;
- (void)setRUIModalPresentationStyle:(unsigned long long)arg1;

@end
