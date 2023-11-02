
@interface ASDClipSession : NSObject <ASDClipSessionChannel> {
    <ASDClipServiceBroker> * _broker;
    <ASDClipSessionDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    ASDClipRequest * _request;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ASDClipSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueID;

- (void).cxx_destruct;
- (void)cancelInstallWithCompletionHandler:(id /* block */)arg1;
- (void)channelNotifyDidComplete;
- (void)channelNotifyDidFailWithError:(id)arg1;
- (void)channelNotifyDidInstallPlaceholder;
- (void)channelNotifyDidProgress:(double)arg1;
- (void)channelStateDidClose;
- (void)channelStateDidOpen;
- (void)continueInstallWithCompletionHandler:(id /* block */)arg1;
- (id)delegate;
- (void)downloadAndInstallWithCompletionHandler:(id /* block */)arg1;
- (id)initWithRequest:(id)arg1;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2 usingBroker:(id)arg3;
- (void)installPlaceholderWithCompletionHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)startDownloadWithCompletionHandler:(id /* block */)arg1;
- (id)uniqueID;

@end
