
@interface PKTransactionReleasedData : NSObject <NSSecureCoding> {
    PKTransactionReleasedDataApplication * _application;
    NSData * _certificateData;
    NSSet * _elements;
    NSURL * _privacyPolicyURL;
}

@property (nonatomic, retain) PKTransactionReleasedDataApplication *application;
@property (nonatomic, retain) NSData *certificateData;
@property (nonatomic, retain) NSSet *elements;
@property (nonatomic, retain) NSURL *privacyPolicyURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)application;
- (id)certificateData;
- (id)description;
- (id)dictionaryRepresentation;
- (id)elements;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isAgeVerificationElement:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToReleasedData:(id)arg1;
- (bool)isPortraitElement:(id)arg1;
- (id)privacyPolicyURL;
- (void)setApplication:(id)arg1;
- (void)setCertificateData:(id)arg1;
- (void)setElements:(id)arg1;
- (void)setPrivacyPolicyURL:(id)arg1;
- (unsigned long long)verificationType;

@end
