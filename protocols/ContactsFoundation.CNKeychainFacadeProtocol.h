
@protocol ContactsFoundation.CNKeychainFacadeProtocol

@required

- (_TtC18ContactsFoundation16CNKeychainResult *)createSymmetricKeyIfNeededWithLabel:(NSString *)arg1;
- (_TtC18ContactsFoundation16CNKeychainResult *)existingSymmetricKeyWithLabel:(NSString *)arg1;
- (_TtC18ContactsFoundation16CNKeychainResult *)removeEncryptionKeyWithLabel:(NSString *)arg1;

@end
