
@interface CAMVideoCaptureRequest : CAMCaptureRequest <NSCopying, NSMutableCopying> {
    long long  _captureVideoConfiguration;
    <CAMVideoCaptureRequestDelegate> * _delegate;
    double  _maximumRecordedDuration;
    long long  _maximumRecordedFileSize;
    long long  _remainingDiskUsageThreshold;
    bool  _shouldGenerateVideoPreviewImage;
    bool  _timelapse;
    long long  _torchMode;
    double  _userInitationTimestamp;
    bool  _wantsWhiteBalanceLocked;
}

@property (nonatomic, readonly) long long captureVideoConfiguration;
@property (nonatomic, readonly) <CAMVideoCaptureRequestDelegate> *delegate;
@property (nonatomic, readonly) double maximumRecordedDuration;
@property (nonatomic, readonly) long long maximumRecordedFileSize;
@property (nonatomic, readonly) long long remainingDiskUsageThreshold;
@property (nonatomic, readonly) bool shouldGenerateVideoPreviewImage;
@property (getter=isTimelapse, nonatomic, readonly) bool timelapse;
@property (nonatomic, readonly) long long torchMode;
@property (nonatomic, readonly) double userInitationTimestamp;
@property (nonatomic, readonly) bool wantsWhiteBalanceLocked;

- (void).cxx_destruct;
- (long long)captureVideoConfiguration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (id)description;
- (id)init;
- (id)initWithRequest:(id)arg1 distinctPersistence:(bool)arg2 includeAnalytics:(bool)arg3;
- (bool)isTimelapse;
- (double)maximumRecordedDuration;
- (long long)maximumRecordedFileSize;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)remainingDiskUsageThreshold;
- (bool)shouldGenerateVideoPreviewImage;
- (long long)torchMode;
- (double)userInitationTimestamp;
- (bool)wantsWhiteBalanceLocked;

@end
