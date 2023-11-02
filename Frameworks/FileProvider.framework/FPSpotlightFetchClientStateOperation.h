
@interface FPSpotlightFetchClientStateOperation : FPOperation {
    CSSearchableIndex * _index;
    NSString * _indexName;
    FPSpotlightIndexer * _indexer;
    NSString * _reason;
    NSString * _spotlightDomainIdentifier;
    NSURL * _supportURL;
}

+ (id)_currentIndexerVersion;

- (void).cxx_destruct;
- (id)_clientStateCurrentVersionIfNeedReset;
- (void)_fetchClientState;
- (void)_handleFetchedClientState:(id)arg1 error:(id)arg2;
- (void)_markClientStateResetDone;
- (id)initWithIndexer:(id)arg1 index:(id)arg2 indexName:(id)arg3 spotlightDomainIdentifier:(id)arg4 reason:(id)arg5 supportURL:(id)arg6;
- (void)main;
- (id)operationDescription;

@end
