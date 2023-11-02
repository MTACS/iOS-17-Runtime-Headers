
@interface CRKCatalystNetworkPowerAssertion : NSObject <CATCancelable> {
    bool  _canceled;
}

@property (getter=isCanceled, nonatomic) bool canceled;

- (void)cancel;
- (void)dealloc;
- (bool)isCanceled;
- (void)setCanceled:(bool)arg1;

@end
