
@interface NSPPrivateAccessTokenFetcher : NSObject {
    struct { 
        unsigned int val[8]; 
    }  _auditToken;
    NSString * _bundleID;
    NSData * _challengeData;
    NSData * _originNameKey;
    NSMutableArray * _secondaryFetchers;
    NSString * _selectedOrigin;
    NSData * _tokenKey;
}

@property struct { unsigned int x1[8]; } auditToken;
@property (retain) NSString *bundleID;
@property (retain) NSString *selectedOrigin;

+ (bool)checkOriginAllowedAsThirdParty:(id)arg1;

- (void).cxx_destruct;
- (void)addSecondaryChallenge:(id)arg1 tokenKey:(id)arg2 originNameKey:(id)arg3;
- (struct { unsigned int x1[8]; })auditToken;
- (id)bundleID;
- (void)fetchTokenWithQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithChallenge:(id)arg1 tokenKey:(id)arg2 originNameKey:(id)arg3;
- (id)initWithChallenge:(id)arg1 tokenPublicKey:(id)arg2 issuerPublicKey:(id)arg3;
- (id)selectedOrigin;
- (void)setAuditToken:(struct { unsigned int x1[8]; })arg1;
- (void)setBundleID:(id)arg1;
- (void)setSelectedOrigin:(id)arg1;

@end
