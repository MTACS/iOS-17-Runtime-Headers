
@interface WBSLocalAssetController : NSObject <WBSMobileAssetControllerProtocol> {
    <WBSMobileAssetControllerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    NSURL * _url;
}

@property <WBSMobileAssetControllerDelegate> *delegate;
@property (nonatomic, retain) NSDate *lastUpdateDate;
@property (nonatomic, readonly) double updateInterval;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithURL:(id)arg1;
- (id)lastUpdateDate;
- (void)queryURL:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastUpdateDate:(id)arg1;
- (double)updateInterval;

@end
