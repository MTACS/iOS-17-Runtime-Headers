
@interface DTScreenshotRequestService : DTXService <DTScreenshotRequestServiceAPI>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)registerCapabilities:(id)arg1;

- (id)_screenshotServiceRequestWithError:(id*)arg1;
- (id)_screenshotWithError:(id*)arg1;
- (id)takeScreenshot;

@end
