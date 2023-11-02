
@interface ASTLockScreenSuggestionSpecifier : NSObject <PSSpecifierGroup> {
    NSSet * _disabledLockScreenBundles;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (id)isLockScreenSwitchEnabled:(id)arg1;
- (void)setLockScreenSwitchEnabled:(id)arg1 forSpecifier:(id)arg2;
- (id)specifierForBundleID:(id)arg1;
- (id)specifiers;

@end
