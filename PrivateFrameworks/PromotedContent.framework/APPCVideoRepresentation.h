
@interface APPCVideoRepresentation : APPCContentRepresentation <APPCPromotableVideoRepresentation> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  $__lazy_storage_$_videoURL;
    void bitrate;
    void connectionType;
    void duration;
    void fileSize;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  originalVideoURL;
    void signalStrength;
    void skipEnabled;
    void skipThreshold;
    void unbranded;
    void videoSize;
}

@property (nonatomic, readonly) double bitrate;
@property (nonatomic, readonly) long long connectionType;
@property (nonatomic, readonly) long long fileSize;
@property (nonatomic, readonly) unsigned long long signalStrength;
@property (nonatomic, readonly) bool skipEnabled;
@property (nonatomic, readonly) double skipThreshold;
@property (nonatomic, readonly) bool unbranded;
@property (nonatomic, readonly) struct { double x1; double x2; } videoSize;
@property (nonatomic, copy) NSURL *videoURL;

- (void).cxx_destruct;
- (double)bitrate;
- (long long)connectionType;
- (long long)fileSize;
- (id)initWithIdentifier:(id)arg1 adType:(long long)arg2 desiredPosition:(long long)arg3 videoURL:(id)arg4 duration:(double)arg5 fileSize:(long long)arg6 skipThreshold:(double)arg7 skipEnabled:(bool)arg8 unbranded:(bool)arg9 bitrate:(double)arg10 connectionType:(long long)arg11 signalStrength:(unsigned long long)arg12 videoSize:(struct { double x1; double x2; })arg13 tapAction:(id)arg14 adPolicyData:(id)arg15;
- (void)setVideoURL:(id)arg1;
- (unsigned long long)signalStrength;
- (bool)skipEnabled;
- (double)skipThreshold;
- (bool)unbranded;
- (struct { double x1; double x2; })videoSize;
- (id)videoURL;

@end
