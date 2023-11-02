
@interface WFScanProxy : NSObject <WFScanManagerScanProxy> {
    WFClient * _client;
}

@property (nonatomic, retain) WFClient *client;
@property (nonatomic, readonly) double scanInterval;
@property (nonatomic, readonly) NSArray *scannableChannels;
@property (getter=isScanningAllowed, nonatomic, readonly) bool scanningAllowed;

+ (id)scanProxyWithClient:(id)arg1;

- (void).cxx_destruct;
- (id)client;
- (id)initWithClient:(id)arg1;
- (void)initiateNoNetworksSoftError;
- (bool)isChannel6GHzPSC:(id)arg1;
- (bool)isScanningAllowed;
- (void)performScanWithRequest:(id)arg1 reply:(id /* block */)arg2;
- (double)scanInterval;
- (id)scannableChannels;
- (void)setClient:(id)arg1;

@end
