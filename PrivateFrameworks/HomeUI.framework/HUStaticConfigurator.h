
@interface HUStaticConfigurator : HUConfigurator {
    NSArray * _staticViewControllers;
}

@property (nonatomic, copy) NSArray *staticViewControllers;

- (void).cxx_destruct;
- (id)_nextViewControllerForResults:(id)arg1;
- (id)initWithConfiguratorDelegate:(id)arg1 contentViewControllers:(id)arg2;
- (id)initWithConfiguratorDelegate:(id)arg1 viewControllers:(id)arg2;
- (void)setStaticViewControllers:(id)arg1;
- (id)staticViewControllers;

@end
