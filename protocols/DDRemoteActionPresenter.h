
@protocol DDRemoteActionPresenter

@required

- (void)actionCanBeCancelledExternally:(bool)arg1;
- (void)actionDidFinishShouldDismiss:(bool)arg1;
- (void)getIsBeingPresentedInPopover:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)viewControllerReady;

@end
