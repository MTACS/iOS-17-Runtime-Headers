
@interface ATXInternalActionPredictionUpdatedNotification : NSObject {
    _ATXInternalNotification * _note;
}

+ (void)postNotification;

- (void).cxx_destruct;
- (id)init;
- (void)registerForNotificationsWithUpdateBlock:(id /* block */)arg1;

@end
