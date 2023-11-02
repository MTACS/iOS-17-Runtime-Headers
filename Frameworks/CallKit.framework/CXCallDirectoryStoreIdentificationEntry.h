
@interface CXCallDirectoryStoreIdentificationEntry : NSObject {
    NSString * _extensionBundleIdentifier;
    NSString * _localizedLabel;
}

@property (nonatomic, copy) NSString *extensionBundleIdentifier;
@property (nonatomic, copy) NSString *localizedLabel;

- (void).cxx_destruct;
- (id)extensionBundleIdentifier;
- (id)localizedLabel;
- (void)setExtensionBundleIdentifier:(id)arg1;
- (void)setLocalizedLabel:(id)arg1;

@end
