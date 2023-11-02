
@interface WFCaptiveObserver : NSObject {
    NSObject<OS_dispatch_queue> * _captiveNotificationQueue;
    int  _endCaptiveNotificationToken;
    id /* block */  _eventHandler;
    bool  _observing;
    int  _startCaptiveNotificationToken;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *captiveNotificationQueue;
@property (nonatomic) int endCaptiveNotificationToken;
@property (nonatomic, copy) id /* block */ eventHandler;
@property (getter=isObserving, nonatomic) bool observing;
@property (nonatomic) int startCaptiveNotificationToken;

- (void).cxx_destruct;
- (id)captiveNotificationQueue;
- (void)dealloc;
- (int)endCaptiveNotificationToken;
- (id /* block */)eventHandler;
- (id)init;
- (bool)isObserving;
- (void)setCaptiveNotificationQueue:(id)arg1;
- (void)setEndCaptiveNotificationToken:(int)arg1;
- (void)setEventHandler:(id /* block */)arg1;
- (void)setObserving:(bool)arg1;
- (void)setStartCaptiveNotificationToken:(int)arg1;
- (int)startCaptiveNotificationToken;
- (void)startObservingEvents;
- (void)stopObservingEvents;

@end
