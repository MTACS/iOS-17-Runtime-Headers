
@interface AVTDeviceResourceManager : NSObject <AVTDeviceResourceConsumerDelegate> {
    NSMutableArray * _consumers;
    <AVTUILogger> * _logger;
    NSObject<OS_dispatch_queue> * _stateLock;
}

@property (nonatomic, readonly) NSMutableArray *consumers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <AVTUILogger> *logger;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *stateLock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)consumer:(id)arg1 willConsumeRenderingResourceForEstimatedDuration:(double)arg2;
- (id)consumers;
- (id)initWithLogger:(id)arg1 lockProvider:(id /* block */)arg2;
- (id)logger;
- (void)performWorkWithConsumers:(id /* block */)arg1;
- (void)registerConsumer:(id)arg1;
- (id)stateLock;
- (void)unregisterConsumer:(id)arg1;

@end
