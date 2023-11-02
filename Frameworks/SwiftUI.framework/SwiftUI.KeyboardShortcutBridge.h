
@interface SwiftUI.KeyboardShortcutBridge : NSObject {
    void currentBindings;
    void isObservingPreferences;
    void shortcutMap;
    void updatedBindings;
}

- (void).cxx_destruct;
- (void)_performShortcutKeyCommand:(id)arg1;
- (id)init;

@end
