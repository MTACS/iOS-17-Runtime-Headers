
@interface PKSearchTransactionGroupResult : NSObject <PKSearchAutocompleteToken> {
    PKPaymentTransactionGroup * _group;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PKPaymentTransactionGroup *group;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)group;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setGroup:(id)arg1;
- (unsigned long long)tokenType;

@end
