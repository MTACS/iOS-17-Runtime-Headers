
@interface ActionCellAccessory : UICellAccessoryCustomView {
    UIImageSymbolConfiguration * _preferredSymbolConfiguration;
    id /* block */  _visibilityProvider;
}

@property (nonatomic, retain) UIImageSymbolConfiguration *preferredSymbolConfiguration;

- (void).cxx_destruct;
- (void)applyContentConfiguration:(id)arg1 forState:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithAction:(id)arg1;
- (id)initWithAction:(id)arg1 visibilityProvider:(id /* block */)arg2;
- (id)preferredSymbolConfiguration;
- (void)setPreferredSymbolConfiguration:(id)arg1;

@end
