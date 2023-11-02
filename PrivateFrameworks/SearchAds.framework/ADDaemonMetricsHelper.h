
@interface ADDaemonMetricsHelper : NSObject {
    NSString * _adamID;
}

@property (nonatomic, readonly) NSString *adamID;

- (void).cxx_destruct;
- (id)adamID;
- (void)downloadCompleted;
- (void)downloadInitiated;
- (id)initWithAdamID:(id)arg1;
- (void)installCompleted;
- (void)purchaseCompleted;

@end
