
@interface TKSmartCardTokenSession : TKTokenSession {
    TKSmartCard * _errorCard;
    bool  _hasSession;
    TKSmartCard * _smartCard;
}

@property (readonly) TKSmartCard *smartCard;

- (void).cxx_destruct;
- (void)beginRequest;
- (void)endRequest;
- (id)initWithToken:(id)arg1;
- (id)name;
- (id)smartCard;

@end
