
@interface GDGraphHandleRelationship : NSObject <GDGraphObjectRelationship> {
    NSArray * _allLabel;
    NSArray * _emailAddresses;
    NSString * _label;
    NSArray * _phoneNumbers;
}

@property (nonatomic, readonly, copy) NSArray *allLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *emailAddresses;
@property (nonatomic, readonly, copy) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic, readonly, copy) NSArray *phoneNumbers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allLabel;
- (id)emailAddresses;
- (Class)graphObjectType;
- (id)initWithLabelField:(id)arg1 emailAddressesField:(id)arg2 phoneNumbersField:(id)arg3 allLabelField:(id)arg4;
- (id)label;
- (id)phoneNumbers;

@end
