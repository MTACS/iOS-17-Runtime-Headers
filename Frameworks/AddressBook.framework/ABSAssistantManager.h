
@interface ABSAssistantManager : NSObject {
    ABSAddressBook * _addressBook;
}

@property (nonatomic, readonly) ABSAddressBook *addressBook;

- (void).cxx_destruct;
- (id)addressBook;
- (id)init;
- (id)initWithAddressBook:(id)arg1;
- (id)newSAPersonFromABPerson:(void*)arg1;

@end
