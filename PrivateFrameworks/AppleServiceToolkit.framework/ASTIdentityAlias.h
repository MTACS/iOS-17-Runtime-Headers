
@interface ASTIdentityAlias : NSObject <NSCopying, NSSecureCoding> {
    bool  _diagnosticMode;
    NSDictionary * _dictionary;
}

@property (nonatomic) bool diagnosticMode;
@property (nonatomic, retain) NSDictionary *dictionary;

+ (id)identityAliasWithChipId:(id)arg1 uniqueChipId:(id)arg2;
+ (id)identityAliasWithMainLogicBoardSerialNumber:(id)arg1;
+ (id)identityAliasWithSerialNumber:(id)arg1;
+ (bool)isCoreRepairFrameworkAvailable;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)diagnosticMode;
- (id)dictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithChipId:(id)arg1 uniqueChipId:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithMainLogicBoardSerialNumber:(id)arg1;
- (id)initWithSerialNumber:(id)arg1;
- (void)setDiagnosticMode:(bool)arg1;
- (void)setDictionary:(id)arg1;

@end
