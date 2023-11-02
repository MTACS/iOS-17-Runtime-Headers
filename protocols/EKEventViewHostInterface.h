
@protocol EKEventViewHostInterface

@required

- (void)didCompleteWithAction:(long long)arg1;
- (void)requestDismissViewWithName:(NSString *)arg1 presentationStyle:(long long)arg2;
- (void)requestPresentViewWithName:(NSString *)arg1 viewID:(NSString *)arg2 presentationStyle:(long long)arg3 sourceRect:(NSValue *)arg4 preferredContentSize:(NSValue *)arg5 oopContentBackgroundColor:(UIColor *)arg6;

@end
