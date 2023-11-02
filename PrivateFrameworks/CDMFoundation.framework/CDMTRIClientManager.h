
@interface CDMTRIClientManager : NSObject {
    TRIClient * _trialClient;
    NSArray * _trialNamespaceNames;
    int  _trialProjectId;
}

@property (nonatomic, readonly) TRIClient *trialClient;
@property (nonatomic, readonly) NSArray *trialNamespaceNames;
@property (nonatomic, readonly) int trialProjectId;

- (void).cxx_destruct;
- (id)description;
- (id)initForProjectId:(int)arg1 withNamespaceNames:(id)arg2;
- (void)initTRIClient;
- (void)refreshTRIClientInternalCache;
- (void)registerAssetsRefreshHandler;
- (id)trialClient;
- (id)trialNamespaceNames;
- (int)trialProjectId;

@end
