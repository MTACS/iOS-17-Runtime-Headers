
@interface HDAnchoredObjectQueryServer : HDBatchedQueryServer {
    NSMutableArray * _addedSamplesPendingDidAddNotification;
    NSMutableArray * _addedSamplesPendingResume;
    HKQueryAnchor * _anchor;
    NSMutableArray * _deletedSamplesPendingResume;
    unsigned long long  _deliveredResults;
    bool  _deliversUpdates;
    bool  _includeAutomaticTimeZones;
    bool  _includeContributorInformation;
    bool  _includeDeletedObjects;
    bool  _initialResultsSent;
    unsigned long long  _limit;
    NSString * _localSourceUUIDString;
    bool  _objectsDeleted;
    NSMutableArray * _pendingUpdateBlocks;
    NSArray * _queryDescriptors;
    NSDictionary * _sampleTypeToFilterMap;
    NSString * _secureClientToken;
    HKQueryAnchor * _startAnchor;
    bool  _updateInProgress;
}

+ (Class)queryClass;
+ (id)requiredEntitlements;
+ (bool)supportsAnchorBasedAuthorization;

- (void).cxx_destruct;
- (void)_queue_didChangeStateFromPreviousState:(long long)arg1 state:(long long)arg2;
- (void)_queue_didDeactivate;
- (void)_queue_start;
- (bool)_shouldListenForUpdates;
- (bool)_shouldObserveOnPause;
- (id)description;
- (void)didAddSamplesOfTypes:(id)arg1 anchor:(id)arg2;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)objectTypes;
- (bool)prepareToActivateServerWithError:(id*)arg1;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (bool)validateConfiguration:(id*)arg1;

@end
