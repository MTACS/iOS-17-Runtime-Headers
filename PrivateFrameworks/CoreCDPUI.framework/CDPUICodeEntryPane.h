
@interface CDPUICodeEntryPane : CDPPassphraseEntryPane {
    UIButton * _footerButton;
    CDPUICodeEntryViewModel * _viewModel;
}

- (void).cxx_destruct;
- (id)_createFooterButton;
- (void)didFinishResizingHeaderView;
- (void)didFinishResizingPinView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setViewModel:(id)arg1;

@end
