
@interface SLAbsintheSigningSession : NSObject {
    NSString * _certURL;
    struct NACContextOpaque_ { } * _context;
    NSString * _sessionURL;
}

- (void).cxx_destruct;
- (id)_urlEncodedString:(id)arg1;
- (void)dealloc;
- (bool)establish;
- (id)initWithCertURL:(id)arg1 sessionURL:(id)arg2;
- (id)signatureForData:(id)arg1;

@end
