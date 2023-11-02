
@interface HKMedicationClusterQueryConfiguration : HKQueryServerConfiguration {
    long long  _codeAttributeType;
    NSArray * _existingMedications;
    unsigned long long  _limit;
    NSString * _machineReadableCode;
    long long  _queryType;
    NSArray * _scanResult;
    NSDate * _sinceDate;
    NSArray * _textSearchTokens;
}

@property (nonatomic) long long codeAttributeType;
@property (nonatomic, copy) NSArray *existingMedications;
@property (nonatomic) unsigned long long limit;
@property (nonatomic, copy) NSString *machineReadableCode;
@property (nonatomic) long long queryType;
@property (nonatomic, copy) NSArray *scanResult;
@property (nonatomic, copy) NSDate *sinceDate;
@property (nonatomic, copy) NSArray *textSearchTokens;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)codeAttributeType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)existingMedications;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)limit;
- (id)machineReadableCode;
- (long long)queryType;
- (id)scanResult;
- (void)setCodeAttributeType:(long long)arg1;
- (void)setExistingMedications:(id)arg1;
- (void)setLimit:(unsigned long long)arg1;
- (void)setMachineReadableCode:(id)arg1;
- (void)setQueryType:(long long)arg1;
- (void)setScanResult:(id)arg1;
- (void)setSinceDate:(id)arg1;
- (void)setTextSearchTokens:(id)arg1;
- (id)sinceDate;
- (id)textSearchTokens;

@end
