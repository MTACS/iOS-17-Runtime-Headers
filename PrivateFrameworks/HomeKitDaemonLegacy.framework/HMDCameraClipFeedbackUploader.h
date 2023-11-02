
@interface HMDCameraClipFeedbackUploader : HMFObject <HMDCameraClipFeedbackUploader>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)uploadFeedbackWithCameraProfileUUID:(id)arg1 clipModel:(id)arg2 completionHandler:(id /* block */)arg3;

@end
