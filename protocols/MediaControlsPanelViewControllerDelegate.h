
@protocol MediaControlsPanelViewControllerDelegate <NSObject>

@optional

- (void)dismissMediaControlsPanelViewController:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: MediaControlsPanelViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)mediaControlsPanelViewController:(MediaControlsPanelViewController *)arg1 didReceiveInteractionEvent:(id)arg2;
- (void)mediaControlsPanelViewController:(MediaControlsPanelViewController *)arg1 didToggleRoutingPicker:(bool)arg2;
- (void)mediaControlsPanelViewController:(MediaControlsPanelViewController *)arg1 willToggleRoutingPicker:(bool)arg2;

@end
