
@interface MapsSuggestionsPreferredTransportTypeTrigger : MapsSuggestionsBaseTrigger {
    id  _transportTypeChangedListener;
}

- (void).cxx_destruct;
- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (id)init;

@end
