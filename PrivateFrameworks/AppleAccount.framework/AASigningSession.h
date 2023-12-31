
@interface AASigningSession : NSObject {
    NSString * _certURL;
    struct NACContextOpaque_ { } * _context;
    int  _error;
    NSString * _sessionURL;
}

@property (nonatomic, readonly) int error;

+ (id)_badURLError;
+ (id)establishedSessionWithCertURL:(id)arg1 sessionURL:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)dealloc;
- (int)error;
- (void)establishSession;
- (id)initWithCertURL:(id)arg1 sessionURL:(id)arg2;
- (id)signatureForData:(id)arg1;

@end
