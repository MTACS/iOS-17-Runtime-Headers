
@interface SABundleManagerApp : NSObject {
    NSDate * _authorizationDate;
    NSString * _bundleId;
    long long  _deviceType;
    NSString * _name;
    NSString * _pairedBundleId;
}

@property (nonatomic, retain) NSDate *authorizationDate;
@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic) long long deviceType;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, copy) NSString *pairedBundleId;

- (void).cxx_destruct;
- (id)authorizationDate;
- (id)bundleId;
- (long long)deviceType;
- (id)getLocalizedName;
- (void)getLocalizedNameForPairedDeviceWithCompletion:(id /* block */)arg1;
- (id)initWithBundleId:(id)arg1 deviceType:(long long)arg2;
- (id)name;
- (id)pairedBundleId;
- (void)setAuthorizationDate:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setDeviceType:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setPairedBundleId:(id)arg1;

@end
