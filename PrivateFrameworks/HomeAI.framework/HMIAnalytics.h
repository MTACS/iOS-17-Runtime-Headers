
@interface HMIAnalytics : HMFObject <HMFLogging>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)bucketForValue:(long long)arg1 usingBuckets:(id)arg2;
+ (bool)lazyPayloads;
+ (id)logCategory;
+ (id)payloadWithCamera:(id)arg1;
+ (void)sendEventForClusteringTask:(id)arg1;
+ (void)sendEventForFaceEvent:(id)arg1 homePersonManagerUUID:(id)arg2 camera:(id)arg3;
+ (void)sendEventForPersonRecognitionType:(long long)arg1 camera:(id)arg2;
+ (void)sendEventForPersonsModels:(id)arg1;
+ (bool)sendEventWithName:(id)arg1 payloadBuilder:(id /* block */)arg2;
+ (void)sendEventsForFragmentResult:(id)arg1;
+ (bool)upload;
+ (void)videoAnalyzerDidAnalyzeFragmentWithResult:(id)arg1 state:(id)arg2;
+ (void)videoAnalyzerDidCreateTimelapseFragment:(id)arg1 state:(id)arg2;
+ (void)videoAnalyzerDidFindFaceEvent:(id)arg1 homePersonManagerUUID:(id)arg2 camera:(id)arg3;
+ (void)videoAnalyzerDidTerminateWithError:(id)arg1 state:(id)arg2;
+ (void)videoPackageAnalyzerDidClassifyCandidateAsPackage:(bool)arg1 camera:(id)arg2;
+ (void)videoPackageAnalyzerDidResetReferenceImageWithInterval:(double)arg1 camera:(id)arg2;

@end
