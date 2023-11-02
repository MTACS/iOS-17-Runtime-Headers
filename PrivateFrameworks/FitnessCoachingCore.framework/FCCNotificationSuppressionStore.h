
@interface FCCNotificationSuppressionStore : NSObject {
    FCCDateProvider * _dateProvider;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _unfairLock;
}

- (void).cxx_destruct;
- (id)_requestsMap;
- (void)_updateStoredRequests:(id)arg1;
- (id)_userDefaults;
- (void)addNotificationSuppressionRequest:(id)arg1;
- (id)allRequests;
- (id)init;
- (id)initWithDateProvider:(id)arg1;
- (bool)lastNotifiedSuppressionState;
- (bool)notificationsSuppressed;
- (void)removeNotificationSuppressionRequest:(id)arg1;
- (void)setLastNotifiedSuppressionState:(bool)arg1;

@end
