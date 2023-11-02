
@interface AVRouteConfigUpdatedFigRoutingContextRouteChangeOperation : AVOperation <AVDestinationChangeResultSource> {
    AVOutputContextDestinationChange * _result;
    id /* block */  _routeChangeBlock;
    struct __CFString { } * _routeChangeID;
    NSObject<OS_dispatch_queue> * _routeChangeIvarAccessQueue;
    struct OpaqueFigRoutingContext { } * _routingContext;
    AVWeakReference * _weakObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AVOutputContextDestinationChange *result;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)_routeConfigUpdateWithID:(struct __CFString { }*)arg1 endedWithReason:(struct __CFString { }*)arg2;
- (void)_setResultIfNotAlreadySet:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithRoutingContext:(struct OpaqueFigRoutingContext { }*)arg1 routeChangeID:(struct __CFString { }*)arg2 routeChangeBlock:(id /* block */)arg3;
- (bool)isAsynchronous;
- (id)result;
- (void)start;

@end
