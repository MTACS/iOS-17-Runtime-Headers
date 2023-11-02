
@interface DSMe : NSObject {
    NSSet * _emails;
    NSString * _meCardIdentifier;
    NSSet * _phoneNumbers;
}

@property (nonatomic, copy) NSSet *emails;
@property (nonatomic, copy) NSString *meCardIdentifier;
@property (nonatomic, copy) NSSet *phoneNumbers;

- (void).cxx_destruct;
- (id)emails;
- (id)init;
- (id)meCardIdentifier;
- (id)phoneNumbers;
- (void)setEmails:(id)arg1;
- (void)setMeCardIdentifier:(id)arg1;
- (void)setPhoneNumbers:(id)arg1;

@end
