
@interface _UIKeyShortcutHUDModifierKeyListener : NSObject {
    long long  _currentModifierFlags;
    <_UIKeyShortcutHUDKeyListenerDelegate> * _delegate;
}

@property (nonatomic) long long currentModifierFlags;
@property (nonatomic) <_UIKeyShortcutHUDKeyListenerDelegate> *delegate;

- (void).cxx_destruct;
- (long long)currentModifierFlags;
- (id)delegate;
- (void)handleKeyboardEvent:(id)arg1;
- (void)setCurrentModifierFlags:(long long)arg1;
- (void)setDelegate:(id)arg1;

@end
