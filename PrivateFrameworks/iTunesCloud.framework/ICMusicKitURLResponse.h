
@interface ICMusicKitURLResponse : ICURLResponse {
    NSString * _serverCorrelationKey;
    NSString * _serverEnvironment;
    NSError * _serverError;
}

@property (nonatomic, readonly, copy) NSString *serverCorrelationKey;
@property (nonatomic, readonly, copy) NSString *serverEnvironment;
@property (nonatomic, readonly) NSError *serverError;

- (void).cxx_destruct;
- (void)_initializeMusicKitURLResponse;
- (id)_parseServerError;
- (id)_parseServerErrorDictionary:(id)arg1;
- (id)description;
- (id)initWithURLResponse:(id)arg1 urlRequest:(id)arg2 bodyData:(id)arg3 performanceMetrics:(id)arg4;
- (id)initWithURLResponse:(id)arg1 urlRequest:(id)arg2 bodyDataURL:(id)arg3 performanceMetrics:(id)arg4;
- (id)serverCorrelationKey;
- (id)serverEnvironment;
- (id)serverError;

@end
