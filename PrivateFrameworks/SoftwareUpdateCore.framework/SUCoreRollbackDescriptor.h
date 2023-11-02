
@interface SUCoreRollbackDescriptor : NSObject <NSCopying, NSSecureCoding> {
    NSString * _productBuildVersion;
    NSString * _productVersion;
    NSString * _releaseType;
    NSString * _restoreVersion;
    bool  _rollbackEligible;
}

@property (nonatomic, retain) NSString *productBuildVersion;
@property (nonatomic, retain) NSString *productVersion;
@property (nonatomic, retain) NSString *releaseType;
@property (nonatomic, retain) NSString *restoreVersion;
@property (nonatomic) bool rollbackEligible;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)productBuildVersion;
- (id)productVersion;
- (id)releaseType;
- (id)restoreVersion;
- (bool)rollbackEligible;
- (void)setProductBuildVersion:(id)arg1;
- (void)setProductVersion:(id)arg1;
- (void)setReleaseType:(id)arg1;
- (void)setRestoreVersion:(id)arg1;
- (void)setRollbackEligible:(bool)arg1;
- (id)summary;

@end
