
@interface LKLoginSupport : NSObject {
    NSOperationQueue * _completionQueue;
    NSOperationQueue * _listenerQueue;
}

@property (nonatomic, retain) NSOperationQueue *completionQueue;
@property (nonatomic, retain) NSOperationQueue *listenerQueue;

+ (id)findLeastRecentlyUsedCleanUser;
+ (bool)hasCleanUser;
+ (bool)isNewUserAbleToLogin;

- (void).cxx_destruct;
- (id)_errorForNotificationType:(unsigned long long)arg1;
- (id)_notificationForNotificationType:(unsigned long long)arg1;
- (void)_runWhenDarwinNotificationPosted:(unsigned long long)arg1 timeOutPeriod:(double)arg2 block:(id /* block */)arg3;
- (void)_runWithTimeOutPeriod:(double)arg1 notificationType:(unsigned long long)arg2 completionBlock:(id /* block */)arg3;
- (void)_timeOutAfterTimePeriod:(double)arg1 withError:(id)arg2 block:(id /* block */)arg3;
- (id)completionQueue;
- (id)init;
- (id)listenerQueue;
- (void)runWithTimeOutPeriod:(double)arg1 loggedInBlock:(id /* block */)arg2;
- (void)runWithTimeOutPeriod:(double)arg1 readyToLoginBlock:(id /* block */)arg2;
- (void)setCompletionQueue:(id)arg1;
- (void)setListenerQueue:(id)arg1;

@end
