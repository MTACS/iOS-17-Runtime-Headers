
@protocol UIAccessibilityReadingContent

@required

- (NSString *)accessibilityContentForLineNumber:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrameForLineNumber:(long long)arg1;
- (long long)accessibilityLineNumberForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (NSString *)accessibilityPageContent;

@optional

- (NSAttributedString *)accessibilityAttributedContentForLineNumber:(long long)arg1;
- (NSAttributedString *)accessibilityAttributedPageContent;

@end
