
@interface MapsSuggestionsDestinationdTrigger : MapsSuggestionsBaseTrigger {
    NSSet * _ignoredPeerIdentifiers;
    struct unique_ptr<MSg::NotificationReceiver, std::default_delete<MSg::NotificationReceiver>> { 
        struct __compressed_pair<MSg::NotificationReceiver *, std::default_delete<MSg::NotificationReceiver>> { 
            struct NotificationReceiver {} *__value_; 
        } __ptr_; 
    }  _notificationReceiver;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addIgnoredClientProcess:(id)arg1;
- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (id)init;
- (id)initWithName:(id)arg1;

@end
