
@interface AAAttributionResult : NSObject <NSSecureCoding> {
    double  _daemonRunningTime;
    NSError * _error;
    long long  _source;
    NSString * _storeFront;
    bool  _success;
    NSString * _token;
}

@property (nonatomic) double daemonRunningTime;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) long long source;
@property (nonatomic, retain) NSString *storeFront;
@property (nonatomic, readonly) bool success;
@property (nonatomic, readonly) NSString *token;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)daemonRunningTime;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id)arg1;
- (id)initWithToken:(id)arg1 source:(long long)arg2;
- (id)initWithToken:(id)arg1 success:(bool)arg2 error:(id)arg3 source:(long long)arg4;
- (void)setDaemonRunningTime:(double)arg1;
- (void)setStoreFront:(id)arg1;
- (long long)source;
- (id)storeFront;
- (bool)success;
- (id)token;

@end
