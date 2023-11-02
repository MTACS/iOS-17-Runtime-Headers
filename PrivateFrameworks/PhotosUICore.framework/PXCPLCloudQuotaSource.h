
@interface PXCPLCloudQuotaSource : PXObservable {
    long long  _state;
}

@property (nonatomic, readonly) long long state;

- (void)_handleInAppMessage:(id)arg1;
- (void)currentInAppMessageDidChange:(id)arg1;
- (id)init;
- (void)setState:(long long)arg1;
- (long long)state;

@end
