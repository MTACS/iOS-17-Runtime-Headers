
@interface _ATXBundleIdSet : NSObject {
    _PASCFBurstTrie * _trie;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)containsBundleId:(id)arg1;
- (id)init;
- (id)trie;

@end
