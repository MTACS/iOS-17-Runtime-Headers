
@interface DMCHTTPRequestor : NSObject <NSURLSessionDataDelegate> {
    NSArray * _anchorCertificateRefs;
    <DMCHTTPAuthenticator> * _authenticator;
    bool  _didFailDueToCertNotTrusted;
    bool  _didFailDueToMissingCredentials;
    NSString * _password;
    id  _selfReference;
    NSString * _username;
}

@property (nonatomic, retain) NSArray *anchorCertificateRefs;
@property (nonatomic, retain) <DMCHTTPAuthenticator> *authenticator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didFailDueToCertNotTrusted;
@property (nonatomic) bool didFailDueToMissingCredentials;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, retain) id selfReference;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *username;

+ (id)_getServerErrorCodeFromResponseDictionary:(id)arg1;
+ (id)_getServerErrorDetailsFromResponseDictionary:(id)arg1;
+ (id)_getServerErrorMessageFromResponseDictionary:(id)arg1;
+ (id)_jsonDictFromResponse:(id)arg1;
+ (bool)_parsePairingTokenMissingErrorWithMessage:(id)arg1 details:(id)arg2 outError:(id*)arg3;
+ (bool)_parsePredefined403ErrorWithResponseDictionary:(id)arg1 outError:(id*)arg2;
+ (bool)_parseSoftwareUpdateRequiredErrorWithMessage:(id)arg1 details:(id)arg2 outError:(id*)arg3;
+ (bool)_parseUnrecognizedDeviceErrorWithMessage:(id)arg1 details:(id)arg2 outError:(id*)arg3;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)anchorCertificateRefs;
- (id)authenticator;
- (bool)didFailDueToCertNotTrusted;
- (bool)didFailDueToMissingCredentials;
- (id)password;
- (id)selfReference;
- (void)setAnchorCertificateRefs:(id)arg1;
- (void)setAuthenticator:(id)arg1;
- (void)setDidFailDueToCertNotTrusted:(bool)arg1;
- (void)setDidFailDueToMissingCredentials:(bool)arg1;
- (void)setPassword:(id)arg1;
- (void)setSelfReference:(id)arg1;
- (void)setUsername:(id)arg1;
- (void)startWithRequest:(id)arg1 username:(id)arg2 password:(id)arg3 anchorCertificateRefs:(id)arg4 completionBlock:(id /* block */)arg5;
- (id)username;

@end
