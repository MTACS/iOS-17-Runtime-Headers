
@interface ATXInternalActionPredictionUpdateNotification : NSObject {
    _ATXInternalNotification * _note;
}

+ (void)postNotificationWithCacheRefreshTTL:(double)arg1 reason:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)init;
- (void)registerForNotificationsWithUpdateBlock:(id /* block */)arg1;

@end
