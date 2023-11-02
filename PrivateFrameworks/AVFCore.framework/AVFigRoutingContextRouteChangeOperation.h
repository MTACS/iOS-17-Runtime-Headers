
@interface AVFigRoutingContextRouteChangeOperation : AVOperation <AVDestinationChangeResultSource> {
    bool  _actOnRouteChangeNotifications;
    NSObject<OS_dispatch_queue> * _notificationManagementQueue;
    AVOutputContextDestinationChange * _result;
    id /* block */  _routeChangeBlock;
    struct __CFNumber { } * _routeChangeID;
    struct OpaqueFigRoutingContext { } * _routingContext;
    struct __CFString { } * _successNotification;
    AVWeakReference * _weakObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AVOutputContextDestinationChange *result;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)_routeChangeComplete;
- (void)_routeChangeStartedWithID:(struct __CFNumber { }*)arg1;
- (void)_routeChangeWithID:(struct __CFNumber { }*)arg1 endedWithReason:(struct __CFString { }*)arg2;
- (void)_setResultIfNotAlreadySet:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithRoutingContext:(struct OpaqueFigRoutingContext { }*)arg1 successNotification:(struct __CFString { }*)arg2 routeChangeBlock:(id /* block */)arg3;
- (bool)isAsynchronous;
- (id)result;
- (void)start;

@end
