
@interface FCModifyPersonalizationOperation : FCOperation {
    NSDictionary * _aggregates;
    FCCKPrivateDatabase * _database;
    CKRecord * _remoteRecord;
    NSError * _resultError;
    id /* block */  _saveCompletionHandler;
    NTPBPersonalizationProfile * _savedProfile;
    CKRecord * _savedRecord;
    FCPersonalizationTreatment * _treatment;
}

@property (nonatomic, retain) NSDictionary *aggregates;
@property (nonatomic, retain) FCCKPrivateDatabase *database;
@property (nonatomic, retain) CKRecord *remoteRecord;
@property (nonatomic, retain) NSError *resultError;
@property (nonatomic, copy) id /* block */ saveCompletionHandler;
@property (nonatomic, retain) NTPBPersonalizationProfile *savedProfile;
@property (nonatomic, retain) CKRecord *savedRecord;
@property (nonatomic, retain) FCPersonalizationTreatment *treatment;

+ (void)applyAggregates:(id)arg1 toProfile:(id)arg2 maxRatio:(double)arg3;
+ (void)applyChangeGroups:(id)arg1 toProfile:(id)arg2 treatment:(id)arg3 prune:(bool)arg4;
+ (void)applyDeltas:(id)arg1 toProfile:(id)arg2 treatment:(id)arg3 prune:(bool)arg4;
+ (id)personalizationProfileFromRecord:(id)arg1;
+ (void)pruneAggregates:(id)arg1;

- (void).cxx_destruct;
- (id)aggregates;
- (bool)canRetryWithError:(id)arg1 retryAfter:(id*)arg2;
- (id)database;
- (unsigned long long)maxRetries;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)remoteRecord;
- (void)resetForRetry;
- (id)resultError;
- (id /* block */)saveCompletionHandler;
- (id)savedProfile;
- (id)savedRecord;
- (void)setAggregates:(id)arg1;
- (void)setDatabase:(id)arg1;
- (void)setRemoteRecord:(id)arg1;
- (void)setResultError:(id)arg1;
- (void)setSaveCompletionHandler:(id /* block */)arg1;
- (void)setSavedProfile:(id)arg1;
- (void)setSavedRecord:(id)arg1;
- (void)setTreatment:(id)arg1;
- (id)treatment;
- (bool)validateOperation;

@end
