
@interface _UIOKeyShortcutHUDDismissalAction : _UIOClientAction

@property (nonatomic, readonly) _UIKeyShortcutHUDDismissalResponse *response;

- (void)handleClientActionToOverlayService:(id)arg1;
- (id)initWithResponse:(id)arg1;
- (id)response;

@end
