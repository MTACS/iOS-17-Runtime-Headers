
@interface STRootGroupSpecifierProvider : STGroupSpecifierProvider {
    NSObject<STRootViewModelCoordinator> * _coordinator;
}

@property (retain) NSObject<STRootViewModelCoordinator> *coordinator;

+ (id)providerWithCoordinator:(id)arg1;

- (void).cxx_destruct;
- (id)coordinator;
- (void)invalidate;
- (void)setCoordinator:(id)arg1;

@end
