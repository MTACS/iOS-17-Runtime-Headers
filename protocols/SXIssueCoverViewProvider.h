
@protocol SXIssueCoverViewProvider <NSObject>

@required

- (void)presentIssueCover:(SXIssueCover *)arg1 onView:(UIView *)arg2 options:(SXIssueCoverPresentationOptions *)arg3;
- (UIView *)viewForIssueCover:(SXIssueCover *)arg1;

@end
