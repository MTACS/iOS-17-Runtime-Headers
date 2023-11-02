
@interface CNHandleStringsClassificationBuilder : NSObject {
    NSMutableArray * _emailAddresses;
    NSMutableArray * _phoneNumbers;
    NSMutableArray * _unknown;
}

@property (nonatomic, retain) NSMutableArray *emailAddresses;
@property (nonatomic, retain) NSMutableArray *phoneNumbers;
@property (nonatomic, retain) NSMutableArray *unknown;

- (void).cxx_destruct;
- (void)addEmailAddress:(id)arg1;
- (void)addPhoneNumber:(id)arg1;
- (void)addUnknown:(id)arg1;
- (id)build;
- (id)emailAddresses;
- (id)init;
- (id)phoneNumbers;
- (void)setEmailAddresses:(id)arg1;
- (void)setPhoneNumbers:(id)arg1;
- (void)setUnknown:(id)arg1;
- (id)unknown;

@end
