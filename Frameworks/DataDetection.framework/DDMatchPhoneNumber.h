
@interface DDMatchPhoneNumber : DDMatch {
    NSString * _label;
    NSString * _phoneNumber;
}

@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *phoneNumber;

- (void).cxx_destruct;
- (id)initWithDDScannerResult:(id)arg1;
- (id)label;
- (id)phoneNumber;

@end
