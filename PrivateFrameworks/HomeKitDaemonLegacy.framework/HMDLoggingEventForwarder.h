
@interface HMDLoggingEventForwarder : HMFObject <HMEEventForwarder> {
    <HMEEventForwarder> * _eventForwarder;
    <HMMLogEventSubmitting> * _metricDispatcher;
}

- (void).cxx_destruct;
- (void)forwardEvent:(id)arg1 topic:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithEventForwarder:(id)arg1 metricDispatcher:(id)arg2;

@end
