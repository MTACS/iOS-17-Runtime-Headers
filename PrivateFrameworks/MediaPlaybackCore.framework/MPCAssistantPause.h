
@interface MPCAssistantPause : NSObject {
    NSObject<OS_dispatch_queue> * deviceUIDsQueue;
}

- (void).cxx_destruct;
- (void)pauseDevicesByUID:(id)arg1 withRefId:(id)arg2 audioRoutingInfo:(struct { bool x1; bool x2; bool x3; bool x4; })arg3 completion:(id /* block */)arg4;
- (void)pauseDevicesByUID:(id)arg1 withRefId:(id)arg2 audioRoutingInfo:(struct { bool x1; bool x2; bool x3; bool x4; })arg3 source:(id)arg4 completion:(id /* block */)arg5;

@end
