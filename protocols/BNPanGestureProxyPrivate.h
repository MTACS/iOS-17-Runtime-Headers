
@protocol BNPanGestureProxyPrivate <BNPanGestureProxy>

@required

- (<BNPanGestureProxyDelegate> *)delegate;
- (void)sendAction;
- (void)setDelegate:(id <BNPanGestureProxyDelegate>)arg1;

@end
