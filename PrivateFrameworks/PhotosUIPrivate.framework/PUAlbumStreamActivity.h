
@interface PUAlbumStreamActivity : PXActivity <PXPhotoStreamComposeServiceDelegate, PXVideoTrimQueueControllerDelegate> {
    UIViewController * _activityController;
    bool  _destinationAlbumWasCreated;
    NSObject<PLUserEditableAlbumProtocol> * _destinationStreamingAlbum;
    double  _endTime;
    NSURL * _exportCopyDirectoryParent;
    bool  _isPresentedFromActivityViewController;
    <PXActivityItemSourceController> * _itemSourceController;
    UIViewController * _presenterViewController;
    UIViewController * _referenceViewController;
    NSObject<OS_dispatch_queue> * _serialQueue;
    double  _startTime;
    PUPhotoStreamComposeServiceViewController * _streamComposeViewController;
    PXVideoTrimQueueController * _trimController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool destinationAlbumWasCreated;
@property (nonatomic, retain) NSObject<PLUserEditableAlbumProtocol> *destinationStreamingAlbum;
@property (readonly) unsigned long long hash;
@property (setter=setPresentedFromActivityViewController:, nonatomic) bool isPresentedFromActivityViewController;
@property (nonatomic) UIViewController *referenceViewController;
@property (readonly) Class superclass;

+ (long long)activityCategory;
+ (bool)canPerformWithAssets:(id)arg1;

- (void).cxx_destruct;
- (id)_activityBundleImageConfiguration;
- (void)_cleanupTemporaryFiles;
- (void)_createStreamsPickerContainerWithExisting:(bool)arg1 assets:(id)arg2;
- (void)_handleDismissWithSuccess:(bool)arg1;
- (void)_performPresentationOnViewController:(id)arg1 completion:(id /* block */)arg2;
- (void)_prepareToPost:(id)arg1 albumName:(id)arg2 recipients:(id)arg3 comments:(id)arg4 assets:(id)arg5;
- (void)_prepareToPostAsync:(id)arg1 albumName:(id)arg2 recipients:(id)arg3 comments:(id)arg4 assets:(id)arg5;
- (bool)_presentActivityOnViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_publishAssets:(id)arg1 withSharingInfos:(id)arg2 customExportsInfo:(id)arg3 andTrimmedVideoPathInfo:(id)arg4 toAlbum:(id)arg5 orCreateWithName:(id)arg6 comment:(id)arg7 invitationRecipients:(id)arg8 wantsPublicWebsite:(bool)arg9 completion:(id /* block */)arg10;
- (bool)_sharedAlbumAllowsAdding:(id)arg1;
- (id)_systemImageName;
- (void)_trimAssetsToPost:(id)arg1 albumName:(id)arg2 recipients:(id)arg3 comments:(id)arg4 assets:(id)arg5 assetsSharingInfo:(id)arg6 customExportsInfo:(id)arg7;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)controller:(id)arg1 didCancelTrimmingVideoSources:(id)arg2;
- (void)controller:(id)arg1 didFinishTrimmingVideoSources:(id)arg2;
- (void)controller:(id)arg1 dismissViewControllerWithCompletion:(id /* block */)arg2;
- (void)controller:(id)arg1 presentViewController:(id)arg2;
- (bool)destinationAlbumWasCreated;
- (id)destinationStreamingAlbum;
- (id)init;
- (bool)isPresentedFromActivityViewController;
- (id)itemSourceController;
- (void)photoStreamComposeService:(id)arg1 didPostComment:(id)arg2;
- (void)photoStreamComposeServiceDidCancel:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (void)prepareWithAssets:(id)arg1;
- (void)presentActivityOnViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)referenceViewController;
- (void)setDestinationAlbumWasCreated:(bool)arg1;
- (void)setDestinationStreamingAlbum:(id)arg1;
- (void)setItemSourceController:(id)arg1;
- (void)setPresentedFromActivityViewController:(bool)arg1;
- (void)setReferenceViewController:(id)arg1;

@end
