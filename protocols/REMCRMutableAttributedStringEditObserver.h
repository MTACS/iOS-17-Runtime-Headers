
@protocol REMCRMutableAttributedStringEditObserver <NSObject>

@required

- (void)mutableAttributedString:(REMCRMutableAttributedString *)arg1 didEdit:(long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 changeInLength:(long long)arg4;

@end
