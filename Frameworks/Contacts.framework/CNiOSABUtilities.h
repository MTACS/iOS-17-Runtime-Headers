
@interface CNiOSABUtilities : NSObject {
    void * _addressBook;
}

- (id)allAccountIdentifiers;
- (void)dealloc;
- (id)filterPeople:(id)arg1 matchingAccountIdentifiers:(id)arg2;
- (id)initWithAddressBook:(void*)arg1;

@end
