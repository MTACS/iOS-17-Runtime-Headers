
@interface FARestorableViewController : UIViewController <PSController, PSStateRestoration>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIViewController *parentController;
@property (nonatomic, retain) PSRootController *rootController;
@property (nonatomic, retain) PSSpecifier *specifier;
@property (readonly) Class superclass;

- (bool)canBeShownFromSuspendedState;
- (void)handleURL:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)parentController;
- (id)readPreferenceValue:(id)arg1;
- (id)rootController;
- (void)setParentController:(id)arg1;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (void)setRootController:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (void)showController:(id)arg1;
- (void)showController:(id)arg1 animate:(bool)arg2;
- (id)specifier;

@end
