
@interface CDMMarisaTrie : NSObject <CDMBaseTrie> {
    NSString * _filePath;
    struct Trie { 
        struct scoped_ptr<marisa::grimoire::trie::LoudsTrie> { 
            struct LoudsTrie {} *ptr_; 
        } trie_; 
    }  _readOnlyTrie;
    NSNumber * _versionNumber;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *hashValue;
@property (nonatomic, readonly) bool isValid;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_loadTrie;
- (id)_readCachedNumberValueForKey:(id)arg1;
- (bool)createFromEntries:(id)arg1;
- (bool)createFromEntries:(id)arg1 withHashValue:(id)arg2;
- (void)dealloc;
- (bool)hasEntry:(id)arg1;
- (bool)hasPrefix:(id)arg1;
- (id)hashValue;
- (id)initWithFilePath:(id)arg1 versionNumber:(id)arg2;
- (bool)isValid;
- (id)traversePrefix:(id)arg1;

@end
