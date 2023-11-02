
@protocol CAMMutableCaptureRequestLibrarySelection <NSObject>

@required

- (NSArray *)contactIDsInProximity;
- (void)setContactIDsInProximity:(NSArray *)arg1;
- (void)setSharedLibraryDiagnostics:(NSDictionary *)arg1;
- (void)setSharedLibraryMode:(long long)arg1;
- (NSDictionary *)sharedLibraryDiagnostics;
- (long long)sharedLibraryMode;

@end
