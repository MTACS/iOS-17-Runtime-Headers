
@interface SDSeedingConfiguration : NSObject <NSSecureCoding> {
    NSNumber * _accountID;
    NSString * _assetAudience;
    NSString * _catalog;
    long long  _seedProgram;
    NSNumber * _seedProgramID;
}

@property (nonatomic, retain) NSNumber *accountID;
@property (nonatomic, retain) NSString *assetAudience;
@property (nonatomic, retain) NSString *catalog;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSDictionary *enrollmentMetadata;
@property (nonatomic) long long seedProgram;
@property (nonatomic, retain) NSNumber *seedProgramID;

+ (id)currentConfiguration;
+ (id)nullConfiguration;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountID;
- (id)assetAudience;
- (id)catalog;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)enrollmentMetadata;
- (id)initWithBetaProgram:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)seedProgram;
- (id)seedProgramID;
- (void)setAccountID:(id)arg1;
- (void)setAssetAudience:(id)arg1;
- (void)setCatalog:(id)arg1;
- (void)setSeedProgram:(long long)arg1;
- (void)setSeedProgramID:(id)arg1;

@end
