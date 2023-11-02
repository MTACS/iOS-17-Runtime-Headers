
@interface HMDHAPAccessoryLocalOperationTask : HMDHAPAccessoryTask {
    NSDictionary * _logEvents;
}

@property (readonly) NSString *activityRequestEventName;
@property (readonly) NSString *activityResponseEventName;
@property (retain) NSDictionary *logEvents;

- (void).cxx_destruct;
- (id /* block */)_completionHandlerForAccessory:(id)arg1 accessoryRequests:(id)arg2 responseWaitGroup:(id)arg3;
- (void)_dispatchToAccessory:(id)arg1 requests:(id)arg2 logEvent:(id)arg3 completion:(id /* block */)arg4;
- (id)activityRequestEventName;
- (id)activityResponseEventName;
- (void)execute;
- (id)logEvents;
- (void)setLogEvents:(id)arg1;

@end
