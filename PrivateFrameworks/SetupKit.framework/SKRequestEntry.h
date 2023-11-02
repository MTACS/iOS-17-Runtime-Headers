
@interface SKRequestEntry : NSObject {
    NSDictionary * _options;
    NSString * _requestID;
    id /* block */  _responseHandler;
    unsigned long long  _sendTicks;
    NSObject<OS_dispatch_source> * _timer;
}

@property (nonatomic, copy) NSDictionary *options;
@property (nonatomic, copy) NSString *requestID;
@property (nonatomic, copy) id /* block */ responseHandler;
@property (nonatomic) unsigned long long sendTicks;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timer;

- (void).cxx_destruct;
- (id)options;
- (id)requestID;
- (id /* block */)responseHandler;
- (unsigned long long)sendTicks;
- (void)setOptions:(id)arg1;
- (void)setRequestID:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;
- (void)setSendTicks:(unsigned long long)arg1;
- (void)setTimer:(id)arg1;
- (id)timer;

@end
