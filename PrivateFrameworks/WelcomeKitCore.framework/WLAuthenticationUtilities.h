
@interface WLAuthenticationUtilities : NSObject

+ (void)_appendBase64Data:(id)arg1 toString:(id)arg2;
+ (id)dataFromPEMFormattedData:(id)arg1;
+ (void)generateSelfSignedCertificateWithOrganization:(id)arg1 commonName:(id)arg2 completion:(id /* block */)arg3;
+ (id)hashWithString:(id)arg1;
+ (id)pemFormattedCertificateData:(id)arg1;

@end
