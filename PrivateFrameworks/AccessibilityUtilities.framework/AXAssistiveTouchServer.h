
@interface AXAssistiveTouchServer : AXServer

+ (id)server;

- (bool)_connectIfNecessary;
- (void)_didConnectToClient;
- (id)_serviceName;
- (void)_wasDisconnectedFromClient;
- (void)_willClearServer;
- (void)closeMenu;
- (struct CGPoint { double x1; double x2; })getNubbitPosition;
- (struct CGPoint { double x1; double x2; })getPointerPosition;
- (bool)home;
- (bool)isMenuOpen;
- (void)menuAction:(id)arg1;
- (id)menuItems;
- (void)openMenu;
- (void)setNubbitPosition:(struct CGPoint { double x1; double x2; })arg1;
- (bool)setPointerPosition:(struct CGPoint { double x1; double x2; })arg1;
- (bool)tapMenuItem:(id)arg1 down:(bool)arg2;
- (void)virtualPointer:(bool)arg1;

@end
