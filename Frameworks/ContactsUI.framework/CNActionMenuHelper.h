
@interface CNActionMenuHelper : NSObject {
    NSArray * _currentMenuItems;
    id /* block */  _deferredMenuElementCompletionBlock;
    UIDeferredMenuElement * _deferredMenuItem;
    NSArray * _displayedMenuItems;
    bool  _isMenuDisplayed;
    NSString * _menuTitle;
}

@property (nonatomic, retain) NSArray *currentMenuItems;
@property (nonatomic, copy) id /* block */ deferredMenuElementCompletionBlock;
@property (nonatomic, retain) UIDeferredMenuElement *deferredMenuItem;
@property (nonatomic, retain) NSArray *displayedMenuItems;
@property (nonatomic) bool isMenuDisplayed;
@property (nonatomic, retain) NSString *menuTitle;

- (void).cxx_destruct;
- (id /* block */)configurationActionProviderWithActionBlock:(id /* block */)arg1;
- (id)currentMenuItems;
- (id /* block */)deferredMenuElementCompletionBlock;
- (id)deferredMenuItem;
- (id)displayedMenuItems;
- (bool)isMenuDisplayed;
- (id)menuForProviders;
- (id /* block */)menuProviderWithActionBlock:(id /* block */)arg1;
- (id)menuTitle;
- (void)replaceDeferredMenuItemWithMenuItems:(id)arg1;
- (void)setCurrentMenuItems:(id)arg1;
- (void)setDeferredMenuElementCompletionBlock:(id /* block */)arg1;
- (void)setDeferredMenuItem:(id)arg1;
- (void)setDisplayedMenuItems:(id)arg1;
- (void)setIsMenuDisplayed:(bool)arg1;
- (void)setMenuTitle:(id)arg1;
- (void)setupDeferredMenuItem;
- (id)targetedPreviewForSourceView:(id)arg1;
- (void)updateVisibleMenuWithMenuItems:(id)arg1 contextMenuInteraction:(id)arg2;
- (void)updateWithMenuItems:(id)arg1 contextMenuInteraction:(id)arg2;
- (void)willDismissMenu;
- (void)willDisplayMenuWithContextMenuInteraction:(id)arg1;

@end
