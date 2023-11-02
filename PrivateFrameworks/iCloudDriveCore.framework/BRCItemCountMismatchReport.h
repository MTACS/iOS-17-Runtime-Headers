
@interface BRCItemCountMismatchReport : NSObject {
    bool  _containsSharedToMeItem;
    long long  _failureRetryCount;
    NSURL * _fileURL;
    long long  _itemCountDifference;
    BRCItemGlobalID * _itemGlobalID;
    NSError * _lastError;
    bool  _wasAbleToRun;
    BRMangledID * _zoneMangledID;
}

@property (nonatomic, readonly) long long itemCountDifference;
@property (nonatomic, readonly) BRCItemGlobalID *itemGlobalID;
@property (nonatomic, readonly) NSError *lastError;
@property (nonatomic, readonly) bool wasAbleToRun;
@property (nonatomic, readonly) BRMangledID *zoneMangledID;

+ (void)_finishReport:(id)arg1 session:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)generateReportForSharedFolder:(id)arg1 qualityOfService:(long long)arg2 completionHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)incrementErrorRetryCountWithSession:(id)arg1;
- (id)initWithURL:(id)arg1;
- (long long)itemCountDifference;
- (id)itemGlobalID;
- (id)lastError;
- (void)shareChangedDuringCheckWithSession:(id)arg1;
- (id)telemetryEvent;
- (bool)wasAbleToRun;
- (id)zoneMangledID;

@end
