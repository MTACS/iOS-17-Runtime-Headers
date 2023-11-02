
@protocol LOViewController <NSObject>

@required

- (NSString *)bundleIdentifier;
- (bool)didFinishDismissing;
- (bool)isForSnapshot;
- (void)setBundleIdentifier:(NSString *)arg1;
- (void)setForSnapshot:(bool)arg1;
- (void)setViewControllerDelegate:(id <LOViewControllerDelegate>)arg1;
- (<LOViewControllerDelegate> *)viewControllerDelegate;

@end
