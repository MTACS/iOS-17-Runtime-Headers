
@protocol HRTFEnrollmentNotificationProtocol <NSObject>

@required

- (void)assetDownloadSessionProgressUpdate:(HRTFEnrollmentAssetDownloadProgress *)arg1;
- (void)sessionStarted:(bool)arg1 error:(NSError *)arg2;
- (void)updateResultSize:(unsigned long long)arg1;
- (void)updateState:(unsigned long long)arg1 withProgress:(float)arg2 facePoseStatus:(HRTFEnrollmentPoseStatus *)arg3 earPoseStatus:(HRTFEnrollmentEarPoseStatus *)arg4 errorStatus:(NSError *)arg5;

@end
