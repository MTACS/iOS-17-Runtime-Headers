
@interface SwiftUI.UIKitKeyPressResponder : UIResponder {
    void _next;
    void eventBindingManager;
    void tracker;
}

@property (nonatomic, readonly) UIResponder *nextResponder;

- (void).cxx_destruct;
- (id)init;
- (id)nextResponder;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;

@end
