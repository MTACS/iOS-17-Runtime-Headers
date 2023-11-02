
@interface WFMediaRouteFinder : NSObject <WFMediaRoutePickerObserver> {
    id /* block */  _completionHandler;
    WFMediaRoutePicker * _picker;
    WFMediaRouteDescriptor * _routeDescriptor;
    double  _timeout;
    WFDispatchSourceTimer * _timer;
}

@property (nonatomic, readonly) id /* block */ completionHandler;
@property (nonatomic, readonly) WFMediaRoutePicker *picker;
@property (nonatomic, readonly) WFMediaRouteDescriptor *routeDescriptor;
@property (nonatomic, readonly) double timeout;
@property (nonatomic, readonly) WFDispatchSourceTimer *timer;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (void)finishWithMatchingRoute:(id)arg1 error:(id)arg2;
- (id)initWithPicker:(id)arg1 routeDescriptor:(id)arg2 timeout:(double)arg3 completionHandler:(id /* block */)arg4;
- (id)picker;
- (id)routeDescriptor;
- (void)routePickerDidUpdateAvailableRoutes:(id)arg1;
- (void)start;
- (double)timeout;
- (id)timer;

@end
