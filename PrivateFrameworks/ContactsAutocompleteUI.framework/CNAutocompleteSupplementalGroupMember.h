
@interface CNAutocompleteSupplementalGroupMember : NSObject {
    NSString * _address;
    long long  _addressType;
    NSString * _name;
    NSPersonNameComponents * _nameComponents;
}

@property (readonly, copy) NSString *address;
@property (readonly) long long addressType;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSPersonNameComponents *nameComponents;

- (void).cxx_destruct;
- (id)address;
- (long long)addressType;
- (id)initWithName:(id)arg1 address:(id)arg2 addressType:(long long)arg3;
- (id)initWithNameComponents:(id)arg1 address:(id)arg2 addressType:(long long)arg3;
- (id)name;
- (id)nameComponents;

@end
