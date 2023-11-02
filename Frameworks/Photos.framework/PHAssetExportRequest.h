
@interface PHAssetExportRequest : NSObject <NSProgressReporting> {
    NSString * _analyticsActivityType;
    PHAsset * _asset;
    PFMetadata * _assetMetadata;
    bool  _assetMetadataRetrievalAttempted;
    <PHAssetExportRequestDelegate> * _delegate;
    NSString * _exportUUID;
    NSURL * _outputDirectory;
    NSDate * _preparationStepSignpostIntervalStartTime;
    NSMutableDictionary * _preparationStepTimingInfo;
    long long  _prepareItemEventCPAnalyticsSignpostId;
    NSProgress * _progress;
    NSObject<OS_dispatch_queue> * _resourceProcessingQueue;
    NSObject<OS_dispatch_queue> * _serialQueue;
    bool  _shouldSendTimingIntervalsToAnalytics;
    unsigned long long  _signpostId;
    unsigned long long  _state;
    NSDictionary * _variants;
}

@property (nonatomic, copy) NSString *analyticsActivityType;
@property (nonatomic, readonly) PHAsset *asset;
@property (nonatomic, readonly) PFMetadata *assetMetadata;
@property (nonatomic) bool assetMetadataRetrievalAttempted;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PHAssetExportRequestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *exportUUID;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *preparationStepSignpostIntervalStartTime;
@property (nonatomic, retain) NSMutableDictionary *preparationStepTimingInfo;
@property (nonatomic) long long prepareItemEventCPAnalyticsSignpostId;
@property (nonatomic, readonly) NSProgress *progress;
@property (nonatomic) bool shouldSendTimingIntervalsToAnalytics;
@property (nonatomic, readonly) unsigned long long signpostId;
@property (nonatomic, readonly) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDictionary *variants;

+ (id)assetExportLog;
+ (bool)errorIsLowDiskSpaceRelated:(id)arg1;
+ (id)exportRequestForAsset:(id)arg1 error:(id*)arg2;
+ (id)exportRequestForAsset:(id)arg1 variants:(id)arg2 error:(id*)arg3;
+ (id)variantsForAsset:(id)arg1 asUnmodifiedOriginal:(bool)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)_generateAnalyticsPayloadWithTimingInfo:(id)arg1 preparationOptions:(id)arg2;
- (id)analyticsActivityType;
- (id)asset;
- (id)assetMetadata;
- (bool)assetMetadataRetrievalAttempted;
- (void)bundleResourcesIfNeededForAsset:(id)arg1 withFileURLs:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)commitTimingInfoForPreparationStep:(id)arg1 fromStartTime:(id)arg2;
- (id)copyFileURLsIfNeeded:(id)arg1 toOutputDirectory:(id)arg2 options:(id)arg3 originalFilenameBase:(id)arg4 error:(id*)arg5;
- (id)delegate;
- (id)description;
- (id)exportUUID;
- (void)exportWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)finalizeTotalPreparationDurationTimingInfoDictionary;
- (void)handleResultWithFileURLs:(id)arg1 cancelled:(bool)arg2 withError:(id)arg3 forAsset:(id)arg4 withOptions:(id)arg5 progress:(id)arg6 processingUnitCount:(long long)arg7 completionHandler:(id /* block */)arg8;
- (id)init;
- (id)initWithAsset:(id)arg1 variants:(id)arg2;
- (id)outputDirectory;
- (void)performCompletionWithFileURLs:(id)arg1 preparationOptions:(id)arg2 error:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)preflightExportWithOptions:(id)arg1 assetAvailability:(long long*)arg2 isProcessingRequired:(bool*)arg3 fileURLs:(id*)arg4 info:(id*)arg5;
- (id)preparationStepSignpostIntervalStartTime;
- (id)preparationStepTimingInfo;
- (long long)prepareItemEventCPAnalyticsSignpostId;
- (void)processResourcesAtFileURLs:(id)arg1 forAsset:(id)arg2 withOptions:(id)arg3 progress:(id)arg4 processingUnitCount:(long long)arg5 completion:(id /* block */)arg6;
- (id)progress;
- (bool)reassembleAdjustmentsPropertyListIfNeeded:(id)arg1 toOutputDirectory:(id)arg2 outputURL:(id*)arg3 error:(id*)arg4;
- (void)resetPreparationStepTimingInfos;
- (void)sendPreparationCompletedEventWithPreparationTimingInfo:(id)arg1 forActivityType:(id)arg2 preparationOptions:(id)arg3 withError:(id)arg4 didCancel:(bool)arg5;
- (void)setAnalyticsActivityType:(id)arg1;
- (void)setAssetMetadataRetrievalAttempted:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPreparationStepSignpostIntervalStartTime:(id)arg1;
- (void)setPreparationStepTimingInfo:(id)arg1;
- (void)setPrepareItemEventCPAnalyticsSignpostId:(long long)arg1;
- (void)setShouldSendTimingIntervalsToAnalytics:(bool)arg1;
- (void)setState:(unsigned long long)arg1;
- (bool)shouldSendTimingIntervalsToAnalytics;
- (unsigned long long)signpostId;
- (unsigned long long)state;
- (void)updateSignpostIntervalsChangingFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (id)variants;

@end
