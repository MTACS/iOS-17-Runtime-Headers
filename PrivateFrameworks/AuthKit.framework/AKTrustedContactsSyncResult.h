
@interface AKTrustedContactsSyncResult : NSObject <NSCopying, NSSecureCoding> {
    NSString * _beneficiaryListVersion;
    NSDictionary * _beneficiaryOperationsByID;
    NSString * _custodianListVersion;
    NSDictionary * _custodianOperationsByID;
    NSArray * _orphanedBeneficiaryUUIDs;
    NSArray * _orphanedCustodianUUIDs;
}

@property (nonatomic, copy) NSString *beneficiaryListVersion;
@property (nonatomic, copy) NSDictionary *beneficiaryOperationsByID;
@property (nonatomic, copy) NSString *custodianListVersion;
@property (nonatomic, copy) NSDictionary *custodianOperationsByID;
@property (nonatomic, copy) NSArray *orphanedBeneficiaryUUIDs;
@property (nonatomic, copy) NSArray *orphanedCustodianUUIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)beneficiaryListVersion;
- (id)beneficiaryOperationsByID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)custodianListVersion;
- (id)custodianOperationsByID;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)orphanedBeneficiaryUUIDs;
- (id)orphanedCustodianUUIDs;
- (void)setBeneficiaryListVersion:(id)arg1;
- (void)setBeneficiaryOperationsByID:(id)arg1;
- (void)setCustodianListVersion:(id)arg1;
- (void)setCustodianOperationsByID:(id)arg1;
- (void)setOrphanedBeneficiaryUUIDs:(id)arg1;
- (void)setOrphanedCustodianUUIDs:(id)arg1;

@end
