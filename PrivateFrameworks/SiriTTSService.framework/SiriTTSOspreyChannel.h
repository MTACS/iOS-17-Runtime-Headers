
@interface SiriTTSOspreyChannel : NSObject {
    OspreyChannel * _grpcChannel;
}

@property (nonatomic, retain) OspreyChannel *grpcChannel;

- (void).cxx_destruct;
- (id)grpcChannel;
- (id)initWithURL:(id)arg1 configuration:(id)arg2;
- (void)initializeDeviceAuthenticationSessionWithCompletion:(id /* block */)arg1;
- (void)preconnect;
- (void)setGrpcChannel:(id)arg1;
- (void)streamTTS:(id)arg1 beginHandler:(id /* block */)arg2 chunkHandler:(id /* block */)arg3 completion:(id /* block */)arg4;

@end
