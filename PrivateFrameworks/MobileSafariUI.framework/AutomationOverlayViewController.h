
@interface AutomationOverlayViewController : UIViewController <AutomationOverlayWindowDelegate> {
    bool  _allowsUserInteraction;
    <AutomationOverlayViewControllerDelegate> * _delegate;
    id /* block */  _resetTemporaryUserInteractionAllowedBlock;
}

@property (nonatomic, readonly) bool allowsUserInteraction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_interceptUserInteraction;
- (void)_setAllowsUserInteraction:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)_toggleAllowsUserInteractionTemporarily:(bool)arg1;
- (bool)allowsUserInteraction;
- (bool)automationWindowAllowsUserInteraction:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)loadView;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
