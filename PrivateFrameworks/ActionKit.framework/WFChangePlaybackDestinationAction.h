
@interface WFChangePlaybackDestinationAction : WFAction

- (id)errorFromRoutePickerError:(id)arg1;
- (id)errorUserInfoForRoutePickerErrorCode:(long long)arg1;
- (long long)operation;
- (id)routeDescriptor;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)subcategoryForCategory:(id)arg1;

@end
