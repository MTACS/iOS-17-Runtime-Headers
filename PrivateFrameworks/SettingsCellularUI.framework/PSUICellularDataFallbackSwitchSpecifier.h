
@interface PSUICellularDataFallbackSwitchSpecifier : PSSpecifier {
    PSListController * _hostController;
}

@property (nonatomic) PSListController *hostController;

- (void).cxx_destruct;
- (id)hostController;
- (id)initWithHostController:(id)arg1;
- (id)isFallbackEnabled:(id)arg1;
- (void)setFallbackEnabled:(id)arg1 specifier:(id)arg2;
- (void)setHostController:(id)arg1;

@end
