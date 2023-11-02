
@interface ContextualSuggestionClient.ContextualSuggestionProvider : _TtCs12_SwiftObject <ContextualSuggestionClient.ContextualSuggestionServiceObserver> {
    void delegate;
    void endpoint;
    void lock;
    void service;
}

- (void)serviceDidUpdateWithSnapshot:(id)arg1;

@end
