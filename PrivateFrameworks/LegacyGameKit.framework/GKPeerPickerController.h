
@interface GKPeerPickerController : NSObject {
    id  _picker;
}

@property (nonatomic) unsigned long long connectionTypesMask;
@property (nonatomic) <GKPeerPickerControllerDelegate> *delegate;
@property (retain) id picker;
@property (nonatomic, readonly) GKPeerPickerViewController *pickerViewController;
@property (getter=isVisible, nonatomic, readonly) bool visible;

+ (void)initialize;

- (void)_createPicker;
- (unsigned long long)connectionTypesMask;
- (void)dealloc;
- (id)delegate;
- (void)dismiss;
- (id)init;
- (bool)isVisible;
- (void)peerPickerViewController:(id)arg1 didConnectPeer:(id)arg2 toSession:(id)arg3;
- (void)peerPickerViewController:(id)arg1 didSelectConnectionType:(unsigned long long)arg2;
- (id)peerPickerViewController:(id)arg1 sessionForConnectionType:(unsigned long long)arg2;
- (void)peerPickerViewControllerDidCancel:(id)arg1;
- (id)picker;
- (id)pickerViewController;
- (void)setConnectionTypesMask:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPicker:(id)arg1;
- (void)show;

@end
