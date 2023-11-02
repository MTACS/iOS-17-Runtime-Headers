
@interface HCHuffmanCoder : NSObject {
    HCBurstTrie * _burstTrie;
    HCIndexTable * _indexTable;
}

@property (nonatomic, retain) HCBurstTrie *burstTrie;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, retain) HCIndexTable *indexTable;
@property (nonatomic, readonly) NSUUID *versionUUID;

+ (id)characterCoderForLocale:(id)arg1;
+ (id)coderFromBurstTrieFile:(id)arg1 indexTableFile:(id)arg2;
+ (id)coderMatchingName:(id)arg1 locale:(id)arg2;
+ (id)wordCoderForLocale:(id)arg1;

- (void).cxx_destruct;
- (id)burstTrie;
- (id)codeForKey:(id)arg1;
- (unsigned long long)count;
- (id)indexTable;
- (id)init;
- (id)initWithBurstTrie:(id)arg1 indexTable:(id)arg2;
- (void)setBurstTrie:(id)arg1;
- (void)setIndexTable:(id)arg1;
- (id)stringCodeForKey:(id)arg1;
- (id)versionUUID;

@end
