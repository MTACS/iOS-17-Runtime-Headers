
@interface HKBackgroundObservationExtension : NSObject <NSExtensionRequestHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)backgroundObservationExtensionTimeWillExpire;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)didReceiveUpdateForSampleType:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;

@end
