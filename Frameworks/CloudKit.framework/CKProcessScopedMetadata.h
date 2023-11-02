
@interface CKProcessScopedMetadata : NSObject <NSSecureCoding> {
    unsigned int  _clientSDKVersion;
    CKFrameworkFingerprint * _frameworkFingerprint;
    bool  _isClientMainBundleAppleExecutable;
}

@property (nonatomic) unsigned int clientSDKVersion;
@property (nonatomic, copy) CKFrameworkFingerprint *frameworkFingerprint;
@property (nonatomic) bool isClientMainBundleAppleExecutable;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)clientSDKVersion;
- (void)encodeWithCoder:(id)arg1;
- (id)frameworkFingerprint;
- (id)initWithCoder:(id)arg1;
- (bool)isClientMainBundleAppleExecutable;
- (void)setClientSDKVersion:(unsigned int)arg1;
- (void)setFrameworkFingerprint:(id)arg1;
- (void)setIsClientMainBundleAppleExecutable:(bool)arg1;

@end
