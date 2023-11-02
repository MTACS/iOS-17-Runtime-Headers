
@interface _HKDatabaseChangesQuery : HKQuery <HKDatabaseChangesQueryClientInterface> {
    HKQueryAnchor * _anchor;
    long long  _anchorStrategyChangeCountLimit;
    long long  _changeDetailsQueryStrategy;
    bool  _includeChangeDetails;
    id /* block */  _resultsHandler;
    NSArray * _sampleTypes;
}

@property (nonatomic, readonly, copy) HKQueryAnchor *anchor;
@property (nonatomic) long long anchorStrategyChangeCountLimit;
@property (nonatomic) long long changeDetailsQueryStrategy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includeChangeDetails;
@property (nonatomic, readonly) id /* block */ resultsHandler;
@property (nonatomic, readonly, copy) NSArray *sampleTypes;
@property (readonly) Class superclass;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (void)configureClientInterface:(id)arg1;
+ (void)configureServerInterface:(id)arg1;

- (void).cxx_destruct;
- (id)anchor;
- (long long)anchorStrategyChangeCountLimit;
- (long long)changeDetailsQueryStrategy;
- (void)client_deliverQueryAnchor:(id)arg1 sampleTypeChanges:(id)arg2 queryUUID:(id)arg3;
- (bool)includeChangeDetails;
- (id)initWithTypes:(id)arg1 anchor:(id)arg2 resultsHandler:(id /* block */)arg3;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (bool)queue_shouldDeactivateAfterInitialResults;
- (id /* block */)resultsHandler;
- (id)sampleTypes;
- (void)setAnchorStrategyChangeCountLimit:(long long)arg1;
- (void)setChangeDetailsQueryStrategy:(long long)arg1;
- (void)setIncludeChangeDetails:(bool)arg1;

@end
