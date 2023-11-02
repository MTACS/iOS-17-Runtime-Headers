
@interface AXLocalNotificationHandler : VISAXNotificationHandler {
    id  _opaqueObserver;
}

@property (setter=_setOpaqueObserver:, nonatomic, retain) id _opaqueObserver;

- (void).cxx_destruct;
- (id)_notificationTypeDescription;
- (id)_opaqueObserver;
- (void)_setOpaqueObserver:(id)arg1;
- (void)_startObserving;
- (void)_startObservingWithObject:(id)arg1;
- (void)_stopObserving;
- (void)_stopObservingWithObject:(id)arg1;

@end
