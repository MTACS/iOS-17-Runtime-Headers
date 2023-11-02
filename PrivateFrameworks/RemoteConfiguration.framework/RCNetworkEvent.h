
@interface RCNetworkEvent : NSObject {
    NSError * _error;
    NSURLSessionTaskTransactionMetrics * _metrics;
    NSString * _operationID;
    NSURLRequest * _request;
    NSString * _requestID;
    NSHTTPURLResponse * _response;
    long long  _resultType;
    NSDate * _startDate;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSURLSessionTaskTransactionMetrics *metrics;
@property (nonatomic, readonly) NSString *operationID;
@property (nonatomic, readonly) NSURLRequest *request;
@property (nonatomic, readonly) NSString *requestID;
@property (nonatomic, readonly) NSHTTPURLResponse *response;
@property (nonatomic, readonly) long long resultType;
@property (nonatomic, readonly) NSDate *startDate;

- (void).cxx_destruct;
- (id)error;
- (id)initWithResultType:(long long)arg1 request:(id)arg2 startDate:(id)arg3 operationID:(id)arg4 requestID:(id)arg5 response:(id)arg6 metrics:(id)arg7 error:(id)arg8;
- (id)metrics;
- (id)operationID;
- (id)request;
- (id)requestID;
- (id)response;
- (long long)resultType;
- (id)startDate;

@end
