
@interface WFSetListeningModeAction : WFAction

- (id)errorFromRoutePickerError:(id)arg1;
- (id)errorUserInfoForRoutePickerErrorCode:(long long)arg1;
- (void)initializeParameters;
- (id)routeDescriptor;
- (void)runAsynchronouslyWithInput:(id)arg1;

@end
