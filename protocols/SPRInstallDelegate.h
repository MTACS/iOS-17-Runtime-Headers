
@protocol SPRInstallDelegate

@required

- (void)onUpdateWithEvent:(long long)arg1;
- (void)onUpdateWithEvent:(long long)arg1 progress:(long long)arg2;

@optional

- (void)onFailureWithError:(NSError *)arg1;
- (void)onSuccessWithInstallData:(SPRInstallData *)arg1;

@end
