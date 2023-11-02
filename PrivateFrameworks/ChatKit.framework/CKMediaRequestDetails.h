
@interface CKMediaRequestDetails : NSObject {
    long long  _requestID;
    id /* block */  _resultHandler;
    NSString * _transferGUID;
}

@property (nonatomic, readonly) long long requestID;
@property (nonatomic, readonly) id /* block */ resultHandler;
@property (nonatomic, readonly) NSString *transferGUID;

- (void).cxx_destruct;
- (id)initWithRequestID:(long long)arg1 transferGUID:(id)arg2 resultHandler:(id /* block */)arg3;
- (long long)requestID;
- (id /* block */)resultHandler;
- (id)transferGUID;

@end
