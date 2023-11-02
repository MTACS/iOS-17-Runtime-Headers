
@protocol _UIKeyShortcutHUDKeyListenerDelegate <NSObject>

@required

- (void)modifierKeyListener:(_UIKeyShortcutHUDModifierKeyListener *)arg1 didUpdateModifierFlag:(long long)arg2;
- (void)modifierKeyListenerDidPressNonModifierKey:(_UIKeyShortcutHUDModifierKeyListener *)arg1;

@end
