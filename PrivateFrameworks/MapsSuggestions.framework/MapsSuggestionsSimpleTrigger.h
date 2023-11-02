
@interface MapsSuggestionsSimpleTrigger : MapsSuggestionsBaseTrigger

- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (void)fire;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 queue:(id)arg2;

@end
