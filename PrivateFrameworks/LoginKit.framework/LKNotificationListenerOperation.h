
@interface LKNotificationListenerOperation : NSOperation {
    id /* block */  _listenerStartedBlock;
    id /* block */  _notificationListenerCompletionBlock;
    unsigned long long  _notificationType;
    int  _notifyToken;
    bool  _operationCancelled;
    bool  _operationExecuting;
    bool  _operationFinished;
    bool  _operationReady;
    double  _timeOutPeriod;
}

@property (nonatomic, copy) id /* block */ listenerStartedBlock;
@property (nonatomic, copy) id /* block */ notificationListenerCompletionBlock;
@property (nonatomic) unsigned long long notificationType;
@property (nonatomic) int notifyToken;
@property (nonatomic) bool operationCancelled;
@property (nonatomic) bool operationExecuting;
@property (nonatomic) bool operationFinished;
@property (nonatomic) bool operationReady;
@property (nonatomic) double timeOutPeriod;

- (void).cxx_destruct;
- (void)_endOperation;
- (id)_errorForNotificationType:(unsigned long long)arg1;
- (id)_notificationForNotificationType:(unsigned long long)arg1;
- (void)cancel;
- (id)initWithNotificationType:(unsigned long long)arg1 timeOutPeriod:(double)arg2 completionBlock:(id /* block */)arg3;
- (bool)isCancelled;
- (bool)isExecuting;
- (bool)isFinished;
- (id /* block */)listenerStartedBlock;
- (id /* block */)notificationListenerCompletionBlock;
- (unsigned long long)notificationType;
- (int)notifyToken;
- (bool)operationCancelled;
- (bool)operationExecuting;
- (bool)operationFinished;
- (bool)operationReady;
- (void)setListenerStartedBlock:(id /* block */)arg1;
- (void)setNotificationListenerCompletionBlock:(id /* block */)arg1;
- (void)setNotificationType:(unsigned long long)arg1;
- (void)setNotifyToken:(int)arg1;
- (void)setOperationCancelled:(bool)arg1;
- (void)setOperationExecuting:(bool)arg1;
- (void)setOperationFinished:(bool)arg1;
- (void)setOperationReady:(bool)arg1;
- (void)setTimeOutPeriod:(double)arg1;
- (void)start;
- (double)timeOutPeriod;

@end
