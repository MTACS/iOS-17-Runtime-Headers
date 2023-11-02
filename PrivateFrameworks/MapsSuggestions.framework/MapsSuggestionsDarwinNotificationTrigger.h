
@interface MapsSuggestionsDarwinNotificationTrigger : MapsSuggestionsBaseTrigger {
    const char * _notificationName;
    int  _notificationToken;
}

- (void)dealloc;
- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (id)initWithName:(id)arg1;
- (id)initWithNotificationName:(const char *)arg1;
- (id)initWithNotificationName:(const char *)arg1 triggerName:(id)arg2;
- (const char *)notificationName;

@end
