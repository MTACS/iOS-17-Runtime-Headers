
@interface WCDeviceLookup : NSObject {
    ACAccountStore * _accountStore;
}

@property (nonatomic, readonly) ACAccountStore *accountStore;

- (void).cxx_destruct;
- (id)accountStore;
- (void)checkAllDevicesRunningMinimumiOSVersion:(struct { long long x1; long long x2; })arg1 macOSVersion:(struct { long long x1; long long x2; })arg2 orInactiveForTimeInterval:(double)arg3 completionHandler:(id /* block */)arg4;
- (id)init;

@end
