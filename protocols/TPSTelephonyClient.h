
@protocol TPSTelephonyClient <NSObject>

@required

- (id)delegate;
- (id)initWithQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (NSString *)localizedCarrierBundleStringForKey:(NSString *)arg1 subscription:(id <TPSTelephonySubscription>)arg2 error:(id*)arg3;
- (void)setDelegate:(id)arg1;

@end
