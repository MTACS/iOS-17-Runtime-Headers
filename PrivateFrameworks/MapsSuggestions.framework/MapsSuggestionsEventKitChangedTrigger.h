
@interface MapsSuggestionsEventKitChangedTrigger : MapsSuggestionsBaseTrigger <MapsSuggestionsEventKitObserver> {
    MapsSuggestionsEventKit * _eventKit;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (void).cxx_destruct;
- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (void)eventKitDidChange:(id)arg1;
- (id)initWithEventKit:(id)arg1;

@end
