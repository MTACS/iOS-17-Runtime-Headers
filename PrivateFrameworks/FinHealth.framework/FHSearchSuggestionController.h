
@interface FHSearchSuggestionController : NSObject {
    bool  _cacheConnectionInitiated;
    NSXPCConnection * _connection;
    <FHSuggestionDelegate> * _delegate;
    NSMutableArray * _instrumentationCache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lockCache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lockConnection;
}

@property (nonatomic) bool cacheConnectionInitiated;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic) <FHSuggestionDelegate> *delegate;
@property (nonatomic, retain) NSMutableArray *instrumentationCache;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lockCache;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lockConnection;

- (void).cxx_destruct;
- (id)_clientConnection;
- (void)_init;
- (id)_newClientConnection;
- (id)_remoteObjectInterface;
- (id)_remoteObjectProxyWithErrorHandler;
- (void)_sendAllTransactionFeatures:(bool)arg1;
- (void)_updateOrRecordCacheEntries:(id)arg1 instrumentationCacheSize:(unsigned long long)arg2;
- (id)_validateInstrumentationRecord:(id)arg1;
- (void)aggregateFeaturesWithHandler:(id /* block */)arg1;
- (void)allFeatureInsightsWithStartDate:(id)arg1 endDate:(id)arg2 insightTypeItems:(id)arg3 trendWindow:(long long)arg4 completion:(id /* block */)arg5;
- (void)allPeerPaymentForecastingSignals:(id /* block */)arg1;
- (bool)cacheConnectionInitiated;
- (id)connection;
- (void)dealloc;
- (id)delegate;
- (void)deleteAllData:(id /* block */)arg1;
- (void)deleteDataForPassesWithSourceIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteTransactionByTransactionIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)featureResponsesForApplication:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)featuresForApplication:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)featuresWithCompletion:(id /* block */)arg1;
- (void)fetchUserProperties:(id)arg1 withParameters:(id)arg2 completion:(id /* block */)arg3;
- (void)getDisputeDocumentSuggestionsForTransactionId:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)instrumentationCache;
- (struct os_unfair_lock_s { unsigned int x1; })lockCache;
- (struct os_unfair_lock_s { unsigned int x1; })lockConnection;
- (void)paymentRingSuggestionsFromSearchFeatures:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 completion:(id /* block */)arg4;
- (void)peerPaymentForecastingSignals:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)recordUserInteraction:(id)arg1;
- (void)reevaluateTransactionFeatures;
- (void)sendAllTransactionFeatures;
- (void)setCacheConnectionInitiated:(bool)arg1;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInstrumentationCache:(id)arg1;
- (void)setLockCache:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setLockConnection:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)transactionUpdated:(id)arg1 deferFeatureComputation:(bool)arg2 completion:(id /* block */)arg3;
- (void)transactionsRequireSyncing;
- (void)updatePeerPaymentAccountBalanceWithTransactionSourceId:(id)arg1 amount:(id)arg2 currencyCode:(id)arg3 completion:(id /* block */)arg4;
- (void)updatePeerPaymentForecastingSuggestionStatus:(unsigned long long)arg1 counterpartHandle:(id)arg2 amount:(id)arg3 completion:(id /* block */)arg4;

@end
