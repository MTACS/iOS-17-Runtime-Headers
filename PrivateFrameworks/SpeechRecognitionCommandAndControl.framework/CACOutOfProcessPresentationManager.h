
@interface CACOutOfProcessPresentationManager : NSObject <CACAXNotificationObserverDelegate, CACContentViewManager> {
    CACAXNotificationObserver * _observer;
}

@property (nonatomic, retain) CACAXNotificationObserver *observer;

+ (int)axNotification;
+ (long long)remoteViewType;

- (void).cxx_destruct;
- (void)handleAXNotificationData:(void*)arg1;
- (void)hide;
- (void)hideWithoutAnimation;
- (id)init;
- (bool)isOutOfProcess;
- (bool)isOverlay;
- (bool)isPhysiciallyInteractiveOverlay;
- (bool)isShowing;
- (id)observer;
- (void)observer:(id)arg1 didObserveNotification:(int)arg2 notificationData:(void*)arg3;
- (void)presentWithData:(id)arg1;
- (void)setObserver:(id)arg1;

@end
