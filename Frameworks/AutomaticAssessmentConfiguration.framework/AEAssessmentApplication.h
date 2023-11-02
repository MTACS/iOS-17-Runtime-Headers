
@interface AEAssessmentApplication : NSObject <NSCopying> {
    NSString * _bundleIdentifier;
    bool  _requiresSignatureValidation;
    NSString * _teamIdentifier;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic) bool requiresSignatureValidation;
@property (nonatomic, readonly, copy) NSString *teamIdentifier;

+ (id)__applicationWithBundleIdentifier:(id)arg1 teamIdentifier:(id)arg2;
+ (id)instanceFromApplicationDescriptor:(id)arg1;

- (void).cxx_destruct;
- (id)__bundleIdentifier;
- (bool)__requiresSignatureValidation;
- (id)__teamIdentifier;
- (id)applicationDescriptor;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 teamIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)requiresSignatureValidation;
- (void)setRequiresSignatureValidation:(bool)arg1;
- (void)set__requiresSignatureValidation:(bool)arg1;
- (id)teamIdentifier;

@end
