
@interface HKRPWatchAppInstallability : NSObject {
    <HKRPWatchAppInstallabilityDataSource> * _dataSource;
}

@property (nonatomic, readonly) bool shouldInstallWatchApp;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDataSource:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (bool)shouldInstallWatchApp;

@end
