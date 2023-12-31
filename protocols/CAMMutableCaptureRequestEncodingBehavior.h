
@protocol CAMMutableCaptureRequestEncodingBehavior <NSObject>

@required

- (long long)photoEncodingBehavior;
- (void)setPhotoEncodingBehavior:(long long)arg1;
- (void)setVideoEncodingBehavior:(long long)arg1;
- (long long)videoEncodingBehavior;

@end
