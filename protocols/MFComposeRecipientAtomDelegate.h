
@protocol MFComposeRecipientAtomDelegate

@required

- (void)composeRecipientAtomSelectNext:(MFModernComposeRecipientAtom *)arg1;
- (void)composeRecipientAtomSelectPrevious:(MFModernComposeRecipientAtom *)arg1;
- (void)composeRecipientAtomShowPersonCard:(MFModernComposeRecipientAtom *)arg1;
- (void)deselectComposeRecipientAtom:(MFModernComposeRecipientAtom *)arg1;
- (void)selectComposeRecipientAtom:(MFModernComposeRecipientAtom *)arg1;

@end
