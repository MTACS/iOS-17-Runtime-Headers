
@protocol PXStoryViewActionPerformer <PXMemoryAssetsPickerPresenter>

@required

- (void)copyInternalURL;
- (void)deleteCurrentChapter;
- (void)deleteMemory;
- (void)dismissAppleMusicPreview;
- (void)dismissStoryViewController;
- (PXGViewControllerTransition *)dismissStoryViewControllerInteractively;
- (void)fileRadar;
- (void)fileRadarForErrorRepository:(PXStoryErrorRepository *)arg1;
- (void)makeAssetKeyPhoto:(id <PXDisplayAsset>)arg1;
- (<NSObject> *)musicFeedbackContextMenuDelegateWithAudioAssetProvidingBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, <PXAudioAsset> *, id /* block */, void*
- (void)performActionForChromeActionMenuItem:(long long)arg1 withValue:(long long)arg2 sender:(id)arg3;
- (void)presentAppleMusicPreviewForSelectedSong:(id <PXAudioAsset>)arg1 curatedSongs:(id <PXAudioAssetFetchResult>)arg2;
- (void)presentChapterEditor;
- (void)presentChapterInsertor;
- (void)presentColorGradeEditor;
- (void)presentMusicEditor;
- (void)presentSharingViewWithSender:(id)arg1;
- (void)presentTitleEditor;
- (void)removeAssetsFromCuration:(NSSet *)arg1;
- (void)showVisualDiagnostics;
- (void)toggleFavoriteState;
- (void)toggleMuteState;

@optional

- (bool)needs79067616Workaround;

@end
