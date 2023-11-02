
@protocol VCScreenCaptureSourceDelegate <NSObject>

@required

- (void)screenCaptureSourceProcessEventString:(NSString *)arg1;
- (void)screenCaptureSourceShouldClearScreen:(bool)arg1;

@end
