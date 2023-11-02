
@protocol WebClipDelegate <NSObject>

@optional

- (void)webClip:(UIWebClip *)arg1 iconRequestDidFinishWithImage:(UIImage *)arg2 precomposed:(bool)arg3;
- (void)webClip:(UIWebClip *)arg1 startupImageRequestDidFinishWithImage:(UIImage *)arg2;
- (void)webClip:(UIWebClip *)arg1 startupLandscapeImageRequestDidFinishWithImage:(UIImage *)arg2;

@end
