
@interface MPMusicMediaPickerRemoteViewController : _UIRemoteViewController <MPMusicMediaPickerClientController> {
    MPMediaPickerController * _mediaPickerController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) MPMediaPickerController *mediaPickerController;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)mediaPickerController;
- (void)remoteMediaPickerDidCancel;
- (void)remoteMediaPickerDidPickMediaItems:(id)arg1;
- (void)remoteMediaPickerDidPickPlaybackArchive:(id)arg1;
- (void)setMediaPickerController:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
