
@interface MPMediaPickerController_Appex : NSObject <MPMediaPickerRemoteViewLoader> {
    MPMediaPickerController * _mediaPickerController;
    MPMusicMediaPickerRemoteViewController * _musicRemoteViewController;
    _UIResilientRemoteViewContainerViewController * _remoteViewContainerViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) MPMediaPickerController *mediaPickerController;
@property (nonatomic, readonly) UIViewController *remoteViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)mediaPickerController;
- (id)remoteViewController;
- (void)requestRemoteViewController;
- (id)serviceController;
- (void)setMediaPickerController:(id)arg1;
- (void)synchronizeSettings;

@end
