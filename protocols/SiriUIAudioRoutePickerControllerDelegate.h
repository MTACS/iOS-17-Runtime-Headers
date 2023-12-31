
@protocol SiriUIAudioRoutePickerControllerDelegate <NSObject>

@required

- (void)routePickerController:(SiriUIAudioRoutePickerController *)arg1 hasRoutesToPick:(bool)arg2;
- (void)routePickerControllerPickedNewRoute:(SiriUIAudioRoutePickerController *)arg1 isBluetooth:(bool)arg2;
- (void)routePickerControllerWillDismiss:(SiriUIAudioRoutePickerController *)arg1;
- (void)routePickerControllerWillShow:(SiriUIAudioRoutePickerController *)arg1;

@end
