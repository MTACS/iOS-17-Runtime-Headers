
@interface HDDatabaseChangesQueryServer : HDQueryServer {
    HKQueryAnchor * _anchor;
    NSString * _detailsQueryAnchorIndexSQL;
    NSString * _detailsQueryDateIndexSQL;
    bool  _hasDeliveredInitialResults;
    NSMutableDictionary * _pendingSampleTypeChanges;
}

+ (Class)queryClass;

- (void).cxx_destruct;
- (void)_queue_start;
- (bool)_shouldListenForUpdates;
- (void)didAddSamplesOfTypes:(id)arg1 anchor:(id)arg2;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)objectTypes;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (bool)validateConfiguration:(id*)arg1;

@end
