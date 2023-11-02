
@interface SYBacklinkIndicatorClient : NSObject {
    long long  _action;
    NSXPCConnection * _connection;
    long long  _corner;
    unsigned int  _displayID;
    NSArray * _domainIdentifiers;
    NSArray * _linkIdentifiers;
    bool  _sentRequest;
}

@property (nonatomic) long long action;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic) long long corner;
@property (nonatomic) unsigned int displayID;
@property (nonatomic, copy) NSArray *domainIdentifiers;
@property (nonatomic, copy) NSArray *linkIdentifiers;
@property (nonatomic) bool sentRequest;

+ (id)_testingEndpoint;
+ (id)clientWithDomainIdentifiers:(id)arg1 linkIdentifiers:(id)arg2;
+ (id)clientWithLinkIdentifiers:(id)arg1;
+ (void)hideIndicator;
+ (void)hotCornerExited;
+ (void)set_testingEndpoint:(id)arg1;
+ (void)toggleIndicator;
+ (void)toggleIndicatorWithDisplayID:(unsigned int)arg1 corner:(long long)arg2;

- (void).cxx_destruct;
- (void)_clearLastShowIndicatorRequestTimestamp;
- (void)_configureConnectionAndResume;
- (void)_createConnectionIfNeeded;
- (void)_recordLastShowIndicatorRequestTimestamp;
- (void)_resetConnectionIfNecessary;
- (void)_sendIndicatorRequestWithCompletion:(id /* block */)arg1;
- (bool)_shouldSendIndicatorRequest;
- (long long)_showIndicatorAction;
- (long long)action;
- (id)connection;
- (long long)corner;
- (void)dealloc;
- (unsigned int)displayID;
- (id)domainIdentifiers;
- (id)init;
- (id)linkIdentifiers;
- (void)requestIndicatorWithCompletion:(id /* block */)arg1;
- (bool)sentRequest;
- (void)setAction:(long long)arg1;
- (void)setConnection:(id)arg1;
- (void)setCorner:(long long)arg1;
- (void)setDisplayID:(unsigned int)arg1;
- (void)setDomainIdentifiers:(id)arg1;
- (void)setLinkIdentifiers:(id)arg1;
- (void)setSentRequest:(bool)arg1;

@end
