
@interface BMAppClipLaunchSource : NSObject <BMSourceProtocol> {
    _CDClientContext * _contextStore;
    _DKKnowledgeStore * _knowledgeStore;
    BMSource * _storeSource;
}

@property (nonatomic, readonly) _CDClientContext *contextStore;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) _DKKnowledgeStore *knowledgeStore;

- (void).cxx_destruct;
- (id)contextStore;
- (id)identifier;
- (id)initWithStoreSource:(id)arg1;
- (id)knowledgeStore;
- (void)sendEvent:(id)arg1;

@end
