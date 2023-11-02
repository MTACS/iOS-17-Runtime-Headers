
@interface PhotosUIPrivate.StoryAssetPicker : NSObject <PUStoryAssetPickerHelperDelegate, UIAdaptivePresentationControllerDelegate> {
    void completion;
    void pickerHelper;
    void viewModel;
}

- (void).cxx_destruct;
- (id)init;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)storyPickerHelper:(id)arg1 didFinishPicking:(id)arg2 promotedAssets:(id)arg3 demotedAssets:(id)arg4;

@end
