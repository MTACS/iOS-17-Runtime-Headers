
@interface MapsSuggestionsBaseTrigger : NSObject <MapsSuggestionsTrigger> {
    NSString * _name;
    MapsSuggestionsObservers * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (void).cxx_destruct;
- (id)description;
- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (id)dispatchQueue;
- (bool)hasObservers;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 queue:(id)arg2;
- (id)nameForJSON;
- (id)objectForJSON;
- (void)registerObserver:(id)arg1;
- (void)triggerMyObservers;
- (id)uniqueName;
- (void)unregisterObserver:(id)arg1;

@end
