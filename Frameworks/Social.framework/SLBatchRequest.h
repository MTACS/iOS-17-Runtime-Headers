
@interface SLBatchRequest : SLRequest {
    NSMutableArray * _requests;
}

- (void).cxx_destruct;
- (void)addRequest:(id)arg1;
- (id)initWithServiceType:(id)arg1 URL:(id)arg2 parameters:(id)arg3 requestMethod:(long long)arg4;
- (id)preparedURLRequest;

@end
