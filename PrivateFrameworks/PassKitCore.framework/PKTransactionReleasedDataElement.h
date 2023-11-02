
@interface PKTransactionReleasedDataElement : NSObject <NSSecureCoding> {
    NSString * _elementNamespace;
    NSString * _identifier;
    unsigned long long  _retentionIntent;
    long long  _retentionPeriod;
}

@property (nonatomic, retain) NSString *elementNamespace;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) unsigned long long retentionIntent;
@property (nonatomic) long long retentionPeriod;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)elementNamespace;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToReleasedDataElement:(id)arg1;
- (unsigned long long)retentionIntent;
- (long long)retentionPeriod;
- (void)setElementNamespace:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setRetentionIntent:(unsigned long long)arg1;
- (void)setRetentionPeriod:(long long)arg1;

@end
