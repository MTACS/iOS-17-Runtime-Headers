
@protocol EKTimeZoneViewControllerDelegate <NSObject>

@required

- (void)timeZoneViewController:(EKTimeZoneViewController *)arg1 didSelectTimeZone:(NSTimeZone *)arg2;
- (void)timeZoneViewControllerDidCancel:(EKTimeZoneViewController *)arg1;

@end
