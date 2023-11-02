
@interface VKFeedbackProvider : NSObject <VKFeedbackProviderViewControllerDelegate> {
    VKFeedbackAttachment * _analysisArchiveAttachment;
    <VKFeedbackAssetsProvider> * _assetsProvider;
    NSURL * _attachmentsFolderURL;
    NSError * _error;
    VKCImageAnalysis * _imageAnalysis;
    NSDictionary * _metadata;
    UIViewController * _presentingViewController;
    VKFeedbackAttachment * _requestAssetAttachment;
    NSMutableArray * _screenshots;
    unsigned long long  _type;
    id /* block */  _userResponseHandler;
}

@property (nonatomic, retain) <VKFeedbackAssetsProvider> *assetsProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic) VKCImageAnalysis *imageAnalysis;
@property (nonatomic) UIViewController *presentingViewController;
@property (nonatomic, retain) VKCImageAnalyzerRequest *request;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_captureScreenshots;
- (id)_jsonRepresentationForAttributesDictionary:(id)arg1;
- (void)_saveFeedbackAttributesJSON:(id)arg1;
- (void)_saveImage:(id)arg1 withName:(id)arg2;
- (void)_saveScreenshots;
- (id)assetsProvider;
- (id)error;
- (void)feedbackProviderViewController:(id)arg1 submitWithOptions:(unsigned long long)arg2 attachments:(id)arg3;
- (void)feedbackProviderViewControllerDidCancel:(id)arg1;
- (id)imageAnalysis;
- (id)init;
- (id)presentingViewController;
- (void)provideFeedbackWithType:(unsigned long long)arg1;
- (void)provideFeedbackWithType:(unsigned long long)arg1 consentPresentingView:(id)arg2;
- (void)provideFeedbackWithType:(unsigned long long)arg1 options:(unsigned long long)arg2 metadata:(id)arg3 consentPresentingView:(id)arg4;
- (void)provideFeedbackWithType:(unsigned long long)arg1 options:(unsigned long long)arg2 metadata:(id)arg3 promisedAttachments:(id)arg4 userResponseHandler:(id /* block */)arg5;
- (id)request;
- (void)setAssetsProvider:(id)arg1;
- (void)setError:(id)arg1;
- (void)setImageAnalysis:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setRequest:(id)arg1;

@end
