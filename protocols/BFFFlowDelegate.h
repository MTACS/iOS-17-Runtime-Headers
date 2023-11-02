
@protocol BFFFlowDelegate <NSObject>

@required

- (void)flow:(BFFFlow *)arg1 finishedWithLastItem:(id <BFFFlowItem>)arg2 nextItem:(id <BFFFlowItem>)arg3;
- (void)presentWiFiPaneForFlow:(BFFFlow *)arg1;

@end
