
@protocol VUIRootSplitViewController <NSObject>

@required

- (bool)controllerExistsForIdentifier:(NSString *)arg1;
- (UIViewController *)controllerForIdentifier:(NSString *)arg1;
- (bool)isTabbarMode;
- (void)setSelectedIndexForIdentifier:(NSString *)arg1 withDeeplinkURL:(NSURL *)arg2;
- (void)updateWithBarItems:(NSArray *)arg1 setSelectedIdentifierFromDefaults:(bool)arg2 appContext:(VUIAppContext *)arg3;

@optional

- (double)containerWidth;

@end
