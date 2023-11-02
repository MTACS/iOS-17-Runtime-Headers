
@interface _LTTranslationFeedback : NSObject <_LTLoggingRequest> {
    long long  _category;
    NSString * _clientBundleID;
    NSString * _errorsAsJSON;
    _LTLocalePair * _localePair;
    NSString * _safariVersion;
    NSString * _sessionID;
    NSString * _sourceContentAsJSON;
    NSString * _targetContentAsJSON;
    NSURL * _webpageURL;
}

@property (nonatomic) long long category;
@property (nonatomic, copy) NSString *clientBundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *errorsAsJSON;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) _LTLocalePair *localePair;
@property (nonatomic, copy) NSString *safariVersion;
@property (nonatomic, copy) NSString *sessionID;
@property (nonatomic, copy) NSString *sourceContentAsJSON;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *targetContentAsJSON;
@property (nonatomic, copy) NSURL *webpageURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)category;
- (id)clientBundleID;
- (void)encodeWithCoder:(id)arg1;
- (id)errorsAsJSON;
- (id)initWithCoder:(id)arg1;
- (id)localePair;
- (id)safariVersion;
- (id)sessionID;
- (void)setCategory:(long long)arg1;
- (void)setClientBundleID:(id)arg1;
- (void)setErrorsAsJSON:(id)arg1;
- (void)setLocalePair:(id)arg1;
- (void)setSafariVersion:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)setSourceContentAsJSON:(id)arg1;
- (void)setTargetContentAsJSON:(id)arg1;
- (void)setWebpageURL:(id)arg1;
- (id)sourceContentAsJSON;
- (id)targetContentAsJSON;
- (id)webpageURL;

@end
