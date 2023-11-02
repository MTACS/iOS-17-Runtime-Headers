
@interface PKSharePreviewAdditionalSecuritySectionController : PKPassShareSectionController {
    PKPassShareActivationOptions * _activationOptions;
    PKPassShareInitiationContext * _context;
    <PKSharePreviewAdditionalSecuritySectionControllerDelegate> * _delegate;
    NSString * _footerText;
    unsigned long long  _mode;
}

- (void).cxx_destruct;
- (void)_activationCodeSwitchValueChanged:(id)arg1;
- (id)_initWithMode:(unsigned long long)arg1 activationOptions:(id)arg2 context:(id)arg3 delegate:(id)arg4;
- (id)decorateListCell:(id)arg1 forRowItem:(id)arg2;
- (void)didSelectItem:(id)arg1;
- (id)footerAttributedStringForIdentifier:(id)arg1;
- (id)headerAttributedStringForIdentifier:(id)arg1;
- (id)init;
- (id)initWithInitiationContext:(id)arg1 delegate:(id)arg2;
- (id)initWithMode:(unsigned long long)arg1 activationOptions:(id)arg2 delegate:(id)arg3;
- (void)reloadItemsAnimated:(bool)arg1;
- (void)setContext:(id)arg1;

@end
