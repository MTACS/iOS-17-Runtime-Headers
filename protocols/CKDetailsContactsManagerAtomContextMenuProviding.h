
@protocol CKDetailsContactsManagerAtomContextMenuProviding <NSObject>

@required

- (UIMenu *)contextMenuForEntity:(CKEntity *)arg1 atom:(CNComposeRecipientAtom *)arg2;
- (UIMenu *)contextMenuForUnknownRecipient:(CKEntity *)arg1 atom:(CNComposeRecipientAtom *)arg2;

@end
