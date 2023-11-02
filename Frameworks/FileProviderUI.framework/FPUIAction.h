
@interface FPUIAction : UIDocumentBrowserActionDescriptor {
    FPProviderDomain * _fpProviderDomain;
    bool  _isNonUIAction;
}

@property (nonatomic, readonly) FPProviderDomain *fpProviderDomain;
@property (nonatomic, readonly) bool isNonUIAction;

- (void).cxx_destruct;
- (id)fpProviderDomain;
- (id)initWithIdentifier:(id)arg1 uiActionProviderIdentifier:(id)arg2 fileProviderIdentifier:(id)arg3 displayName:(id)arg4 predicate:(id)arg5 displayInline:(bool)arg6 isNonUIAction:(bool)arg7;
- (id)initWithIdentifier:(id)arg1 uiActionProviderIdentifier:(id)arg2 fileProviderIdentifier:(id)arg3 displayName:(id)arg4 predicate:(id)arg5 displayInline:(bool)arg6 isNonUIAction:(bool)arg7 fpProviderDomain:(id)arg8;
- (bool)isNonUIAction;

@end
