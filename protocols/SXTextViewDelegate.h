
@protocol SXTextViewDelegate <NSObject>

@required

- (NSString *)accessibilityContextualLabelForTextView:(SXTextView *)arg1;
- (NSSet *)accessibilityCustomRotorMembershipForTextView:(SXTextView *)arg1;
- (NSString *)componentIdentifierForTextView:(SXTextView *)arg1;
- (SXComponentTextRules *)textRulesForTextView:(SXTextView *)arg1;

@end
