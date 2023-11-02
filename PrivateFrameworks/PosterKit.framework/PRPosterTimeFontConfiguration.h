
@interface PRPosterTimeFontConfiguration : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSCopying, NSSecureCoding> {
    bool  _systemItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=isSystemItem, nonatomic, readonly) bool systemItem;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;

+ (id)configurationWithTimeFontConfiguration:(id)arg1 extensionBundleIdentifier:(id)arg2 systemItem:(bool)arg3;
+ (id)configurationWithTimeFontConfiguration:(id)arg1 extensionBundleURL:(id)arg2 systemItem:(bool)arg3;
+ (id)defaultConfiguration;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void)appendDescriptionToFormatter:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isSystemItem;
- (id)timeFontConfigurationWithExtensionBundle:(id)arg1;
- (id)timeFontConfigurationWithExtensionBundleIdentifier:(id)arg1;
- (id)timeFontConfigurationWithExtensionBundleURL:(id)arg1;
- (id)timeFontIdentifier;
- (id)uniqueIdentifier;

@end
