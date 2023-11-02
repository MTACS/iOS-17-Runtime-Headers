
@interface HMCameraClipDownloadAssetDataTaskHandler : NSObject <HMCameraClipDownloadAssetDataTaskHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)resumeDataTaskWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;

@end
