
@protocol PSController <PSStateRestoration>

@required

- (void)handleURL:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 6: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (UIViewController<PSController> *)parentController;
- (id)readPreferenceValue:(PSSpecifier *)arg1;
- (PSRootController *)rootController;
- (void)setParentController:(UIViewController<PSController> *)arg1;
- (void)setPreferenceValue:(id)arg1 specifier:(PSSpecifier *)arg2;
- (void)setRootController:(PSRootController *)arg1;
- (void)setSpecifier:(PSSpecifier *)arg1;
- (void)showController:(UIViewController *)arg1;
- (void)showController:(UIViewController *)arg1 animate:(bool)arg2;
- (PSSpecifier *)specifier;

@optional

+ (void)formatSearchEntries:(NSMutableArray *)arg1 parent:(PSSearchEntry *)arg2;
+ (NSBundle *)searchBundle;
+ (void)validateSpecifier:(PSSpecifier *)arg1;

- (void)didLock;
- (void)didUnlock;
- (void)didWake;
- (void)handleURL:(NSDictionary *)arg1;
- (void)highlightSpecifierWithID:(NSString *)arg1;
- (bool)prepareHandlingURLForSpecifierID:(NSString *)arg1 resourceDictionary:(NSDictionary *)arg2 animatePush:(bool*)arg3;
- (bool)prepareHandlingURLForSpecifierID:(void *)arg1 resourceDictionary:(void *)arg2 animatePush:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 8: NSString *, NSDictionary *, bool*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)pushController:(UIViewController *)arg1;
- (void)pushController:(UIViewController *)arg1 animate:(bool)arg2;
- (void)statusBarWillAnimateByHeight:(double)arg1;
- (void)suspend;
- (void)willBecomeActive;
- (void)willResignActive;
- (void)willUnlock;

@end
