
@protocol C2SessionDelegate <NSObject>

@required

- (void)C2Session:(C2Session *)arg1 didBecomeInvalidWithError:(NSError *)arg2;
- (void)C2Session:(C2Session *)arg1 originalHost:(NSString *)arg2 updatedRoute:(NSString *)arg3;
- (NSObject<OS_dispatch_queue> *)underlyingDelegateQueue;

@end
