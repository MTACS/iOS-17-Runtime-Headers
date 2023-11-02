
@interface FAFetchFamilyCircleRequest : FAFamilyCircleRequest {
    unsigned long long  _cachePolicy;
    NSString * _context;
    bool  _doNotFetchFromServer;
    NSArray * _expectedAltDSIDs;
    NSArray * _expectedDSIDs;
    bool  _forceServerFetch;
    bool  _promptUserToResolveAuthenticatonFailure;
    long long  _qualityOfService;
    NSDictionary * _serverResponse;
    bool  _signedInAccountShouldBeApprover;
}

@property unsigned long long cachePolicy;
@property (nonatomic, retain) NSString *context;
@property bool doNotFetchFromServer;
@property (copy) NSArray *expectedAltDSIDs;
@property (copy) NSArray *expectedDSIDs;
@property bool forceServerFetch;
@property bool promptUserToResolveAuthenticatonFailure;
@property (nonatomic) long long qualityOfService;
@property (readonly, retain) NSDictionary *serverResponse;
@property bool signedInAccountShouldBeApprover;

- (void).cxx_destruct;
- (unsigned long long)_cachePolicy;
- (unsigned long long)cachePolicy;
- (id)context;
- (bool)doNotFetchFromServer;
- (id)expectedAltDSIDs;
- (id)expectedDSIDs;
- (id)fetchCachedFamilyCircle:(id*)arg1;
- (id)fetchCachedFamilyCircleWithCache:(id)arg1 deviceInfo:(id)arg2 error:(id*)arg3;
- (id)fetchFamilyCircleWithError:(id*)arg1;
- (bool)forceServerFetch;
- (id)init;
- (bool)promptUserToResolveAuthenticatonFailure;
- (long long)qualityOfService;
- (id)requestOptions;
- (id)serverResponse;
- (void)setCachePolicy:(unsigned long long)arg1;
- (void)setContext:(id)arg1;
- (void)setDoNotFetchFromServer:(bool)arg1;
- (void)setExpectedAltDSIDs:(id)arg1;
- (void)setExpectedDSIDs:(id)arg1;
- (void)setForceServerFetch:(bool)arg1;
- (void)setPromptUserToResolveAuthenticatonFailure:(bool)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setSignedInAccountShouldBeApprover:(bool)arg1;
- (bool)signedInAccountShouldBeApprover;
- (void)startRequestWithCompletionHandler:(id /* block */)arg1;

@end
