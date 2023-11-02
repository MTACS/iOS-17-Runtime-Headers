
@protocol VCMediaRecorderDelegate <NSObject>

@required

- (void)streamToken:(long long)arg1 didEndProcessingRequest:(NSDictionary *)arg2 stillImageURL:(NSURL *)arg3 movieURL:(NSURL *)arg4 error:(NSError *)arg5;
- (void)streamToken:(long long)arg1 didFinishRequest:(NSDictionary *)arg2 didSucceed:(bool)arg3;
- (void)streamToken:(long long)arg1 didStartProcessingRequest:(NSDictionary *)arg2 error:(NSError *)arg3;
- (void)streamToken:(long long)arg1 didUpdateCapabilities:(unsigned int)arg2;
- (void)streamTokenDidCleanupAllRequests:(long long)arg1;

@end
