
@interface PKSearchTagResult : NSObject <PKSearchAutocompleteToken> {
    PKPaymentTransactionTag * _tag;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) PKPaymentTransactionTag *tag;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setTag:(id)arg1;
- (id)tag;
- (unsigned long long)tokenType;

@end
