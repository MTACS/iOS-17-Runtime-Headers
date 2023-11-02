
@protocol HUControlViewDelegate <NSObject>

@required

- (void)controlView:(id <HUControlView>)arg1 valueDidChange:(id)arg2;
- (void)controlViewDidBeginUserInteraction:(id <HUControlView>)arg1;
- (void)controlViewDidEndUserInteraction:(id <HUControlView>)arg1;

@end
