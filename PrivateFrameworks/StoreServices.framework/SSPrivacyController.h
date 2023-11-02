
@interface SSPrivacyController : NSObject

+ (void)_appendPrivacyAcknowledgement:(id)arg1 toAccount:(id)arg2;
+ (id)_appendPrivacyAcknowledgementToActiveAccount:(id)arg1 withURL:(id)arg2;
+ (void)_appendPrivacyAcknowledgementToLocalAccount:(id)arg1;
+ (unsigned long long)_currentPrivacyContentVersionForIdentifier:(id)arg1;
+ (id)_syncPrivacyAcknowledgementOnAccount:(id)arg1 URL:(id)arg2;
+ (id)_translateIdentifierToPrivacyAcknowledgement:(id)arg1 withVersion:(unsigned long long)arg2;
+ (void)acknowledgePrivacyLinkWithIdentifier:(id)arg1;
+ (void)acknowledgePrivacyLinkWithIdentifier:(id)arg1 URL:(id)arg2;
+ (id)appStorePrivacyIdentifiers;
+ (bool)shouldDisplayPrivacyLinkWithIdentifier:(id)arg1;
+ (id)storePrivacyIdentifiers;
+ (void)syncPrivacyAcknowledgementOnAccount:(id)arg1 URL:(id)arg2;
+ (id)viewControllerForPrivacySplashWithIdentifier:(id)arg1 URL:(id)arg2;

@end
