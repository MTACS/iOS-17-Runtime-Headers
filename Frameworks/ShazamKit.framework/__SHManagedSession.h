
@interface __SHManagedSession : NSObject <SHSessionDelegate_Internal> {
    SHCatalog * _catalog;
    id /* block */  _completionHandler;
    <SHManagedSessionDelegate> * _delegate;
    bool  _enableLiveActivity;
    SHMatcherRequest * _inflightRequest;
    bool  _sendNotifications;
    SHSession * _session;
    SHManagedSessionCustomCatalogDriver * _sessionDriver;
    NSUUID * _sharedRequestID;
    <SHPreparableMatcher> * _shazamServiceConnection;
}

@property (nonatomic, readonly) SHCatalog *catalog;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SHManagedSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enableLiveActivity;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SHMatcherRequest *inflightRequest;
@property (nonatomic) bool sendNotifications;
@property (nonatomic, readonly) SHSession *session;
@property (nonatomic, readonly) SHManagedSessionCustomCatalogDriver *sessionDriver;
@property (nonatomic, readonly) NSUUID *sharedRequestID;
@property (nonatomic, readonly) <SHPreparableMatcher> *shazamServiceConnection;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (id)catalog;
- (id /* block */)completionHandler;
- (id)delegate;
- (void)didCalculateSpectralData:(id)arg1;
- (bool)enableLiveActivity;
- (void)ensureCallerHasRecordTCCWithCompletionHandler:(id /* block */)arg1;
- (void)finishedSession:(id)arg1;
- (id)inflightRequest;
- (id)init;
- (id)initWithCatalog:(id)arg1;
- (id)initWithCatalog:(id)arg1 matcher:(id)arg2 sessionDriver:(id)arg3 serviceConnection:(id)arg4;
- (id)initWithPartnerName:(id)arg1;
- (bool)isUsingCustomCatalog:(id)arg1;
- (void)matchAmbientAudioSnippet;
- (void)matchAmbientAudioSnippetUntilDeadline:(id)arg1;
- (void)matchWithCallback:(id /* block */)arg1;
- (void)prepareMatchWithPreparedCallback:(id /* block */)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)prepareWithCompletionHandler:(id /* block */)arg1;
- (bool)sendNotifications;
- (id)session;
- (void)session:(id)arg1 didFindMatch:(id)arg2;
- (void)session:(id)arg1 didNotFindMatchForSignature:(id)arg2 error:(id)arg3;
- (void)session:(id)arg1 didProduceResponse:(id)arg2;
- (bool)session:(id)arg1 shouldAttemptToMatchSignature:(id)arg2;
- (id)sessionDriver;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnableLiveActivity:(bool)arg1;
- (void)setInflightRequest:(id)arg1;
- (void)setSendNotifications:(bool)arg1;
- (id)sharedRequestID;
- (id)shazamServiceConnection;
- (void)singleMatchWithCompletionHandler:(id /* block */)arg1;
- (void)stopMatchingAmbientAudioSnippet;

@end
