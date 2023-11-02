
@interface JetUI.TraitEnvironmentPlaceholder : NSObject <UITraitEnvironment> {
    void traitCollection;
}

@property (nonatomic, readonly) UITraitCollection *traitCollection;

- (void).cxx_destruct;
- (id)init;
- (id)traitCollection;
- (void)traitCollectionDidChange:(id)arg1;

@end
