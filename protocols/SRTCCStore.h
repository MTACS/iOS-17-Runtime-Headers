
@protocol SRTCCStore <NSObject>

@required

- (NSArray *)bundleIdentifiersDisabledForService:(NSString *)arg1;
- (NSArray *)bundleIdentifiersForService:(NSString *)arg1;
- (bool)checkAccessForService:(NSString *)arg1 auditToken:(struct { unsigned int x1[8]; })arg2;
- (NSArray *)informationForBundleId:(NSString *)arg1;
- (bool)isOverriddenForService:(NSString *)arg1;
- (long long)preflightAuthorizationStatusForService:(NSString *)arg1;
- (void)requestAccessForService:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned char, void*
- (bool)resetService:(NSString *)arg1;
- (bool)resetService:(NSString *)arg1 forBundleId:(NSString *)arg2;
- (bool)setOverride:(bool)arg1 forService:(NSString *)arg2;
- (bool)setValue:(bool)arg1 forService:(NSString *)arg2 bundleId:(NSString *)arg3;

@end
