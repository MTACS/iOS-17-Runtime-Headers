
@interface BDSICloudIdentityTokenTracker : NSObject {
    BDSICloudIdentityToken * _currentToken;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSMutableDictionary * _plistContents;
    NSURL * _plistURL;
    bool  _trackLiverpool;
}

@property (nonatomic, retain) BDSICloudIdentityToken *currentToken;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) NSMutableDictionary *plistContents;
@property (nonatomic, retain) NSURL *plistURL;
@property (nonatomic) bool trackLiverpool;

- (void).cxx_destruct;
- (void)acknowledgeiCloudIdentity;
- (id)currentToken;
- (bool)didUnacknowledgediCloudLogoutOccur;
- (id)dispatchQueue;
- (void)fetchCurrentToken;
- (void)forceUpdateTokenWithString:(id)arg1;
- (id)initWithContainerURL:(id)arg1 trackingLiverpool:(bool)arg2;
- (id)plistContents;
- (id)plistURL;
- (void)setCurrentToken:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setPlistContents:(id)arg1;
- (void)setPlistURL:(id)arg1;
- (void)setTrackLiverpool:(bool)arg1;
- (bool)trackLiverpool;

@end
