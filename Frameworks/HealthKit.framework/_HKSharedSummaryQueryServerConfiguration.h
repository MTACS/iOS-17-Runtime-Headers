
@interface _HKSharedSummaryQueryServerConfiguration : HKQueryServerConfiguration {
    NSSet * _includedIdentifiers;
    NSSet * _includedObjectTypes;
    NSString * _package;
    HKSharedSummaryTransaction * _transaction;
}

@property (nonatomic, copy) NSSet *includedIdentifiers;
@property (nonatomic, copy) NSSet *includedObjectTypes;
@property (nonatomic, copy) NSString *package;
@property (nonatomic, copy) HKSharedSummaryTransaction *transaction;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)includedIdentifiers;
- (id)includedObjectTypes;
- (id)initWithCoder:(id)arg1;
- (id)package;
- (void)setIncludedIdentifiers:(id)arg1;
- (void)setIncludedObjectTypes:(id)arg1;
- (void)setPackage:(id)arg1;
- (void)setTransaction:(id)arg1;
- (id)transaction;

@end
