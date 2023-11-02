
@interface _UIHostedMenuManager : NSObject {
    UIMenu * _displayedMenu;
    UIMenu * _rootMenu;
}

@property (nonatomic, retain) UIMenu *displayedMenu;
@property (nonatomic, copy) UIMenu *rootMenu;

- (void).cxx_destruct;
- (id)_menuForIdentifier:(id)arg1 menu:(id)arg2;
- (id)_menuLeafForIdentifier:(id)arg1 menu:(id)arg2;
- (id)displayedMenu;
- (id)menuForIdentifier:(id)arg1;
- (id)menuLeafForIdentifier:(id)arg1;
- (id)rootMenu;
- (void)setDisplayedMenu:(id)arg1;
- (void)setRootMenu:(id)arg1;

@end
