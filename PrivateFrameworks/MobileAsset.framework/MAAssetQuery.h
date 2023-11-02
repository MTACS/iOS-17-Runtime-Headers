
@interface MAAssetQuery : NSObject {
    NSSet * _assetIds;
    NSString * _assetType;
    bool  _doNotBlockBeforeFirstUnlock;
    bool  _doNotBlockOnNetworkStatus;
    bool  _isDone;
    bool  _isPallasResult;
    NSDate * _lastFetchDate;
    NSDate * _postedDate;
    NSString * _purpose;
    NSMutableArray * _queryParams;
    long long  _resultCode;
    NSArray * _results;
    long long  _returnTypes;
}

@property (nonatomic, readonly) NSSet *assetIds;
@property (nonatomic, readonly) NSString *assetType;
@property (nonatomic) bool doNotBlockBeforeFirstUnlock;
@property (nonatomic) bool doNotBlockOnNetworkStatus;
@property (nonatomic, readonly) bool isDone;
@property (nonatomic, readonly) NSDate *lastFetchDate;
@property (nonatomic, readonly) NSDate *postedDate;
@property (nonatomic, retain) NSString *purpose;
@property (nonatomic, readonly) NSMutableArray *queryParams;
@property (nonatomic, readonly) long long resultCode;
@property (nonatomic, readonly) NSArray *results;
@property (nonatomic, readonly) long long returnTypes;

// Image: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset

- (void).cxx_destruct;
- (long long)addKeyValueArray:(id)arg1 with:(id)arg2;
- (long long)addKeyValueNull:(id)arg1;
- (long long)addKeyValuePair:(id)arg1 with:(id)arg2;
- (id)assetIds;
- (id)assetType;
- (void)augmentResultsWithState:(bool)arg1;
- (id)description;
- (bool)doNotBlockBeforeFirstUnlock;
- (bool)doNotBlockOnNetworkStatus;
- (void)getResultsFromMessage:(id)arg1;
- (id)initWithType:(id)arg1;
- (id)initWithType:(id)arg1 andPurpose:(id)arg2;
- (bool)isCatalogFetchedFromLiveServer;
- (bool)isCatalogFetchedWithinThePastFewDays:(int)arg1;
- (bool)isDone;
- (id)lastFetchDate;
- (id)postedDate;
- (id)purpose;
- (long long)queryInstalledAssetIds;
- (void)queryMetaData:(id /* block */)arg1;
- (long long)queryMetaDataSync;
- (void)queryMetaDataWithError:(id /* block */)arg1;
- (id)queryParams;
- (long long)resultCode;
- (id)results;
- (long long)returnTypes;
- (void)returnTypes:(long long)arg1;
- (void)setDoNotBlockBeforeFirstUnlock:(bool)arg1;
- (void)setDoNotBlockOnNetworkStatus:(bool)arg1;
- (void)setPurpose:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore

+ (void)_SUCoreBorder_MAQueryResultAtBegin:(id)arg1 withCompletion:(id /* block */)arg2;
+ (void)_SUCoreBorder_MAQueryResultAtEnd:(id)arg1 withResult:(long long)arg2 withError:(id)arg3 withCompletion:(id /* block */)arg4;
+ (bool)_arrayContainsNSNull:(id)arg1;
+ (id)_getFirstNSStringEntryFromArray:(id)arg1;
+ (id)_translateBuildVersionToRestoreVersionTuple:(id)arg1;

- (void)SUCoreBorder_queryMetaDataWithError:(id /* block */)arg1;
- (id)SUCoreBorder_results;
- (id)_SUCoreBorder_results:(id)arg1;
- (id)_getQueryParamsForKey:(id)arg1;
- (id)_getQueryResultsForEvent:(id)arg1;

@end
