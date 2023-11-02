
@interface ASCredentialRequestBasicPaneViewController : ASCredentialRequestPaneViewController {
    UIImage * _icon;
    long long  _iconStyle;
    NSString * _subtitle;
    long long  _subtitleStyle;
    ASCredentialRequestInfoLabelSubPane * _subtitleSubPane;
    NSString * _title;
    long long  _titleStyle;
}

- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 icon:(id)arg3;
- (id)initWithTitle:(id)arg1 titleStyle:(long long)arg2 subtitle:(id)arg3 subtitleStyle:(long long)arg4 icon:(id)arg5 iconStyle:(long long)arg6;
- (void)updateSubtitle:(id)arg1;
- (void)viewDidLoad;

@end
