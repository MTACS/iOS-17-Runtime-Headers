
@interface CHSExtensionIdentity : NSObject <BSXPCSecureCoding, NSCopying, NSSecureCoding> {
    void containerBundleIdentifier;
    void deviceIdentifier;
    void extensionBundleIdentifier;
}

@property (nonatomic, readonly) NSString *containerBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *deviceIdentifier;
@property (nonatomic, readonly) NSString *extensionBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) bool isRemote;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *tokenString;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)containerBundleIdentifier;
- (id)copyWithZone:(void*)arg1;
- (id)description;
- (id)deviceIdentifier;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)extensionBundleIdentifier;
- (long long)hash;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithExtensionBundleIdentifier:(id)arg1 containerBundleIdentifier:(id)arg2 deviceIdentifier:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isRemote;
- (id)tokenString;

@end
