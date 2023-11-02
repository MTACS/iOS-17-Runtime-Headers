
@interface CNContactClassifiedHandleStringInterpreter : NSObject {
    CNHandleStringClassification * _classification;
    NSMutableArray * _emailAddressesImpl;
    bool  _hasBeenInterpreted;
    NSMutableArray * _phoneNumbersImpl;
    NSMutableArray * _unconvertableHandles;
}

@property (nonatomic, readonly) CNHandleStringClassification *classification;
@property (readonly) NSArray *emailAddresses;
@property (nonatomic, readonly) NSMutableArray *emailAddressesImpl;
@property (nonatomic) bool hasBeenInterpreted;
@property (readonly) NSArray *phoneNumbers;
@property (nonatomic, readonly) NSMutableArray *phoneNumbersImpl;
@property (nonatomic, readonly) NSMutableArray *unconvertableHandles;

- (void).cxx_destruct;
- (id)classification;
- (id)description;
- (id)emailAddresses;
- (id)emailAddressesImpl;
- (bool)hasBeenInterpreted;
- (id)init;
- (id)initWithHandleStringClassification:(id)arg1;
- (void)interpretEmailAddresses;
- (void)interpretPhoneNumbers;
- (void)interpretUnknownsAsEmailAddresses;
- (void)interpretValues;
- (id)phoneNumbers;
- (id)phoneNumbersImpl;
- (void)setHasBeenInterpreted:(bool)arg1;
- (id)unconvertableHandles;

@end
