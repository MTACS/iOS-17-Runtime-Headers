
@interface MapsSuggestionsNetworkReachableTrigger : MapsSuggestionsBaseTrigger <MapsSuggestionsCondition>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (void)_reachabilityChanged;
- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (id)init;
- (bool)isTrue;
- (id)objectForJSON;

@end
