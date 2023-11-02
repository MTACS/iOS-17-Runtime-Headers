
@interface PXFeedbackImageQualityUIViewController : UIViewController <PXFeedbackFormDelegate> {
    NSArray * _assets;
    <PXFeedbackImageQualityUIViewControllerDelegate> * _delegate;
    PXFeedbackLikeItOrNotComboUIViewController * _feedbackController;
    NSArray * _imageQualityDiagnosticFileURLs;
    UINavigationController * _navigationController;
    NSDictionary * _negativeFeedback;
}

@property (nonatomic, retain) NSArray *assets;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <PXFeedbackImageQualityUIViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXFeedbackLikeItOrNotComboUIViewController *feedbackController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *imageQualityDiagnosticFileURLs;
@property (nonatomic, retain) UINavigationController *navigationController;
@property (nonatomic, retain) NSDictionary *negativeFeedback;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)_addDirectoryToArchive:(id)arg1 withDirName:(id)arg2 archive:(struct archive { }*)arg3;
- (int)_addFileToArchive:(id)arg1 withFileName:(id)arg2 archive:(struct archive { }*)arg3;
- (void)_archiveFolder:(id)arg1 destinationPath:(id)arg2;
- (id)_captureIDFromURL:(id)arg1;
- (id)_captureIDsToCaptureFoldersInDirectory:(id)arg1;
- (id)_componentIDForComponent:(long long)arg1;
- (id)_componentNameForComponent:(long long)arg1;
- (void)_dismissActiveAlertControllerWithCompletion:(id /* block */)arg1;
- (void)_fileRadarWithAssets:(id)arg1 positiveFeedback:(id)arg2 negativeFeedback:(id)arg3 customFeedback:(id)arg4;
- (id)_generateTitleForFeedback:(id)arg1 forAssets:(id)arg2;
- (id)_generateURLsForAssetsDBGFiles:(id)arg1;
- (id)_generateZippedCaptureFoldersForAssets:(id)arg1;
- (id)_keywordIDForComponent:(long long)arg1;
- (long long)_radarComponentForFeedback:(id)arg1;
- (id)assets;
- (id)delegate;
- (id)feedbackController;
- (id)imageQualityDiagnosticFileURLs;
- (id)initWithAssets:(id)arg1 delegate:(id)arg2;
- (id)longTitleText;
- (id)navigationController;
- (id)negativeFeedback;
- (id)negativeFeedbackKeys;
- (id)positiveFeedbackKeys;
- (void)setAssets:(id)arg1;
- (void)setFeedbackController:(id)arg1;
- (void)setImageQualityDiagnosticFileURLs:(id)arg1;
- (void)setNavigationController:(id)arg1;
- (void)setNegativeFeedback:(id)arg1;
- (bool)shouldContinuePresentingFormAfterFeedback;
- (bool)shouldDisplaySecondaryFeedbackButtons;
- (void)userDidFinish:(bool)arg1;
- (void)userIndicatedDislike;
- (void)userIndicatedLike;
- (void)userSentPositiveFeedback:(id)arg1 negativeFeedback:(id)arg2 customFeedback:(id)arg3;
- (void)viewDidLoad;
- (id)viewTitleForRadar;
- (bool)wantsCustomFeedbackSection;
- (bool)wantsPositiveFeedbackSection;

@end
