
@interface SFWebExtensionPermissionBanner : SFLinkBanner {
    id /* block */  _dismissHandler;
}

@property (nonatomic, copy) id /* block */ dismissHandler;

- (void).cxx_destruct;
- (id /* block */)dismissHandler;
- (id)initWithExtension:(id)arg1;
- (id)preferredButtonBackgroundColor;
- (id)preferredButtonTintColor;
- (void)setDismissHandler:(id /* block */)arg1;

@end
