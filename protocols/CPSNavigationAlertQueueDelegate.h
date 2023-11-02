
@protocol CPSNavigationAlertQueueDelegate <NSObject>

@required

- (bool)canAnimateNavigationAlert;
- (void)navigationAlertQueue:(CPSNavigationAlertQueue *)arg1 shouldDisplayAlertView:(CPSNavigationAlertView *)arg2 animated:(bool)arg3;
- (void)navigationAlertQueue:(void *)arg1 shouldRemoveAlertView:(void *)arg2 animated:(void *)arg3 dismissalContext:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 9: CPSNavigationAlertQueue *, CPSNavigationAlertView *, bool, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
