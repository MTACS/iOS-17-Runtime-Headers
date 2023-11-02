
@protocol CSStatusBarBackgroundIntersecting <NSObject>

@required

- (double)distanceFromBarToContent;
- (double)topContentInset;
- (void)updateAppearanceForStatusBarBackgroundHidden:(bool)arg1;

@end
