
@interface VSApplicationBootURLOperation : VSAsyncOperation <NSURLSessionDelegate> {
    bool  _developer;
    VSPreferences * _preferences;
    bool  _skipSystemTrustVerification;
    bool  _test;
    NSDictionary * _trustInfo;
    NSURL * _url;
    VSFailable * _urlOrError;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDeveloper, nonatomic) bool developer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VSPreferences *preferences;
@property (nonatomic) bool skipSystemTrustVerification;
@property (readonly) Class superclass;
@property (getter=isForTesting, nonatomic) bool test;
@property (nonatomic, retain) NSDictionary *trustInfo;
@property (nonatomic, retain) NSURL *url;
@property (nonatomic, retain) VSFailable *urlOrError;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)executionDidBegin;
- (id)generateFilePathForURL:(id)arg1;
- (id)init;
- (id)initWithBootURL:(id)arg1 isDeveloper:(bool)arg2;
- (bool)isDeveloper;
- (bool)isForTesting;
- (id)preferences;
- (void)setDeveloper:(bool)arg1;
- (void)setPreferences:(id)arg1;
- (void)setSkipSystemTrustVerification:(bool)arg1;
- (void)setTest:(bool)arg1;
- (void)setTrustInfo:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)setUrlOrError:(id)arg1;
- (bool)skipSystemTrustVerification;
- (id)trustInfo;
- (id)url;
- (id)urlOrError;
- (bool)validateTrust:(struct __SecTrust { }*)arg1;
- (bool)verifyCertificateIsSystemTrustedWithTrust:(struct __SecTrust { }*)arg1;

@end
