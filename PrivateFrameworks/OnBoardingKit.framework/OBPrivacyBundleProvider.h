
@interface OBPrivacyBundleProvider : NSObject <OBPrivacyBundleProvider> {
    NSString * _enclosingBundleIdentifier;
    NSString * _privacyBundleName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSString *enclosingBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *path;
@property (copy) NSString *privacyBundleName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_bundleRecordWithError:(id*)arg1;
- (id)enclosingBundleIdentifier;
- (id)initWithEnclosingBundleIdentifier:(id)arg1 privacyBundleName:(id)arg2;
- (id)path;
- (id)privacyBundleName;
- (void)setEnclosingBundleIdentifier:(id)arg1;
- (void)setPrivacyBundleName:(id)arg1;

@end
