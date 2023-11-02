
@interface TRIAssetDiffQueryGuardedData : NSObject {
    NSError * error;
    NSMutableDictionary * recordIdsForTargetAssetIds;
    NSDate * retryAfter;
}

- (void).cxx_destruct;

@end
