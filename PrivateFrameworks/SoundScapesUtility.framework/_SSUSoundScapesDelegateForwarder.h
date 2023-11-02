
@interface _SSUSoundScapesDelegateForwarder : NSObject <SSUViewServiceHostProtocol> {
    NSXPCConnection * _connection;
    <SSUSoundscapesPickerControllerDelegate> * _delegate;
    UIBarButtonItem * _doneButton;
    bool  _exiting;
    MPPlaybackArchive * _lastPickedArchive;
    NSError * _lastPickedError;
    _EXHostViewController * _viewController;
}

@property (retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property <SSUSoundscapesPickerControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property _EXHostViewController *viewController;

- (void).cxx_destruct;
- (void)cleanup;
- (id)connection;
- (id)delegate;
- (id)initForViewController:(id)arg1;
- (void)mediaPickerConfirmChoices;
- (void)pickerDismissed;
- (void)requestDismiss;
- (void)selectedSoundScapes:(id)arg1 withError:(id)arg2;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setViewController:(id)arg1;
- (void)updateNavigationItem;
- (id)viewController;

@end
