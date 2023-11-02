
@interface HRTFEnrollmentAssetDownloadProgress : NSObject {
    long long  _downloadedBytes;
    double  _estimatedRemainingTime;
    bool  _isStalled;
    long long  _totalBytes;
}

@property (readonly) long long downloadedBytes;
@property (readonly) double estimatedRemainingTime;
@property (readonly) bool isStalled;
@property (readonly) long long totalBytes;

- (long long)downloadedBytes;
- (double)estimatedRemainingTime;
- (id)initWithTotalBytes:(long long)arg1 downloadedBytes:(long long)arg2 isStalled:(bool)arg3 estimatedRemainingTime:(double)arg4;
- (bool)isStalled;
- (long long)totalBytes;

@end
