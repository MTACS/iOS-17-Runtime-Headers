
@interface _CDUserActivityCache : NSObject {
    unsigned int  _count;
    _PASLock * _deletionCache;
    <_DKKnowledgeQuerying><_DKKnowledgeSaving><_DKKnowledgeEventStreamDeleting> * _knowledgeStore;
}

- (void).cxx_destruct;
- (void)_populateAppActivityStream;
- (void)_populateAppLocationActivityStream;
- (void)addSourceID:(id)arg1 bundleID:(id)arg2 itemID:(id)arg3;
- (bool)containsObjectForSourceID:(id)arg1 bundleID:(id)arg2 itemID:(id)arg3;
- (unsigned int)count;
- (id)hashArrayForSourceID:(id)arg1 bundleID:(id)arg2 itemID:(id)arg3;
- (id)initWithKnowledgeStore:(id)arg1;
- (void)populateCache;

@end
