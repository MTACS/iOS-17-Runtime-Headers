
@interface STSCHNfcAlternativeCarrier : STSCHAlternativeCarrier {
    long long  _maxLc;
    long long  _maxLe;
}

@property (nonatomic) long long maxLc;
@property (nonatomic) long long maxLe;

+ (id)connectionHandoverAlternativeCarrierWithBundle:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)_createCarrierConfigurationRecord;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMaxLcField:(long long)arg1 maxLeField:(long long)arg2 auxiliaryRecords:(id)arg3;
- (id)initWithNdefRecordBundle:(id)arg1;
- (long long)maxLc;
- (long long)maxLe;
- (void)setMaxLc:(long long)arg1;
- (void)setMaxLe:(long long)arg1;

@end
