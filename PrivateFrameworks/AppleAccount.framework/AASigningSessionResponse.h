
@interface AASigningSessionResponse : AAResponse {
    NSData * _sessionData;
}

@property (nonatomic, retain) NSData *sessionData;

- (void).cxx_destruct;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (id)sessionData;
- (void)setSessionData:(id)arg1;

@end
