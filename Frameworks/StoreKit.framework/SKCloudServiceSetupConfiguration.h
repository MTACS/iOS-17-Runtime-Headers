
@interface SKCloudServiceSetupConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSString * _applicationIdentifier;
    NSString * _applicationVersion;
    bool  _forPublicSDK;
    bool  _targetsFinanceApplication;
}

@property (nonatomic, copy) NSString *applicationIdentifier;
@property (nonatomic, copy) NSString *applicationVersion;
@property (nonatomic) bool forPublicSDK;
@property (nonatomic) bool targetsFinanceApplication;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationIdentifier;
- (id)applicationVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)forPublicSDK;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setApplicationVersion:(id)arg1;
- (void)setForPublicSDK:(bool)arg1;
- (void)setTargetsFinanceApplication:(bool)arg1;
- (bool)targetsFinanceApplication;

@end