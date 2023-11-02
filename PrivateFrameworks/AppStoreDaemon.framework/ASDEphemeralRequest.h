
@interface ASDEphemeralRequest : ASDRequest {
    id /* block */  _completionHandler;
    ASDRequestOptions * _options;
}

@property (nonatomic, readonly, copy) ASDRequestOptions *options;

+ (long long)requestType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)options;
- (void)receiveResponse:(id)arg1;

@end
