
@interface SFSSOspreyTTSClient : OspreyChannel {
    NSString * _carryClusterId;
    NSString * _deviceId;
    bool  _useBlazar;
}

@property (nonatomic, retain) NSString *carryClusterId;
@property (nonatomic, retain) NSString *deviceId;
@property (nonatomic) bool useBlazar;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)carryClusterId;
- (id)deviceId;
- (id)init;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 useBlazar:(bool)arg2 enableAuthentication:(bool)arg3;
- (void)performCustomBidirectionalStreamingRequest:(id)arg1 handler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)prewarm;
- (void)setCarryClusterId:(id)arg1;
- (void)setDeviceId:(id)arg1;
- (void)setUseBlazar:(bool)arg1;
- (void)streamBlazarTTS:(id)arg1 headers:(id)arg2 beginHandler:(id /* block */)arg3 chunkHandler:(id /* block */)arg4 endHandler:(id /* block */)arg5 completion:(id /* block */)arg6;
- (void)streamNativeTTS:(id)arg1 headers:(id)arg2 beginHandler:(id /* block */)arg3 chunkHandler:(id /* block */)arg4 endHandler:(id /* block */)arg5 completion:(id /* block */)arg6;
- (void)streamTTS:(id)arg1 headers:(id)arg2 beginHandler:(id /* block */)arg3 chunkHandler:(id /* block */)arg4 endHandler:(id /* block */)arg5 completion:(id /* block */)arg6;
- (bool)useBlazar;

@end
