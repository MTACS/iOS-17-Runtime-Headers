
@interface TVRCMediaRemoteEndpointManager : NSObject {
    NSObject<OS_dispatch_queue> * _mediaRemoteQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *mediaRemoteQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)fetchActiveEndpointWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)mediaRemoteQueue;
- (void)setMediaRemoteQueue:(id)arg1;
- (void)updateActiveEndpoint:(id)arg1 withCompletion:(id /* block */)arg2;

@end
