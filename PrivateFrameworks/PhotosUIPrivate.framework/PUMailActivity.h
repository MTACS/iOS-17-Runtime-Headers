
@interface PUMailActivity : UIMailActivity <MFMailComposeViewControllerDelegate, PLVideoRemakerDelegate, PXMomentShareSuggestionHandlingActivity> {
    bool  __remakerWasCancelled;
    bool  _canSendMailInNewScene;
    bool  _didCheckMailDropAvailable;
    bool  _didFallbackToPresentComposeControllerModally;
    PLUIEditVideoViewController * _editVideoViewController;
    bool  _isMailDropAvailable;
    <PXActivityItemSourceController> * _itemSourceController;
    MFMailComposeViewController * _mailComposeController;
    UIViewController * _referenceViewController;
    id /* block */  _remakerCompletionHandler;
    PLProgressView * _remakerProgressView;
    bool  _shouldTranscodeSingleVideo;
    id  _strongSelf;
    NSString * _transcodedVideoFilePath;
    PHAsset * _videoAssetBeingTrimmed;
    PLVideoRemaker * _videoRemaker;
}

@property (setter=_setRemakerWasCancelled:, nonatomic) bool _remakerWasCancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PXActivityItemSourceController> *itemSourceController;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *transcodedVideoFilePath;

+ (id)_expirationStringForMomentShare:(id)arg1;
+ (id)_momentShareLinkActivityItemsForURL:(id)arg1 momentShare:(id)arg2;
+ (id)_momentShareLinkPrompt;
+ (id)_momentShareLinkSubjectForMomentShare:(id)arg1;
+ (id)_momentShareLinkTitleForMomentShare:(id)arg1;
+ (bool)allowedToModifyEmailAccounts;
+ (bool)canPerformActivityAsIndividualItemsInSourceController:(id)arg1;
+ (bool)canPerformActivityWithTotalCount:(unsigned long long)arg1 assetMediaTypeCount:(struct PXAssetMediaTypeCount { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; })arg2;
+ (bool)isMailDropEnabled;
+ (void)openEmailAccountPrefs;

- (void).cxx_destruct;
- (bool)_canPerformForIndividualAssetsWithActivityItems:(id)arg1;
- (bool)_canPerformWithLink;
- (void)_cleanupRemaker;
- (void)_composeMailForVideo:(id)arg1 trimmedFilePath:(id)arg2;
- (bool)_dismissActivityFromViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (bool)_isMailDropEnabled;
- (bool)_momentShareLinkDidFail;
- (void)_prepareWithMomentShareLink:(id)arg1;
- (bool)_presentActivityOnViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_pu_cleanup;
- (void)_remakeAndSendVideoAsset:(id)arg1 withTrimStartTime:(double)arg2 endTime:(double)arg3;
- (bool)_remakerWasCancelled;
- (void)_removeTempVideoRemakerFile;
- (void)_setRemakerWasCancelled:(bool)arg1;
- (void)_showTrimViewControllerForVideo:(id)arg1 maximumTrimDuration:(double)arg2 trimButtonTitle:(id)arg3;
- (bool)_showTrimViewControllerIfNeededForVideoAsset:(id)arg1;
- (void)_transcodeAndSendVideo:(id)arg1;
- (void)activityDidFinish:(bool)arg1;
- (id)activityViewController;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)cancelRemaking;
- (void)dealloc;
- (void)editVideoViewController:(id)arg1 didTrimVideoWithOptions:(id)arg2;
- (void)editVideoViewControllerDidCancel:(id)arg1;
- (id)init;
- (id)itemSourceController;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (id)mailComposeViewController;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (void)remakeVideoAsset:(id)arg1 withTrimStartTime:(double)arg2 endTime:(double)arg3 progressHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (void)setItemSourceController:(id)arg1;
- (void)setTranscodedVideoFilePath:(id)arg1;
- (id)transcodedVideoFilePath;
- (void)videoRemakerDidBeginRemaking:(id)arg1;
- (void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2;

@end
