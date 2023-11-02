
@interface SUUIJSTabBarItem : IKJSObject <SUUIJSTabBarItem> {
    JSManagedValue * _managedNavigationDocument;
    IKJSNavigationDocument * _navigationDocument;
    IKJSObject * _owner;
    SUUITabBarItem * _tabBarItem;
}

@property (nonatomic, retain) NSString *badgeValue;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) IKJSNavigationDocument *navigationDocument;
@property (nonatomic, readonly) NSString *rootURL;
@property (nonatomic, readonly) SUUITabBarItem *tabBarItem;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)badgeValue;
- (void)dealloc;
- (id)identifier;
- (id)initWithAppContext:(id)arg1 navigationController:(id)arg2 tabBarItem:(id)arg3 owner:(id)arg4;
- (id)navigationDocument;
- (id)rootURL;
- (void)setBadgeValue:(id)arg1;
- (id)tabBarItem;
- (id)title;

@end
