
@interface UIPrintApplicationOption : UIPrintOption {
    UIViewController<UIPrintAppExtensionProtocol> * _appPrintExtensionController;
}

@property (nonatomic) UIViewController<UIPrintAppExtensionProtocol> *appPrintExtensionController;

- (void).cxx_destruct;
- (id)appPrintExtensionController;
- (id)initWithPrintInfo:(id)arg1 appPrintExtensionController:(id)arg2 printPanelViewController:(id)arg3;
- (id)printOptionTableViewCell;
- (void)setAppPrintExtensionController:(id)arg1;
- (id)summary;

@end
