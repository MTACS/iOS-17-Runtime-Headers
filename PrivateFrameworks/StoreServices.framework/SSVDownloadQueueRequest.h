
@interface SSVDownloadQueueRequest : SSRequest {
    long long  _queueType;
}

@property (nonatomic, readonly) long long queueType;

- (id)copyXPCEncoding;
- (id)initWithQueueType:(long long)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (long long)queueType;
- (void)startWithResponseBlock:(id /* block */)arg1;

@end
