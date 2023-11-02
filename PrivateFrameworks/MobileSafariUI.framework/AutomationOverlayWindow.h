
@interface AutomationOverlayWindow : UIWindow {
    <AutomationOverlayWindowDelegate> * _automationWindowDelegate;
}

@property (nonatomic) <AutomationOverlayWindowDelegate> *automationWindowDelegate;

- (void).cxx_destruct;
- (id)automationWindowDelegate;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setAutomationWindowDelegate:(id)arg1;

@end
