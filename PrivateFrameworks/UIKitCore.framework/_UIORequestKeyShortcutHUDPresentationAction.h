
@interface _UIORequestKeyShortcutHUDPresentationAction : _UIOServerAction

@property (nonatomic, readonly) _UIKeyShortcutHUDConfiguration *configuration;

- (id)configuration;
- (id)initWithConfiguration:(id)arg1 responseHandler:(id /* block */)arg2;
- (bool)isPermitted;
- (void)performActionFromConnection:(id)arg1;

@end
