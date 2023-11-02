
@interface NPKDoubleClickClientSuppressor : NSObject {
    unsigned long long  _nextSuppressionRequestToken;
    NPKAssertion * _suppressionAssertion;
    NSMutableIndexSet * _suppressionRequestTokens;
    NSObject<OS_dispatch_queue> * _suppressorQueue;
}

@property (nonatomic) unsigned long long nextSuppressionRequestToken;
@property (nonatomic, retain) NPKAssertion *suppressionAssertion;
@property (retain) NSMutableIndexSet *suppressionRequestTokens;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *suppressorQueue;

+ (void)endDoubleClickClientSuppressionWithRequestToken:(unsigned long long)arg1;
+ (bool)isSuppressingDoubleClickClients;
+ (unsigned long long)requestDoubleClickClientSuppressionWithResponseHandler:(id /* block */)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_acquireSuppressionAssertionIfNeededWithCompletion:(id /* block */)arg1;
- (void)_acquireSuppressionAssertionWithCompletion:(id /* block */)arg1;
- (void)_postSuppressionStateChanged;
- (void)dealloc;
- (void)endDoubleClickClientSuppressionWithRequestToken:(unsigned long long)arg1;
- (id)init;
- (bool)isSuppressingDoubleClickClients;
- (unsigned long long)nextSuppressionRequestToken;
- (unsigned long long)requestDoubleClickClientSuppressionWithResponseHandler:(id /* block */)arg1;
- (void)setNextSuppressionRequestToken:(unsigned long long)arg1;
- (void)setSuppressionAssertion:(id)arg1;
- (void)setSuppressionRequestTokens:(id)arg1;
- (void)setSuppressorQueue:(id)arg1;
- (id)suppressionAssertion;
- (id)suppressionRequestTokens;
- (id)suppressorQueue;

@end
