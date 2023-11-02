
@protocol VCMediaRecorderProtocol <NSObject>

@required

- (unsigned int)capabilities;
- (void)cleanupActiveRequests;
- (void)deregisterClient;
- (void)invalidate;
- (bool)processClientRequest:(NSDictionary *)arg1 error:(id*)arg2;
- (void)registerClient;
- (void)setMediaRecorderDelegate:(id <VCMediaRecorderDelegate>)arg1;

@end
