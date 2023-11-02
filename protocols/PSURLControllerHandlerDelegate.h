
@protocol PSURLControllerHandlerDelegate <PSController>

@required

- (UIViewController<PSController> *)selectSpecifier:(PSSpecifier *)arg1;
- (PSSpecifier *)specifierForID:(NSString *)arg1;

@optional

- (bool)isShowingSetupController;
- (void)setShowingSetupController:(bool)arg1;

@end
