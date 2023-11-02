
@interface ASCredentialRequestIconGenerator : NSObject

+ (id)_iconForData:(id)arg1 scale:(double)arg2 size:(struct CGSize { double x1; double x2; })arg3;
+ (id)_iconForPasswordProviderBundleIdentifier:(id)arg1;
+ (id)_iconForPresentationContext:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)_imageForIcon:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)_keychainIcon;
+ (id)_providerIconForPasswordLoginChoice:(id)arg1;
+ (id)_systemBiometricsIconForPresentationContext:(id)arg1;
+ (id)_systemImageNamed:(id)arg1;
+ (id)alternativeSecurityKeysIcon;
+ (id)headerIconForPresentationContext:(id)arg1;
+ (id)headerIconForPresentationContext:(id)arg1 outIconStyle:(long long*)arg2;
+ (id)iconForApplicationIdentifier:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)iconForPasswordLoginChoice:(id)arg1 presentationContext:(id)arg2;
+ (id)iconForPublicKeyCredentialLoginChoiceWithPresentationContext:(id)arg1;
+ (id)passwordManagerIcon;
+ (id)passwordManagerIconWithSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)systemPasskeyIcon;
+ (id)systemPasswordIcon;
+ (id)systemSecurityKeysIcon;

@end
