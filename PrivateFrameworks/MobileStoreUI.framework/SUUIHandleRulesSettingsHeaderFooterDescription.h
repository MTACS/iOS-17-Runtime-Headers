
@interface SUUIHandleRulesSettingsHeaderFooterDescription : SUUISettingsHeaderFooterDescription {
    SUUIClientContext * _clientContext;
    bool  _showInvalid;
}

@property (nonatomic) bool showInvalid;

- (void).cxx_destruct;
- (Class)_viewClassForSettingsHeaderFooterDescription:(id)arg1;
- (id)initWithClientContext:(id)arg1;
- (void)setShowInvalid:(bool)arg1;
- (bool)showInvalid;
- (id)text;

@end
