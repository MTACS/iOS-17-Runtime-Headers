
@interface DriverManager : NSObject {
    NSMutableArray * _observers;
    _SwiftDriverManager * _swiftManager;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)driverApprovalStatesForThirdPartyApp:(id)arg1;
- (long long)driverCount;
- (long long)driverCountForAppID:(id)arg1;
- (id)initWithSwiftManager:(id)arg1;
- (void)refresh;
- (void)removeObserver:(id)arg1;
- (void)setDriverState:(id)arg1 approved:(bool)arg2;
- (long long)thirdPartyDriverCount;

@end
