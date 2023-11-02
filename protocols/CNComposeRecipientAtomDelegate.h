
@protocol CNComposeRecipientAtomDelegate <NSObject>

@required

- (void)composeRecipientAtomDisambiguate:(CNComposeRecipientAtom *)arg1;
- (void)composeRecipientAtomSelectNext:(CNComposeRecipientAtom *)arg1;
- (void)composeRecipientAtomSelectPrevious:(CNComposeRecipientAtom *)arg1;
- (void)composeRecipientAtomShowPersonCard:(CNComposeRecipientAtom *)arg1;
- (void)deselectComposeRecipientAtom:(CNComposeRecipientAtom *)arg1;
- (UIContextMenuConfiguration *)menuConfigurationForAtomView:(CNComposeRecipientAtom *)arg1;
- (void)selectComposeRecipientAtom:(CNComposeRecipientAtom *)arg1;
- (void)shiftSelectComposeRecipientAtom:(CNComposeRecipientAtom *)arg1;

@optional

- (void)composeRecipientAtomStopDisambiguating;

@end
