
@interface PKPendingCarKeyProvisioning : PKPendingProvisioning <NSSecureCoding> {
    PKAddCarKeyPassConfiguration * _configuration;
}

@property (nonatomic, retain) PKAddCarKeyPassConfiguration *configuration;

+ (bool)supportsSecureCoding;
+ (id)uniqueIdentifierForBrandIdentifier:(id)arg1 pairedReaderIdentifier:(id)arg2;
+ (id)uniqueIdentifierForCarKeyConfiguration:(id)arg1;
+ (id)uniqueIdentifierForSubcredential:(id)arg1;

- (void).cxx_destruct;
- (id)configuration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCarKeyConfiguration:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)representsPass:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (id)type;

@end
