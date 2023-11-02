
@interface SSApplicationScreenshotSupplementalDataCapturer : NSObject {
    FBSOpenApplicationService * _openAppService;
}

+ (id)settingsForDocumentCapture:(bool)arg1 elementIdentifier:(id)arg2;

- (void).cxx_destruct;
- (void)_sendRequestForEnvironmentElement:(id)arg1 info:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)captureDocumentForEnvironmentElement:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)captureMetadataForEnvironmentElement:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (id)init;

@end
