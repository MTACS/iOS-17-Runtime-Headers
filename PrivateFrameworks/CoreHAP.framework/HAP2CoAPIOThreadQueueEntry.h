
@interface HAP2CoAPIOThreadQueueEntry : NSObject {
    HMFActivity * _activity;
    <HAP2CoAPIOConsumer> * _consumer;
    unsigned long long  _operationType;
    id /* block */  _sessionBlock;
    double  _timeout;
}

- (void).cxx_destruct;
- (long long)compare:(id)arg1;

@end
