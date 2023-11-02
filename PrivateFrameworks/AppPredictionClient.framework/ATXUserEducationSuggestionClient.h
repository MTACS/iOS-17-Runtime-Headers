
@interface ATXUserEducationSuggestionClient : NSObject {
    ATXUserEducationSuggestionConnector * _connector;
    NSHashTable * _observers;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)logUserEducationSuggestionFeedback:(id)arg1;
- (void)notifyObserversOfSuggestionEvent:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end
