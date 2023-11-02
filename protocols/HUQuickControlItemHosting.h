
@protocol HUQuickControlItemHosting <NSObject>

@required

- (bool)areControlsVisible;
- (NSSet *)controlItems;
- (<HUQuickControlItemUpdating> *)itemUpdater;
- (void)quickControlItemUpdater:(id <HUQuickControlItemUpdating>)arg1 didUpdateResultsForControlItems:(NSSet *)arg2;
- (void)setControlsVisible:(bool)arg1;

@end
