
@protocol CNContactHeaderViewDelegate <NSObject>

@required

- (CNContactViewCache *)contactViewCache;
- (void)headerPhotoDidUpdate;
- (void)headerView:(CNContactHeaderView *)arg1 didAcceptDropOfImageData:(NSData *)arg2;
- (void)headerViewDidChangeHeight:(CNContactHeaderView *)arg1;
- (void)headerViewDidPickPreferredChannel:(NSString *)arg1;
- (void)headerViewDidUpdateLabelSizes;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })headerViewSafeAreaInsets;
- (bool)isNicknameProhibited;
- (bool)isOrientationPhoneLandscape;
- (double)navigationBarHeight;
- (UIViewController *)viewControllerForHeaderView:(CNContactHeaderView *)arg1;

@optional

- (void)headerView:(CNContactHeaderView *)arg1 didSetBackgroundAsGradientColors:(NSArray *)arg2;
- (void)headerView:(CNContactHeaderView *)arg1 didSetBackgroundAsPosterSnapshotImage:(UIImage *)arg2;
- (void)headerView:(CNContactHeaderView *)arg1 didSetNameLabelColor:(UIColor *)arg2;
- (void)headerViewDidTapNameLabel:(CNContactHeaderView *)arg1;

@end
