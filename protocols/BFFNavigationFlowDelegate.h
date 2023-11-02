
@protocol BFFNavigationFlowDelegate <NSObject>

@required

- (bool)controllerNeedsToRunForClass:(Class)arg1;
- (bool)isFlowItemOnTop:(id <BFFFlowItem>)arg1;
- (UIViewController *)popToBuddyControllerWithClass:(Class)arg1 animated:(bool)arg2;
- (UIViewController *)popToBuddyControllerWithClass:(Class)arg1 withOffset:(unsigned long long)arg2 animated:(bool)arg3;
- (void)pushFlowItem:(id <BFFFlowItem>)arg1 animated:(bool)arg2;
- (void)pushFlowItem:(id <BFFFlowItem>)arg1 inFlow:(BFFFlow *)arg2 animated:(bool)arg3;
- (void)pushFlowItem:(id <BFFFlowItem>)arg1 inFlow:(BFFFlow *)arg2 withExtendedInitialization:(bool)arg3 animated:(bool)arg4;
- (void)pushFlowItem:(void *)arg1 inFlow:(void *)arg2 withExtendedInitialization:(void *)arg3 animated:(void *)arg4 willPushFlowItem:(void *)arg5; // needs 5 arg types, found 10: <BFFFlowItem> *, BFFFlow *, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)removeViewControllersOnNextPush:(NSArray *)arg1;

@end
