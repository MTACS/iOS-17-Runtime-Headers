
@protocol UIAccessibilityContainerDataTableCell <NSObject>

@required

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })accessibilityColumnRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })accessibilityRowRange;

@end
