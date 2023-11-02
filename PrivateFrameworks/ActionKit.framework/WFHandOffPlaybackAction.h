
@interface WFHandOffPlaybackAction : WFAction

- (void)askForUserSpecificationOfMissingRouteWithRoutePicker:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)destinationRouteDescriptor;
- (id)errorFromRoutePickerError:(id)arg1;
- (id)errorUserInfoForRoutePickerErrorCode:(long long)arg1 involvedRouteName:(id)arg2;
- (void)findInvokingHomePodEndpointWithRoutePicker:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)invokingHomePodRouteDescriptor;
- (id)localEndpoint;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)runWhenInvokedThroughHomePodWithSpecifiedDescriptor:(id)arg1 picker:(id)arg2;
- (void)runWhenInvokedThroughLocalDeviceWithSpecifiedDescriptor:(id)arg1 picker:(id)arg2;
- (void)runWithSourceRouteUID:(id)arg1 destinationRouteUID:(id)arg2 routePicker:(id)arg3;
- (id)sourceRouteDescriptor;

@end
