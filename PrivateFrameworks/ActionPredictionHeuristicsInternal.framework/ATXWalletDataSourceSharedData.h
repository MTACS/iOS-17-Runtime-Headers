
@interface ATXWalletDataSourceSharedData : NSObject {
    bool  _hasEmptyWalletPasses;
    NSDate * _lastWalletPassCheckDate;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_passesDidChange;
- (bool)hasEmptyWalletPasses;
- (id)init;
- (void)setHasEmptyWalletPasses:(bool)arg1;

@end
