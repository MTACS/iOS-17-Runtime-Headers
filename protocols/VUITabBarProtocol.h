
@protocol VUITabBarProtocol <NSObject>

@required

- (bool)isTabBarHidden;
- (unsigned long long)selectedIndex;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)setTabBarHidden:(bool)arg1;
- (NSArray *)tabBarItems;

@optional

- (unsigned long long)indexForTabBarItemIdentifier:(NSString *)arg1;
- (void)setSelectedIndexForTabBarItemIdentifier:(NSString *)arg1;
- (void)updateWithTabBarItems:(NSArray *)arg1 setSelectedIdentifierFromDefaults:(bool)arg2 appContext:(VUIAppContext *)arg3;

@end
