
@interface UISHandleApplicationShortcutAction : BSAction

@property (nonatomic, readonly, copy) SBSApplicationShortcutItem *sbsShortcutItem;
@property (nonatomic, readonly, copy) UIApplicationShortcutItem *uiShortcutItem;

- (long long)UIActionType;
- (id)initWithSBSShortcutItem:(id)arg1;
- (bool)isKindOfClass:(Class)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)sbsShortcutItem;
- (id)uiShortcutItem;

@end
