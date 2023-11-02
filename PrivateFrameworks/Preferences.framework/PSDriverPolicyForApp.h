
@interface PSDriverPolicyForApp : NSObject <DriverManagerObserver> {
    NSString * _bundleIdentifier;
    <PSDriverPolicyForAppDelegate> * _delegate;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic) <PSDriverPolicyForAppDelegate> *delegate;

- (void).cxx_destruct;
- (void)approvalStateDidChange:(bool)arg1;
- (id)bundleIdentifier;
- (void)dealloc;
- (id)delegate;
- (id)initWithBundleIdentifier:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setValue:(id)arg1 forSpecifier:(id)arg2;
- (id)specifiers;
- (id)valueForSpecifier:(id)arg1;

@end
