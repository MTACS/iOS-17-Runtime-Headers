
@interface MRAVLightweightReconnaissanceSession : NSObject

- (void)searchEndpointsForCompanionWithTimeout:(double)arg1 reason:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)searchEndpointsForGroupUID:(id)arg1 timeout:(double)arg2 reason:(id)arg3 queue:(id)arg4 completion:(id /* block */)arg5;
- (void)searchEndpointsForLeaderOutputDeviceUID:(id)arg1 timeout:(double)arg2 reason:(id)arg3 queue:(id)arg4 completion:(id /* block */)arg5;
- (void)searchEndpointsForMyGroupLeaderWithTimeout:(double)arg1 reason:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)searchEndpointsForOutputDeviceUID:(id)arg1 timeout:(double)arg2 reason:(id)arg3 queue:(id)arg4 completion:(id /* block */)arg5;
- (void)searchEndpointsForRoutingContextUID:(id)arg1 timeout:(double)arg2 reason:(id)arg3 queue:(id)arg4 completion:(id /* block */)arg5;
- (void)searchEndpointsForString:(id)arg1 timeout:(double)arg2 reason:(id)arg3 queue:(id)arg4 completion:(id /* block */)arg5;
- (void)searchEndpointsWithPredicate:(id /* block */)arg1 timeout:(double)arg2 reason:(id)arg3 queue:(id)arg4 completion:(id /* block */)arg5;
- (void)searchForLogicalOutputDeviceUID:(id)arg1 timeout:(double)arg2 reason:(id)arg3 queue:(id)arg4 completion:(id /* block */)arg5;
- (void)searchForOutputDeviceUID:(id)arg1 timeout:(double)arg2 reason:(id)arg3 queue:(id)arg4 completion:(id /* block */)arg5;
- (void)searchForOutputDevices:(id)arg1 categories:(id)arg2 timeout:(double)arg3 reason:(id)arg4 queue:(id)arg5 completion:(id /* block */)arg6;
- (void)searchOutputDevices:(id)arg1 reason:(id)arg2 timeout:(double)arg3 queue:(id)arg4 completion:(id /* block */)arg5;

@end
