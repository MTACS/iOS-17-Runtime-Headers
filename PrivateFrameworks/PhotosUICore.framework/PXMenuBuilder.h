
@interface PXMenuBuilder : NSObject {
    NSMutableArray * _menuItems;
}

@property (nonatomic, readonly) NSMutableArray *menuItems;

+ (void)_addDurationSectionToMenuBuilder:(id)arg1 withViewModel:(id)arg2;
+ (id)_menuWithConfiguration:(id /* block */)arg1;
+ (id)defaultStoryActionsMenuWithViewModel:(id)arg1;
+ (id)defaultStoryThumbnailActionsMenuWithModel:(id)arg1 isFavorite:(bool)arg2;
+ (id)menuWithDeferredConfiguration:(id /* block */)arg1;
+ (id)menuWithTitle:(id)arg1 deferredConfiguration:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_addMenuItem:(id)arg1;
- (void)addItemWithTitle:(id)arg1 systemImageName:(id)arg2 handler:(id /* block */)arg3;
- (void)addItemWithTitle:(id)arg1 systemImageName:(id)arg2 options:(unsigned long long)arg3 handler:(id /* block */)arg4;
- (void)addItemWithTitle:(id)arg1 systemImageName:(id)arg2 state:(long long)arg3 options:(unsigned long long)arg4 handler:(id /* block */)arg5;
- (void)addItemWithTitle:(id)arg1 systemImageName:(id)arg2 submenuConfiguration:(id /* block */)arg3;
- (void)addSectionWithConfiguration:(id /* block */)arg1;
- (void)addSectionWithMenu:(id)arg1;
- (id)init;
- (id)menuItems;

@end
