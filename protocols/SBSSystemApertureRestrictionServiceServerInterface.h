
@protocol SBSSystemApertureRestrictionServiceServerInterface <NSObject>

@required

- (NSUUID *)acquireRestrictSystemApertureLayoutToInertAssertionIdentifierWithReason:(NSString *)arg1;
- (NSUUID *)acquireSystemApertureCompleteSuppressionAssertionIdentifierWithReason:(NSString *)arg1;
- (oneway void)invalidateRestrictSystemApertureLayoutToInertAssertionWithIdentifier:(NSString *)arg1;
- (oneway void)invalidateSystemApertureCompleteSuppressionAssertionWithIdentifier:(NSString *)arg1;

@end
