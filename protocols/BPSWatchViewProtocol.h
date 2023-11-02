
@protocol BPSWatchViewProtocol <NSObject>

@required

- (NSString *)screenImageName;
- (NSString *)screenImageSearchBundleIdentifier;
- (void)setScreenImageName:(NSString *)arg1;
- (void)setScreenImageSearchBundleIdentifier:(NSString *)arg1;
- (UIImageView *)watchScreenImageView;

@optional

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })watchScreenInsetGuide;

@end
