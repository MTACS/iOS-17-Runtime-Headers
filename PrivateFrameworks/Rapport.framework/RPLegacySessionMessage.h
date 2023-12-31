
@interface RPLegacySessionMessage : NSObject {
    NSDictionary * _message;
    NSDictionary * _options;
    NSString * _requestID;
    id /* block */  _responseHandler;
}

@property (nonatomic, copy) NSDictionary *message;
@property (nonatomic, copy) NSDictionary *options;
@property (nonatomic, copy) NSString *requestID;
@property (nonatomic, copy) id /* block */ responseHandler;

- (void).cxx_destruct;
- (id)message;
- (id)options;
- (id)requestID;
- (id /* block */)responseHandler;
- (void)setMessage:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setRequestID:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;

@end
