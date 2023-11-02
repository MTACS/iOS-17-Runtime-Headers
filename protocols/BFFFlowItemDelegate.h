
@protocol BFFFlowItemDelegate <NSObject, BFFNavigationFlowDelegate>

@required

- (void)flowItemCancelled:(id <BFFFlowItem>)arg1;
- (void)flowItemDone:(id <BFFFlowItem>)arg1;
- (void)flowItemDone:(id <BFFFlowItem>)arg1 nextItem:(id <BFFFlowItem>)arg2;
- (void)flowItemDone:(id <BFFFlowItem>)arg1 nextItemClass:(Class)arg2;

@optional

- (void)presentWiFiPaneForFlowItem:(id <BFFFlowItem>)arg1;

@end
