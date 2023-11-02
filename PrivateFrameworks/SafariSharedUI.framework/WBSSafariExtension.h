
@interface WBSSafariExtension : NSObject {
    NSUUID * _baseURIHost;
    struct RetainPtr<const __SecCode *> { 
        void *m_ptr; 
    }  _bundleCodeRef;
    NSString * _displayName;
    WBSExtensionsController * _extensionsController;
    NSArray * _injectedScripts;
    NSArray * _injectedStyleSheets;
    NSUUID * _privacyPreservingProfileIdentifier;
    NSURL * _safariExtensionBaseURI;
    NSDictionary * _untrustedCodeSigningDictionary;
}

@property (nonatomic, readonly) NSUUID *baseURIHost;
@property (nonatomic) struct RetainPtr<const __SecCode *> { void *x1; } bundleCodeRef;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic) WBSExtensionsController *extensionsController;
@property (nonatomic, copy) NSArray *injectedScripts;
@property (nonatomic, copy) NSArray *injectedStyleSheets;
@property (nonatomic, retain) NSUUID *privacyPreservingProfileIdentifier;
@property (nonatomic, retain) NSURL *safariExtensionBaseURI;
@property (nonatomic, copy) NSDictionary *untrustedCodeSigningDictionary;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)baseURIHost;
- (struct RetainPtr<const __SecCode *> { void *x1; })bundleCodeRef;
- (id)displayName;
- (id)extensionsController;
- (id)initWithExtension:(id)arg1 extensionsController:(id)arg2;
- (id)injectedScripts;
- (id)injectedStyleSheets;
- (id)privacyPreservingProfileIdentifier;
- (id)safariExtensionBaseURI;
- (void)setBundleCodeRef:(struct RetainPtr<const __SecCode *> { void *x1; })arg1;
- (void)setExtensionsController:(id)arg1;
- (void)setInjectedScripts:(id)arg1;
- (void)setInjectedStyleSheets:(id)arg1;
- (void)setPrivacyPreservingProfileIdentifier:(id)arg1;
- (void)setSafariExtensionBaseURI:(id)arg1;
- (void)setUntrustedCodeSigningDictionary:(id)arg1;
- (id)untrustedCodeSigningDictionary;

@end
