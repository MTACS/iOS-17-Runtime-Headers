
@interface ContactsFoundation.CNKeychainFacadeTestDouble : NSObject <ContactsFoundation.CNKeychainFacadeProtocol> {
    void keyDict;
    void keychainEnabled;
}

- (void).cxx_destruct;
- (id)createSymmetricKeyIfNeededWithLabel:(id)arg1;
- (id)existingSymmetricKeyWithLabel:(id)arg1;
- (id)init;
- (id)removeEncryptionKeyWithLabel:(id)arg1;

@end
