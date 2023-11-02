
@interface PKSavingsAccountFeatureDescriptor : PKAccountFeatureDescriptor {
    unsigned long long  _fundingSourceTypes;
    NSArray * _supportedFileFormatsForTransactionData;
    unsigned long long  _transferFrequencies;
    NSString * _transferTermsIdentifier;
}

@property (nonatomic) unsigned long long fundingSourceTypes;
@property (nonatomic, copy) NSArray *supportedFileFormatsForTransactionData;
@property (nonatomic) unsigned long long transferFrequencies;
@property (nonatomic, copy) NSString *transferTermsIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)fundingSourceTypes;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSavingsAccountFeatureDescriptor:(id)arg1;
- (void)setFundingSourceTypes:(unsigned long long)arg1;
- (void)setSupportedFileFormatsForTransactionData:(id)arg1;
- (void)setTransferFrequencies:(unsigned long long)arg1;
- (void)setTransferTermsIdentifier:(id)arg1;
- (id)supportedFileFormatsForTransactionData;
- (unsigned long long)transferFrequencies;
- (id)transferTermsIdentifier;

@end
