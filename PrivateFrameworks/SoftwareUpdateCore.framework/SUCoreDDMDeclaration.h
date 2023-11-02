
@interface SUCoreDDMDeclaration : NSObject <NSSecureCoding> {
    NSDictionary * _additionalOptions;
    NSString * _buildVersionString;
    NSString * _companyName;
    NSString * _declarationKey;
    NSString * _detailsURL;
    bool  _enableNotifications;
    NSDate * _enforcedInstallDate;
    SUCoreLog * _logger;
    NSString * _versionString;
}

@property (nonatomic, retain) NSDictionary *additionalOptions;
@property (nonatomic, retain) NSString *buildVersionString;
@property (nonatomic, retain) NSString *companyName;
@property (nonatomic, retain) NSString *declarationKey;
@property (nonatomic, retain) NSString *detailsURL;
@property (nonatomic) bool enableNotifications;
@property (nonatomic, retain) NSDate *enforcedInstallDate;
@property (retain) SUCoreLog *logger;
@property (nonatomic, retain) NSString *versionString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dateFromString:(id)arg1;
- (id)_stringFromDate:(id)arg1;
- (id)additionalOptions;
- (id)buildVersionString;
- (id)companyName;
- (long long)compare:(id)arg1;
- (id)copy;
- (id)declarationKey;
- (id)description;
- (id)detailsURL;
- (id)dictionaryRepresentation;
- (bool)enableNotifications;
- (void)encodeWithCoder:(id)arg1;
- (id)enforcedInstallDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeclarationKeys:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isInstallOverdue;
- (bool)isValidDeclaration;
- (bool)isValidDeclarationWithReason:(id*)arg1;
- (id)logger;
- (void)setAdditionalOptions:(id)arg1;
- (void)setBuildVersionString:(id)arg1;
- (void)setCompanyName:(id)arg1;
- (void)setDeclarationKey:(id)arg1;
- (void)setDetailsURL:(id)arg1;
- (void)setEnableNotifications:(bool)arg1;
- (void)setEnforcedInstallDate:(id)arg1;
- (void)setLogger:(id)arg1;
- (void)setVersionString:(id)arg1;
- (id)versionString;

@end
