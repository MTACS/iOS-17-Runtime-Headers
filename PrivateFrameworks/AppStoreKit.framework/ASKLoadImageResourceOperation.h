
@interface ASKLoadImageResourceOperation : ASKLoadResourceOperation {
    <ASKResourceDataConsumer> * _dataConsumer;
    NSObject<OS_dispatch_queue> * _dataConsumerQueue;
    NSURLSessionDataTask * _task;
}

@property (nonatomic, readonly) <ASKResourceDataConsumer> *dataConsumer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dataConsumerQueue;
@property (nonatomic, readonly) NSURLSessionDataTask *task;

+ (id)URLSession;
+ (id)dataConsumerQueue;
+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)supportedScheme;

- (void).cxx_destruct;
- (void)cancel;
- (id)dataConsumer;
- (id)dataConsumerQueue;
- (void)didFinishTaskWithData:(id)arg1 response:(id)arg2 error:(id)arg3;
- (id)initWithURLRequest:(id)arg1 URLSession:(id)arg2 dataConsumer:(id)arg3 dataConsumerQueue:(id)arg4;
- (id)initWithURLRequest:(id)arg1 dataConsumer:(id)arg2;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (void)setQueuePriority:(long long)arg1;
- (void)start;
- (id)task;

@end
