
@protocol HDSharingAuthorizationManagerObserver

@required

- (void)sharingAuthorizationManager:(HDSharingAuthorizationManager *)arg1 didAddSharingAuthorizations:(NSArray *)arg2 recipientIdentifier:(HKSharingRecipientIdentifier *)arg3;
- (void)sharingAuthorizationManager:(HDSharingAuthorizationManager *)arg1 didRemoveSharingAuthorizations:(NSArray *)arg2 recipientIdentifier:(HKSharingRecipientIdentifier *)arg3;
- (void)sharingAuthorizationManager:(HDSharingAuthorizationManager *)arg1 didRevokeRecipientWithIdentifier:(HKSharingRecipientIdentifier *)arg2;

@end
