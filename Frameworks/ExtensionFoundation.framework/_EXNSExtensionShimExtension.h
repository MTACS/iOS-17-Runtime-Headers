
@interface _EXNSExtensionShimExtension : _EXExtension {
    Class  _extensionContextClass;
    Class  _principalClass;
}

@property (retain) Class extensionContextClass;
@property (retain) Class principalClass;

- (void).cxx_destruct;
- (Class)delegateClass;
- (void)didFinishLaunching;
- (Class)extensionContextClass;
- (Class)principalClass;
- (void)setExtensionContextClass:(Class)arg1;
- (void)setPrincipalClass:(Class)arg1;
- (bool)shouldAcceptConnection:(id)arg1;
- (void)willFinishLaunching;

@end
