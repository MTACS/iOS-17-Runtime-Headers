
@interface AVSwitchToLatestPublisher : AVPublisher {
    struct OpaqueFigReentrantMutex { } * _callbackMutex;
    AVNotificationSubscription * _outputPublisherSubscription;
    int  _publisherIndex;
    AVPublisher * _upstream;
}

+ (id)switchToLatestPublisherWithUpstream:(id)arg1;

- (void)dealloc;
- (id)description;
- (id)initWithUpstream:(id)arg1;
- (id)subscribeRequestingInitialValue:(bool)arg1 block:(id /* block */)arg2;

@end
