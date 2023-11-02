
@interface VideosUI.SceneTabBarController : NSObject <VUITabBarProtocol> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _tabBarInfo;
    void hasSetTabbarIndex;
    void previousSelectedIndex;
}

@property (nonatomic) unsigned long long selectedIndex;
@property (nonatomic) bool tabBarHidden;
@property (nonatomic, readonly) NSArray *tabBarItems;

- (void).cxx_destruct;
- (id)init;
- (bool)isTabBarHidden;
- (unsigned long long)selectedIndex;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)setSelectedIndexForTabBarItemIdentifier:(id)arg1;
- (void)setTabBarHidden:(bool)arg1;
- (id)tabBarItems;
- (void)updateWithTabBarItems:(id)arg1 setSelectedIdentifierFromDefaults:(bool)arg2 appContext:(id)arg3;
- (void)willResignActive:(id)arg1;
- (void)willTerminate:(id)arg1;

@end
