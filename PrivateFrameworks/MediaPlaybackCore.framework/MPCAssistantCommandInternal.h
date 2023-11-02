
@interface MPCAssistantCommandInternal : NSObject {
    NSMutableDictionary * _analytics;
    NSObject<OS_dispatch_group> * _analyticsGroup;
    NSObject<OS_dispatch_queue> * _analyticsQueue;
    MPCAssistantEndpointContext * _context;
    MPCAssistantSendCommand * _sendCommand;
    NSObject<OS_dispatch_queue> * _sendCommandQueue;
    NSDate * _startDate;
}

- (void).cxx_destruct;
- (id)_applyOriginatingDeviceUIDs:(id)arg1;
- (void)_findOutputDevicesForDestination:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)_setAnalyticsError:(id)arg1;
- (void)_setAnalyticsKey:(id)arg1 value:(id)arg2;
- (id)init;
- (void)sendCommandWithResult:(unsigned int)arg1 toDestination:(id)arg2 withOptions:(id)arg3 completion:(id /* block */)arg4;
- (void)sendPlaybackArchiveWithResult:(id)arg1 toDestination:(id)arg2 withOptions:(id)arg3 completion:(id /* block */)arg4;
- (void)sendPlaybackQueueWithResult:(id)arg1 toDestination:(id)arg2 withOptions:(id)arg3 completion:(id /* block */)arg4;

@end
