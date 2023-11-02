
@interface APSDNSRequest : NSObject <NSSecureCoding> {
    NSString * _environment;
    long long  _flags;
    NSString * _hostname;
    NSDate * _requestStartTime;
    id /* block */  _responseBlock;
    double  _timeout;
}

@property (nonatomic, retain) NSString *environment;
@property (nonatomic, readonly, copy) NSString *hostname;
@property (nonatomic, retain) NSDate *requestStartTime;
@property (readonly, copy) id /* block */ responseBlock;
@property (nonatomic, readonly) double timeout;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)environment;
- (id)hostname;
- (id)initWithCoder:(id)arg1;
- (id)initWithHostname:(id)arg1 timeoutInSeconds:(double)arg2 requestFlags:(long long)arg3 responseBlock:(id /* block */)arg4;
- (id)requestStartTime;
- (id /* block */)responseBlock;
- (void)setEnvironment:(id)arg1;
- (void)setRequestStartTime:(id)arg1;
- (double)timeout;

@end
