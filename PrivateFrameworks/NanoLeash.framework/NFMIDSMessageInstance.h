
@interface NFMIDSMessageInstance : NSObject {
    id /* block */  _retryAction;
    long long  _retryCount;
    double  _retryInterval;
}

@property (nonatomic, copy) id /* block */ retryAction;
@property (nonatomic) long long retryCount;
@property (nonatomic) double retryInterval;

+ (id)newMessageInstanceWithAction:(id /* block */)arg1 retryCount:(long long)arg2 retryInterval:(double)arg3;

- (void).cxx_destruct;
- (id)description;
- (id /* block */)retryAction;
- (long long)retryCount;
- (double)retryInterval;
- (void)setRetryAction:(id /* block */)arg1;
- (void)setRetryCount:(long long)arg1;
- (void)setRetryInterval:(double)arg1;

@end
