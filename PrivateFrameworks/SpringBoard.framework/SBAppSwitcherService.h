
@interface SBAppSwitcherService : NSObject {
    NSString * _bundleIdentifier;
    NSString * _viewServiceClassName;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *viewServiceClassName;

+ (id)switcherServiceWithName:(id)arg1 viewServiceClassName:(id)arg2;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (void)setBundleIdentifier:(id)arg1;
- (void)setViewServiceClassName:(id)arg1;
- (id)viewServiceClassName;

@end
