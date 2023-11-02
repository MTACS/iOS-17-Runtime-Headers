
@interface HMDXPCRequest : HMFObject {
    NSString * _messageName;
    long long  _qualityOfService;
    id /* block */  _responseHandler;
    NSDate * _startTime;
}

@property (nonatomic, readonly) NSString *messageName;
@property (readonly) long long qualityOfService;
@property (nonatomic, readonly, copy) id /* block */ responseHandler;
@property (nonatomic, readonly) NSDate *startTime;

- (void).cxx_destruct;
- (id)initWithMessageName:(id)arg1 qualityOfService:(long long)arg2 responseHandler:(id /* block */)arg3;
- (id)messageName;
- (long long)qualityOfService;
- (id /* block */)responseHandler;
- (id)startTime;

@end
